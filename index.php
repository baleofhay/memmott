<?php 
	
   include_once("objects/header.inc");
   ?>
<!-- HTML WILL GO HERE FOR THIS PAGE -->
<LINK rel="stylesheet" type="text/css" href="public/css/indexlayout.css" />    

<script>
    function contact(){
        //alert("You want to contact us!!! YAY");
    }
</script>
<h2 class="heading1">Tenant Tracker</h2>
<p class="box1">
	A web based solution for tracking park status managed by Rob Memmott. ;)
    <br> <img src="public/images/windows-mac-linux.jpg" height="80">
</p>
<div class="contactus" onclick="contact();">Request<br>Evaluation</div>
<div class="shadowbox1"></div><div class="shadowbox2"></div>

<img class="cow1" src="public/images/noimage.jpg" width="200">
<img class="cow2" src="public/images/noimage.jpg" width="200">
<h2 class="heading2">Features:</h2>
<div class="box2">
<ul>
    <li>View a Map of your Property color coded with status</li> 
    <li>Support multiple locations.</li>
    <li>Realtime Budget vs Actual comparisons</li>
</ul>
    
</div>
<span class="learnmore" onclick="window.location('products.php')">
    Learn More...
</span>
<?php
   
   include_once("objects/footer.inc");

?>
