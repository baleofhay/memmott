<?php
//PHP up here
session_start();
if(isset($_SESSION[uid])){
    $firstname = $_SESSION[firstname];
    $loginout = "Welcome $firstname <button type='button' onclick='logout();' style='float:right;'>Logout</button>";
}
else{
    $loginout = "<button type='button' onclick='login();' style='float:right;'>Login</button>";
}
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
        "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
	<title>Calfville 2.0</title>
	<meta http-equiv="content-type" 
		content="text/html;charset=utf-8" />
        <style type="text/css">
            /* Most css will be in a separate file but we can put some here 
                Especially when getting things started out quickly*/
            body{
                z-index: -20;
                background-color: #ffd8b5;
            }
            #mainhead{
                margin-left: auto;
                margin-right: auto;
                width: 900px;
                
            }
            #headcolor{
                position: absolute;
                z-index: -10;
                top:0px;
                left:0px;
                width:100%;
                height: 120px;
                border-bottom: solid 1px;
                background-color:  #c1dbfb;
                box-shadow: 0px 3px 5px lightgray;
            }
            #thebody{
                position: absolute;
                top:125px;
                z-index: -11;
                width: 900px;
                bottom: 0px;
                overflow-y: auto;
                background-color: white;
                box-shadow: 0px 0px 3px 3px lightgray;
            }
            #menu{
                position: absolute;
                top:75px;
                
/*                left:100px;*/
                width: 900px;
                height: 20px;
                border: 2px solid;
                border-color: #a0a0cf;
                border-radius: 10px;
            }
            #searchfield{
                float:right;
            }
            #nav {
                display: inline;
                font-size: 16px;
                font-family: sans-serif;
            }
            #nav li{
                border-left: 1px solid #C3C3C3;
                float: left;
                width: 20%;
                list-style: none;
                text-align: center;
                -moz-box-sizing: border-box;
                box-sizing: border-box;
            }
            #nav li:hover{
                text-decoration:  underline;
            }
            #nav li:first-child{
                border:none;
            }
            #nav a{
                display: block;
                color: inherit;
                text-decoration: none;
            }
        </style>
        <script src="public/js/header.js"></script>
        <script type="text/javascript">
            
        </script>
</head>

    <body>
        <div id="headcolor"></div>
        <div id="mainhead">
            <span style="float:left;"><img height="45" src="public/images/logo1.png"></span>
            <span style="float:right;"><input type="search" id="searchfield" placeholder="Search Cattle" onkeyup="search();"><br />
                    <span id="loginarea" style="float:right;"><?= $loginout ?></span>
            </span>
            <br />
            <div id="menu">
                    <ul id="nav">
                        <li>
                            <a href="index.php">Home Page</a>
                        </li><li>
                            <a href="search.php">Search</a>
                        </li><li>       
                            <a href="report.php">Reports</a>
                        </li><li>       
                            <a href="accounts.php">Account Settings</a>
                        </li><li>       
                            <a href="support.php">Client Support</a>
                        </li> 
                    </ul>
            </div>
            <div id="thebody">
        
        
        <!-- This is going to be the main page setup, or Master page :) -->


<?php

?>
