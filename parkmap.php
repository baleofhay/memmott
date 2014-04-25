<?php

include_once("objects/header.inc");

?>
<!-- HTML WILL GO HERE FOR THIS PAGE -->
<LINK rel="stylesheet" type="text/css" href="public/css/parkmap.css" />    

<script>
    function contact(){
        //alert("You want to contact us!!! YAY");
    }
    function context(obj){
    	var spacenum = obj.id;
    	alert("you clicked on " + spacenum + " space");
    }
</script>
<div class="shadowbox1"></div><div class="shadowbox2"></div><div class="shadowbox3"></div><div class="shadowbox4"></div>

	<embed src="parkmaps/mempark.svg" type="image/svg+xml" />

<?php

include_once("objects/footer.inc");
?>
