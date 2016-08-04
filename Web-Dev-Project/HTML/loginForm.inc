<!--  Authors: Lok Sum Lo (n9050159), Thiline Widanagamage (n9185691) -->
<!--  CAB230 Wec Computing Assignment, April 2016 -->


<!DOCTYPE html>
<html>
	<head>
		<title>Log in - Dog Park Searcher</title>
		<meta charset="UTF-8"> 
		<link href="style.css" rel="stylesheet" type="text/css"/>
		<script type="text/javascript" src="scripts.js"></script>
	</head>
	
	<!-- This page displays any errors in case the user fails to login and is a copy of the login page -->
	
	<body>
		<div class="container">
			
			<?php include 'menu.inc' ?>
			<?php include 'setup.inc'?>
			
			<div class="wrapper">
				<div class="content">
					<form name="login" id="login" action="loginValidate.php" method="post">
						<fieldset>
							<legend>LOG IN</legend></br>
							
							<!-- Username and password don't match -->
							<label class="errorLogin"><?php if(isset($errors['loginFail'])) echo $errors['loginFail'] ?></label></br>
							
							<ul>
								<!-- Invalid formats for username or password (validations) -->
								<li>Username:</li><input type="text" name="username" required><label class="errorMsgSmall"><?php if(isset($errors['username'])) echo $errors['username'] ?></label></br></br>
								<li>Password:</li><input type="password" name="psw" id="psw" required><label class="errorMsgSmall"><?php if(isset($errors['psw'])) echo $errors['psw'] ?></label></br></br>
							</ul>
							<input type="submit" class="submitButton" value="LOG IN" id="submitLogin">
						</fieldset>
					</form>
				</div> <!-- content -->
			</div> <!-- wrapper -->
		 </div> <!-- container -->
		 
		 <div class="footer">
			<a>About</a>
			<a>Contact us</a>
		 </div> <!-- footer -->
	</body>
	
</html>