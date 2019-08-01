<!--
	var referer = encodeURIComponent(document.referrer);
	var redirectTo = encodeURIComponent(window.location.href);
	$.ajax({
	   type: "GET",
	   url: "/contentgating",
	   data: {"referer": referer, "redirectTo": redirectTo},
	   success: function(data){
		   if (typeof(data) != 'undefined' && data != null && typeof(data.redirectTo) != 'undefined' && data.redirectTo != null)
			{
				window.location = data.redirectTo;
			}
	   },
	   dataType: "json",
	   async: false,
	   cache: false
	 });
-->