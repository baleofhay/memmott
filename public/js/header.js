
            //We will put any global javascript here that we don't want included
            //in a javascript include file located at public/js/
            var j = 100;
            function search(){
                var forwhat = document.getElementById("searchfield").value;
                alert("Please Login First");
            }
            
            function login(){
                document.getElementById("logindiv").style.display = "block";
                document.getElementById("username").focus();
                //grow();  //Can't quite get this to work, animation will come later :)
            }
            function cancel(){
                document.getElementById("logindiv").style.display = "none";
            }
            function grow(){
                
//                var div = document.getElementById("logindiv");
//                div.style.backgroundColor = '#0000FF';
//                j = parseFloat(div.offsetHeight);
//                console.log("Ran once j is:" + j);
//                j++;
//                div.style.height = j;
//                div.innerHTML = j;
//                if(j < 200){
//                setTimeout('grow()', 10);
//                }
            }
            function logout(){
                var sure = confirm("Are you sure you want to Logout?");
                if(!sure){
                   return; 
                }
                if(window.XMLHttpRequest){
                    xmlhttp = new XMLHttpRequest();
                }
                else{
                    xmlhttp = new ActiveXObject('Microsoft.XMLHTTP');
                }
                //Build AJAX listener to insert a new row after processing is done.
                xmlhttp.onreadystatechange=function(){
                    //alert(xmlhttp.status);
                    if(xmlhttp.readyState == 4 && xmlhttp.status == 200){
                        //alert(xmlhttp.responseText);
                        var result = xmlhttp.responseText;
                        alert(result);
                        //document.getElementById("loginarea").innerHTML = "<button type='button' onclick='login();' style='float:right;'>Login</button>";
                        window.location = "index.php";
                        
                    }
                }
                    xmlhttp.open("POST","login.php",true);
                    xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");
                    xmlhttp.send("cmd=logout");
            }
            function passcreds(){
                //This function will pass the credentials to the server
                //if all is good the appropriate stuff will be set to log them 
                //in and I'll change the header to link to the user portal
                //I will need to SSL this site
                if(window.XMLHttpRequest){
                    xmlhttp = new XMLHttpRequest();
                }
                else{
                    xmlhttp = new ActiveXObject('Microsoft.XMLHTTP');
                }
                //Build AJAX listener to insert a new row after processing is done.
                xmlhttp.onreadystatechange=function(){
                    //alert(xmlhttp.status);
                    if(xmlhttp.readyState == 4 && xmlhttp.status == 200){
                        //alert(xmlhttp.responseText);
                        var result = xmlhttp.responseText;
                        
                        if(result == "Bad Username or Password"){
                            alert(result);
                        }
                        else{
                           //document.getElementById("loginarea").innerHTML = result; 
                           window.location = "search.php";
                        }
                        cancel();
                        
                    }
                }
                var username = document.getElementById("username").value;
                var password = document.getElementById("password").value;
                    xmlhttp.open("POST","login.php",true);
                    xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");
                    xmlhttp.send("cmd=logmein&username=" + username + "&password=" + password);
            }



