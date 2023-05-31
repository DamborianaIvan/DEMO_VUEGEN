Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"113\", \"Chromium\";v=\"113\", \"Not-A.Brand\";v=\"24\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("NCDBC", 
		"URL=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://192.168.0.16:8008/ssdp/device-desc.xml", "Referer=", ENDITEM, 
		"Url=1158209246/desktopweb/jslib/tparty/widgets/imageUpload/imageUpload.js", ENDITEM, 
		"Url=1158209246/desktopweb/jslib/konyframework.js", ENDITEM, 
		"Url=1158209246/desktopweb/images/en_US/loader_loop.gif", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/app.js", ENDITEM, 
		"Url=1158209246/desktopweb/FontAwesome5Pro-Light.ttf", ENDITEM, 
		"Url=1158209246/desktopweb/FontAwesome5Pro-Regular.ttf", ENDITEM, 
		"Url=1158209246/desktopweb/FontAwesome5Pro-Solid.ttf", ENDITEM, 
		"Url=1158209246/desktopweb/SourceSansPro-Regular.ttf", ENDITEM, 
		"Url=1158209246/desktopweb/resources/strings/en_US.js?ver=2.71.28", ENDITEM, 
		"Url=1158209246/desktopweb/SourceSansPro-SemiBold.ttf", ENDITEM, 
		"Url=1158209246/desktopweb/Lato-Regular.ttf", ENDITEM, 
		"Url=1158209246/desktopweb/Lato-Light.ttf", ENDITEM, 
		"Url=1158209246/desktopweb/Lato-Medium.ttf", ENDITEM, 
		"Url=1158209246/desktopweb/konydesktop.css", ENDITEM, 
		"Url=1158209246/desktopweb/Montserrat-Bold.ttf", ENDITEM, 
		"Url=1158209246/desktopweb/Montserrat-Medium.ttf", ENDITEM, 
		"Url=1158209246/desktopweb/Lato-Semibold.ttf", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/kvmodules.js", ENDITEM, 
		"Url=1158209246/desktopweb/resources/strings/es_ES.js?ver=2.71.28", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/CordovaEvents.js", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/AccountsModule/frmAccountsLanding.js", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/Coliving.js", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/AccountsModule/frmAccountsLandingController.js", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/AuthModule/frmInitController.js", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/ColivingModules.js", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/AuthModule/frmInit.js", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/AuthModule/frmLoginController.js", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/AuthModule/frmLogin.js", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/Deeplinking.js", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/AccessibilityUtil.js", ENDITEM, 
		"Url=1158209246/desktopweb/appjs/CredicoopLink.js", ENDITEM, 
		"Url=1158209246/desktopweb/images/imgload.gif", ENDITEM, 
		"Url=1158209246/desktopweb/images/cvv_tutorial.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/logo_bccl.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/loader_loop.gif", ENDITEM, 
		"Url=1158209246/desktopweb/images/error.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/image_huella.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/modo_icon.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/chrome_128x128.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/firefox_128x128.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/qrpayment.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/modo_logo.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/tutorial_cm.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/credicoop_logo.png", ENDITEM, 
		"Url=1158209246/desktopweb/Montserrat-Regular.ttf", ENDITEM, 
		"Url=1158209246/desktopweb/images/favicon.ico?ver=1158209246", ENDITEM, 
		"Url=1158209246/desktopweb/images/img_transparent.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/dotimage.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/exclamation.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/dot_3.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/add_icon.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/dots.png", ENDITEM, 
		"Url=1158209246/desktopweb/images/modo2x.png", ENDITEM, 
		"Url=1158209246/desktopweb/Lato-Black.ttf", ENDITEM, 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=113", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//05bO2g9msxM2pCgYIARAAGAUSNwF-L9IrP6HVURP5PDUH2Konj6o1GPcRuqxBHEoTzpboz325PHZkAokvXvkjyIYs91xbjlRdhzs&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("property-id", 
		"UNI-H84HA");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"113\", \"Chromium\";v=\"113\", \"Not-A.Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_header("unistream-scope", 
		"PRD_L9FZ");

	web_add_header("unistream-uuid", 
		"183c30ca-0423-498a-a803-fb9008dfb0c4");

	web_url("list", 
		"URL=https://cdn.unistream.io/option/list?scopeId=PRD_L9FZ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"chrome-extension://fhbohimaelbohpjbbldcngcnapndodjp");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":1,\"method\":\"eth_call\",\"params\":[{\"data\":\"0x76671808\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("property-id", 
		"UNI-H84HA");

	web_add_header("unistream-filter-set", 
		"{\"client\":{\"version\":\"5.2.6\"},\"geo\":{\"cityName\":\"Tandil\",\"country\":\"AR\",\"latitude\":-37.3154,\"longitude\":-59.1579,\"zip\":\"7000\"}}");

	web_add_header("unistream-filter-signature", 
		"$client.version:5.2.6$geo.country:AR$state:undefined");

	web_add_header("unistream-scope", 
		"PRD_L9FZ");

	web_add_header("unistream-uuid", 
		"183c30ca-0423-498a-a803-fb9008dfb0c4");

	web_url("filtered", 
		"URL=https://cdn.unistream.io/interaction/list/filtered?filterSet=%7B%22client%22%3A%7B%22version%22%3A%225.2.6%22%7D%2C%22geo%22%3A%7B%22cityName%22%3A%22Tandil%22%2C%22country%22%3A%22AR%22%2C%22latitude%22%3A-37.3154%2C%22longitude%22%3A-59.1579%2C%22zip%22%3A%227000%22%7D%7D&scopeId=PRD_L9FZ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"chrome-extension://fhbohimaelbohpjbbldcngcnapndodjp");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_2", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":2,\"method\":\"eth_call\",\"params\":[{\"data\":\"0x135022c20000000000000000000000000000000000000000000000000000000000000013\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		LAST);

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_3", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":3,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb358100000000000000000000000058df12150e765cfa08d3d7027ffefe3ebc6a977d\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		EXTRARES, 
		"Url=https://easylist-downloads.adblockplus.org/exceptionrules.txt?addonName=adblockchrome&addonVersion=5.6.0&application=chrome&applicationVersion=113.0.0.0&platform=chromium&platformVersion=113.0.0.0&lastVersion=202305101540&downloadCount=4%2B&disabled=false&manifestVersion=2&firstVersion=202302", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"chrome-extension://cmedhionkhpnakcndndgjdbohmhepckk");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("property-id", 
		"UNI-H84HA");

	web_add_header("unistream-uuid", 
		"183c30ca-0423-498a-a803-fb9008dfb0c4");

	web_custom_request("user", 
		"URL=https://data.unistream.io/user", 
		"Method=PATCH", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		"Body={\"client\":{\"version\":\"5.2.6\"}}", 
		LAST);

	web_add_auto_header("Origin", 
		"chrome-extension://fhbohimaelbohpjbbldcngcnapndodjp");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_4", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":4,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb35810000000000000000000000003e7802ac3428d29d942abe0d967481b36f84023f\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		LAST);

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_5", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":5,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb358100000000000000000000000070eaf5a4b5c1e4585283976eef0c7ef0beb7676e\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		LAST);

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_6", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":6,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb3581000000000000000000000000c1be81db2ec118bb8ca6d0775bbf440a0a1a8312\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_7", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":7,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb35810000000000000000000000006651a20286e600af76d985a4d155db8c31f2c1aa\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		LAST);

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_8", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":9,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb3581000000000000000000000000564cca5c23a40a9b322d567e5458a1edf3f1457f\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_9", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":8,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb35810000000000000000000000003609c974fe0251fee429da927676163016ab12aa\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		LAST);

	web_add_cookie("timezoneOffset=-10800,0; DOMAIN=steamcommunity.com");

	web_add_cookie("_ga=GA1.2.2057018461.1676048696; DOMAIN=steamcommunity.com");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("steamcommunity.com", 
		"URL=https://steamcommunity.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"chrome-extension://fhbohimaelbohpjbbldcngcnapndodjp");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_10", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":10,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb358100000000000000000000000065f8296b232afefd295ff4fd854b67f26de15e33\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		LAST);

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_11", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":11,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb3581000000000000000000000000f4cbfad568777ddd64b860b6886241c6b25d2491\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Kony-App-Key", 
		"a46931ab1216413f9addf1533f7d9f57");

	web_add_auto_header("X-Kony-App-Secret", 
		"b5fec71b1638b6f6d3099713505994c0");

	web_add_auto_header("X-Kony-App-Version", 
		"2.45");

	web_add_header("X-Kony-Platform-Type", 
		"web");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22login_$anonymousProvider%22%7D");

	web_add_header("X-Kony-SDK-Type", 
		"js");

	web_add_header("X-Kony-SDK-Version", 
		"9.2.15");

	web_submit_data("login", 
		"Action=https://ncdtesting.bancocredicoop.coop/authService/100000002/login", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_header("X-Kony-Integrity", 
		"EOOBTCUHNL22;A3B6F9DE9F5C102A4AE444255457A5EBEEA41C28CEAB0ABBE40FAC188962E6E1");

	web_add_header("X-HTTP-Method-Override", 
		"GET");

	web_custom_request("appconfig", 
		"URL=https://ncdtesting.bancocredicoop.coop/authService/100000002/appconfig", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("X-Kony-App-Key");

	web_revert_auto_header("X-Kony-App-Secret");

	web_revert_auto_header("X-Kony-App-Version");

	web_add_header("X-Kony-Integrity", 
		"XYRBWVSGVPYMJ;38DBFD6DE19D33CB5576BDD926B621F108D85E45AAB55AB750F5B868935E3D86");

	web_custom_request("IST", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/IST", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"Body=konyreportingparams="
		"%7B%22plat%22%3A%22web%22%2C%22chnl%22%3A%22desktop%22%2C%22did%22%3A%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22%2C%22aid%22%3A%22NCDBC%22%2C%22aver%22%3A%222.71.28%22%2C%22aname%22%3A%22NCDBC%22%2C%22mfaid%22%3A%224237d582-f662-4d83-b6f0-bd96c524dce1%22%2C%22mfbaseid%22%3A%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22%2C%22mfaname%22%3A%22DbpLocalServices%22%2C%22atype%22%3A%22spa%22%2C%22os%22%3A%22113%22%2C%22stype%22%3A%22b2c%22%2C%22dm%22%3A%22%22%2C%22ua%22%3A%22Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F113.0.0.0%20Safari%2F537.36%22%2C%22sessiontype%22%3A%22I%22%2C%22kuid%22%3A%22%22%2C%22launchDates%22%3A%5B%5B%221683817330410-2ee8-7a96-e470%22%2C%222023-05-11%2015%3A02%3A10%22%2C%22I%22%5D%5D%2C%22svcid%22%3A%22RegisterKonySession%22%7D", 
		LAST);

	web_add_header("X-Kony-API-Version", 
		"2.0");

	web_add_auto_header("X-Kony-Authorization", 
		"eyAidHlwIjogImp3dCIsICJhbGciOiAiUlMyNTYiIH0.eyAiX3ZlciI6ICJ2MS4xIiwgImlzcyI6ICJodHRwOi8vc2JpbjIxMDJseC5iYW5jb2NyZWRpY29vcC5jb29wOjgwODAvYXV0aFNlcnZpY2UvMTAwMDAwMDAyIiwgIl9zY29wZSI6ICJnIiwgIl9pc3NtZXRhIjogIi9tZXRhZGF0YS80NlBhWFJjMXRSeExoeXFPaldxd2lRPT0iLCAiX2FwcCI6ICI0MjM3ZDU4Mi1mNjYyLTRkODMtYjZmMC1iZDk2YzUyNGRjZTEiLCAiX3Nlc3Npb25faWQiOiAiMjI3ZmJmYTktYTk1YS00MzQzLWFhOTYtZGNkZTZiZDFmNTU5IiwgIl9wdWlkIjogMywgIl9pZHAiOiAiIiwgImV4cCI6IDE2ODM4MTg1MzIsICJpYXQiOiAxNjgzODE3MzMzLCAiX3Nlc3Npb25fdGlkIjogIjEwMD"
		"AwMDAwMiIsICJfcHJvdl91c2VyaWQiOiAiYW5vbnltb3VzIiwgImp0aSI6ICJkNzZkOTg1Mi0wMGNmLTQ3NmMtOWMyOC04NjNlY2Y4ZTMwNTIiLCAiX2FjcyI6ICIxMDAwMDAwMDIiIH0.yu7TD_ZweGX0fLJuFPOtk_H5xZVAg3zvufyl_rC233dAWorpBSrEzEZfteaSpinDBKa3nDQJifs3k_I9NobO4XIHMGoJKiOlKiIWJtHaYYJBQIT9TvjZISfRo5zz__IKmnbFkiTwdeWSJlMRURUZFnBdRhjvx8rA5ymAkMv8ktZoCHtIZ2vYAUusGpP455BN3BVjbzd-rZD0wqb6PQYs77G7FIyTiczNnqVOOnh0IY2cjCTndl1gAP6UxM4VPYc-8qKnRr1Ze5Qwk5I3kGWfc9WbI8xP892FA_B7d6Gi7KKMEJMvDjBLWSPFpA_3UeHzFTa48pb4Ta7-h1tGTqGGXw");

	web_add_header("X-Kony-DeviceId", 
		"24BD73D7-0BC5-483C-81D6-4D1458B11A78");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22Application%22%7D");

	web_custom_request("Application", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/objects/Application", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22AppVersion%22%3A%222.71.28%22%2C%22OSType%22%3A%22thinclient%22%2C%22OSversion%22%3A%22113%22%7D", 
		EXTRARES, 
		"Url=https://www.google.com/recaptcha/api.js", "Referer=https://ncdtesting.bancocredicoop.coop/", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_url("properties", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/configurations/client/properties", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmInit%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22metadata_IdentityManagement%22%7D");

	web_add_auto_header("X-Kony-API-Version", 
		"1.0");

	web_add_auto_header("X-Kony-DeviceId", 
		"24BD73D7-0BC5-483C-81D6-4D1458B11A78");

	web_custom_request("IdentityManagement", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/IdentityManagement/IdentityManagement", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmInit%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22getImages%22%7D");

	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_submit_data("getImages", 
		"Action=https://ncdtesting.bancocredicoop.coop/services/bcclJavaServices/getImages", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=groups", "Value=1,2", ENDITEM, 
		EXTRARES, 
		"Url=https://www.gstatic.com/recaptcha/releases/wqcyhEwminqmAoT8QO_BkXCr/recaptcha__en.js", "Referer=https://ncdtesting.bancocredicoop.coop/", ENDITEM, 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmInit%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22IdentityManagement%22%7D");

	web_custom_request("getPasswordRulesAndPolicy", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/IdentityManagement/operations/IdentityManagement/getPasswordRulesAndPolicy", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%7D", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22BcclConfiguration%22%7D");

	web_submit_data("BcclConfiguration", 
		"Action=https://ncdtesting.bancocredicoop.coop/services/bcclJavaServices/BcclConfiguration", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22metadata_DynamicContentDbp%22%7D");

	web_add_auto_header("X-Kony-API-Version", 
		"2.0");

	web_custom_request("DynamicContentDbp", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/DynamicContentDbp", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22TermsAndConditions%22%7D");

	web_add_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_custom_request("getCustomerTermsAndConditionsPreLoginBccl", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/TermsAndConditions/getCustomerTermsAndConditionsPreLoginBccl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22languageCode%22%3A%22es-ES%22%2C%22termsAndConditionsCode%22%3A%22TyC_Aceptar_Cookies%22%7D", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22metadata_Parametros%22%7D");

	web_custom_request("Parametros", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/Parametros", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22DynamicContentDbp%22%7D");

	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_custom_request("getDynamicContent", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/DynamicContentDbp/getDynamicContent", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22form%22%3A%22LOGIN%22%2C%22section%22%3A%22RECUPERAR_CLAVE_LEGACY%22%7D", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22Parametros%22%7D");

	web_custom_request("getParametros", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Parametros/getParametros", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22nombreParametro%22%3A%22PERMITIR_SESION_MULTIPLE_CANAL%22%7D", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTEzLjAuNTY3Mi45MxLiAQl5bGadcmziMRIFDRQmZZwSBQ2bsXNGEgUNZVYclBIFDUH_J-8SBQ0HVasKEgUNx2BkVBIFDWMzAaASBQ1JVgSGEgUNO0UckxIFDf4S1qwSBQ35j2FnEgUNN-svFxIFDQP6eAsSBQ2FwgTdEgUNaAzBaBIFDZaxQMESBQ2HFGAKEgUN_BEW2BIFDc5P-UISBQ145XjfEgUNyHNszhIFDfvFtP0SBQ2IrxSdEgUNlqTvrxIFDUw2Qn8SBQ0tpGvLEgUNDurtaRIFDboMlGYSBQ1jBcf5EgUNh-2FQBIFDYo3OMU=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Kony-API-Version");

	web_revert_auto_header("X-Kony-Authorization");

	web_revert_auto_header("X-Kony-DeviceId");

	web_add_auto_header("X-Kony-App-Key", 
		"a46931ab1216413f9addf1533f7d9f57");

	web_add_auto_header("X-Kony-App-Secret", 
		"b5fec71b1638b6f6d3099713505994c0");

	web_add_auto_header("X-Kony-App-Version", 
		"2.45");

	web_add_header("X-Kony-Platform-Type", 
		"web");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22login_DbxUserLogin%22%7D");

	web_add_header("X-Kony-SDK-Type", 
		"js");

	web_add_header("X-Kony-SDK-Version", 
		"9.2.15");

	lr_think_time(16);

	web_submit_data("login_2", 
		"Action=https://ncdtesting.bancocredicoop.coop/authService/100000002/login?provider=DbxUserLogin", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=UserName", "Value=U2FsdGVkX1+ZPZ2MXjC1BySBrBvc2sQof/QrmjW2HDQ=", ENDITEM, 
		"Name=Password", "Value=U2FsdGVkX1/NeqoUf23F2H4a9h3iX9Cuew2oABer9UE=", ENDITEM, 
		"Name=DNI", "Value=17319143", ENDITEM, 
		"Name=loginOptions", "Value={\"isOfflineEnabled\":false,\"enable_refresh_login\":true}", ENDITEM, 
		"Name=httpRequestOptions", "Value={\"timeoutIntervalForRequest\":10}", ENDITEM, 
		"Name=provider", "Value=DbxUserLogin", ENDITEM, 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"GET");

	web_add_header("X-Kony-Integrity", 
		"STPVWBOUFMM;C1615D012DE74610997C7CB41F0FF6A9027108D366629A463F3A791D10B0D829");

	web_custom_request("appconfig_2", 
		"URL=https://ncdtesting.bancocredicoop.coop/authService/100000002/appconfig", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("X-Kony-App-Key");

	web_revert_auto_header("X-Kony-App-Secret");

	web_revert_auto_header("X-Kony-App-Version");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22220322131907389%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,"
		"%22mfbaseid%22:%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22DbxUser%22%7D");

	web_add_auto_header("X-Kony-API-Version", 
		"2.0");

	web_add_auto_header("X-Kony-Authorization", 
		"eyAidHlwIjogImp3dCIsICJhbGciOiAiUlMyNTYiIH0.eyAiX2VtYWlsIjogImx1Y2lhbmEuYW5uZXR0YWFhYUBiYW5jb2NyZWRpY29vcC5jb29wIiwgIl92ZXIiOiAidjEuMSIsICJpc3MiOiAiaHR0cDovL3NiaW4yMTAybHguYmFuY29jcmVkaWNvb3AuY29vcDo4MDgwL2F1dGhTZXJ2aWNlLzEwMDAwMDAwMiIsICJfc2NvcGUiOiAiZyIsICJfaXNzbWV0YSI6ICIvbWV0YWRhdGEvNDZQYVhSYzF0UnhMaHlxT2pXcXdpUT09IiwgIl9hcHAiOiAiNDIzN2Q1ODItZjY2Mi00ZDgzLWI2ZjAtYmQ5NmM1MjRkY2UxIiwgIl9zZXNzaW9uX2lkIjogImFkNzI2M2E2LTYyNDYtNGRkZC1hNGEwLTVhMzAzODA0OTgwNiIsICJfcHVpZCI6IDM2NTExNzAyOTM2NDIxOTI4NDUsIC"
		"JfYXV0aHoiOiAiZXlKd1pYSnRhWE56YVc5dWN5STZlMzBzSW5KdmJHVnpJanBiWFgwIiwgIl9pZHAiOiAiRGJ4VXNlckxvZ2luIiwgImV4cCI6IDE2ODM4MTg1NTMsICJpYXQiOiAxNjgzODE3MzUzLCAiX3Nlc3Npb25fdGlkIjogIjEwMDAwMDAwMiIsICJfcHJvdl91c2VyaWQiOiAiMjIwMzIyMTMxOTA3Mzg5IiwgImp0aSI6ICIwYTM0MTFiMi1hMWI2LTQ4Y2EtODlmYi1lZTg3ODYyY2JkNzciLCAiX2FjcyI6ICIxMDAwMDAwMDIiLCAiX3Byb3ZpZGVycyI6IFsgIkRieFVzZXJMb2dpbiIgXSB9.U8IeqVWE1iuOyV1kjYzL6lqoXGGgi0MnJorZCfrGzaXrm_EmXEpl9EiiOVJAOkx5tkSrlczHZOffaG93icqtEj-C4nDHNTO9q9pUNMQHKPg6_qmPQ48fWxx6m049nzU"
		"zOe9HvkyW8TzjxfBKJKCHA_z7IaWQNmSJnP3xG-JTCFULvTA_Rae4GpioT32TCEX8d5gWP5DodSWUWJ0ZMTCqz6GUWWulSe4wofWmhFcZFEnXIMCVb-LIkKxdeH3w929UlZS0JUbJIXROFf8WAChn7Nay4Iv3Ly9eg7HbllgT4ImvY1tL52JpTvLNoDx5rPKEobaurAeCaVjAqW6S4vhy_w");

	web_add_auto_header("X-Kony-DeviceId", 
		"24BD73D7-0BC5-483C-81D6-4D1458B11A78");

	web_custom_request("getOperadores", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/DbxUser/getOperadores", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%7D", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/fullHashes:find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINMTEzLjAuNTY3Mi45MxIbCg0IBRAGGAEiAzAwMTABEOPNEBoCGAqB2rShEhsKDQgBEAYYASIDMDAxMAEQg6MMGgIYCgNh9V4SGwoNCAcQBhgBIgMwMDEwARD06gwaAhgKnFtjLBIZCg0IARAGGAEiAzAwMTADEBQaAhgKXSik7hIaCg0IARAIGAEiAzAwMTAEEPAyGgIYCu-tpFgSGgoNCA8QBhgBIgMwMDEwARD5dBoCGAqbrQQgEhkKDQgKEAgYASIDMDAxMAEQBxoCGApGceYiEhkKDQgJEAYYASIDMDAxMAEQIBoCGAonuqI9EhoKDQgIEAYYASIDMDAxMAEQ2RIaAhgKhx3coBIbCg0IDRAGGAEiAzAwMTABEKroARoCGAo6j-_AEhsKDQgDEAYYASIDMDAxMAEQ0pgMGgIYCjtBRlMSGwoNCA4QBhgBIgMwMDEwARDKgAcaAhgKnIfZ4BIaCg0IEB"
		"AGGAEiAzAwMTABEJIZGgIYCiCme-EaKggBCAMIBQgGCAcICAgJCAoIDQgOCA8IEBABEAgaBgoEV8CisCABIAMgBA==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22220322131907389%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,"
		"%22mfbaseid%22:%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22metadata_SegundoFactor%22%7D");

	web_custom_request("SegundoFactor", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/SegundoFactor", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22220322131907389%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,"
		"%22mfbaseid%22:%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22SegundoFactor%22%7D");

	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_custom_request("conectar", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/SegundoFactor/conectar", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22browser%22%3A%22Chrome%20113%22%2C%22medioConexion%22%3A%22WEB%22%2C%22sistemaOperativo%22%3A%22Windows%2010%22%2C%22latitud%22%3A%22%22%2C%22longitud%22%3A%22%22%2C%22version%22%3A%222.71.28%22%2C%22idOperador%22%3A%225606%22%7D", 
		LAST);

	web_add_auto_header("X-Kony-API-Version", 
		"1.0");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22220322131907389%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,"
		"%22mfbaseid%22:%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22BcclConfiguration%22%7D");

	web_submit_data("BcclConfiguration_2", 
		"Action=https://ncdtesting.bancocredicoop.coop/services/bcclJavaServices/BcclConfiguration", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("X-Kony-API-Version", 
		"2.0");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22User%22%7D");

	web_custom_request("User", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/objects/User", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Kony-API-Version", 
		"1.0");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22getImages%22%7D");

	web_add_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_submit_data("getImages_2", 
		"Action=https://ncdtesting.bancocredicoop.coop/services/bcclJavaServices/getImages", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=groups", "Value=7,2,4,5", ENDITEM, 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22metadata_ServicesPay%22%7D");

	web_add_auto_header("X-Kony-API-Version", 
		"2.0");

	web_custom_request("ServicesPay", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/ServicesPay", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t195.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22metadata_SegundoFactor%22%7D");

	web_custom_request("SegundoFactor_2", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/SegundoFactor", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22metadata_Operations%22%7D");

	web_custom_request("Operations", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/Operations", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22metadata_Investments%22%7D");

	web_custom_request("Investments", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/Investments", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22Cards%22%7D");

	web_add_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_add_header("X-Kony-CustomParams", 
		"%7B%22idOperador%22:%225606%22,%22idAdherente%22:%22105752%22,%22geolocalizacion%22:%22%22,%22canal%22:%22BPI%22,%22appVersion%22:%222.71.28%22%7D");

	web_add_header("bx-trace-id", 
		"8e098fef-fa50-474a-b8fe-1d5fe462272a");

	web_custom_request("getTarjetasCredito", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Cards/getTarjetasCredito", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22metadata_ClaveMovil%22%7D");

	web_custom_request("ClaveMovil", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/ClaveMovil", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22Cards%22%7D");

	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_add_header("X-Kony-CustomParams", 
		"%7B%22idOperador%22:%225606%22,%22idAdherente%22:%22105752%22,%22geolocalizacion%22:%22%22,%22canal%22:%22BPI%22,%22appVersion%22:%222.71.28%22%7D");

	web_add_header("bx-trace-id", 
		"8e098fef-fa50-474a-b8fe-1d5fe462272a");

	web_custom_request("getTarjetasCredito_2", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Cards/getTarjetasCredito", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22DbxUser%22%7D");

	web_custom_request("getPasswordLockoutSettings", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/DbxUser/getPasswordLockoutSettings", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		LAST);

	web_add_auto_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22Notifications%22%7D");

	web_custom_request("getUnreadNotificationCount", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Notifications/getUnreadNotificationCount", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%7D", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("Notifications", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/objects/Notifications", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22Accounts%22%7D");

	web_add_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_add_header("X-Kony-CustomParams", 
		"%7B%22idOperador%22:%225606%22,%22idAdherente%22:%22105752%22,%22geolocalizacion%22:%22%22,%22canal%22:%22BPI%22,%22appVersion%22:%222.71.28%22%7D");

	web_add_header("bx-trace-id", 
		"8e098fef-fa50-474a-b8fe-1d5fe462272a");

	web_custom_request("getAccountsListBccl", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Accounts/getAccountsListBccl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		LAST);

	web_add_auto_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22metadata_Parametros%22%7D");

	web_custom_request("Parametros_2", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/Parametros", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("Parametros_3", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/Parametros", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_add_auto_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22DbxUser%22%7D");

	web_custom_request("getUserProfileImage", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/DbxUser/getUserProfileImage", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t208.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%7D", 
		LAST);

	web_custom_request("getUserProfileImage_2", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/DbxUser/getUserProfileImage", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%7D", 
		LAST);

	web_revert_auto_header("X-Kony-API-Version");

	web_revert_auto_header("X-Kony-Authorization");

	web_revert_auto_header("X-Kony-DeviceId");

	web_revert_auto_header("X-Kony-ReportingParams");

	web_custom_request("CMS", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/CMS", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t210.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=konyreportingparams=%7B%22os%22%3A%22113%22%2C%22dm%22%3A%22%22%2C%22did%22%3A%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22%2C%22ua%22%3A%22Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F113.0.0.0%20Safari%2F537.36%22%2C%22aid%22%3A%22NCDBC%22%2C%22aname%22%3A%22NCDBC%22%2C%22chnl%22%3A%22desktop%22%2C%22plat%22%3A%22web%22%2C%22aver%22%3A%222.71.28%22%2C%22atype%22%3A%22spa%22%2C%22stype%22%3A%22b2c%22%2C%22kuid%22%3A%22%22%2C%22mfaid%22%3A%224237d582-f662-4d83-b6f0-bd96c524dce1%22%2C%22mfbaseid%22%3A%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22%2C%22mfaname%22%3A%22DbpLocalServices%22%2C%22sdkversion%22%3A%229.2.15%22%2C%22sdktype%22%3A%22js%22%2C%22fid%22%3A%22frmAccou"
		"ntsLanding%22%2C%22sessiontype%22%3A%22I%22%2C%22events%22%3A%5B%5D%2C%22reportData%22%3A%5B%7B%22ts%22%3A%222023-05-11%2015%3A02%3A35%22%2C%22fid%22%3A%22frmAccountsLanding%22%2C%22metrics%22%3A%7B%22Accessed%20Modules%22%3A%22Accounts%22%2C%22Ages%22%3A%2255-70%22%7D%2C%22rsid%22%3A%221683817330410-2ee8-7a96-e470%22%7D%5D%2C%22rsid%22%3A%221683817330410-2ee8-7a96-e470%22%2C%22svcid%22%3A%22CaptureKonyCustomMetrics%22%7D", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTEzLjAuNTY3Mi45MxKjAQnjQ7_OnhNm3hIFDeK7_WwSBQ3TzD7UEgUN4N8hFRIFDcMZA_kSBQ1ewd6dEgUNhf3JlRIFDS_Vn-4SBQ19cJR8EgUNn8QhcRIFDUngi2ASBQ2nr4nyEgUN9tBLuxIFDRW07skSBQ3Y3jRyEgUN5ngDthIFDbVBB0USBQ1uWZWtEgUNdoHXWBIFDf0YNjkSBQ3wf70IEgUNGeJ7VhIFDdtZht0=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22Operations%22%7D");

	web_add_auto_header("X-Kony-API-Version", 
		"2.0");

	web_add_auto_header("X-Kony-Authorization", 
		"eyAidHlwIjogImp3dCIsICJhbGciOiAiUlMyNTYiIH0.eyAiX2VtYWlsIjogImx1Y2lhbmEuYW5uZXR0YWFhYUBiYW5jb2NyZWRpY29vcC5jb29wIiwgIl92ZXIiOiAidjEuMSIsICJpc3MiOiAiaHR0cDovL3NiaW4yMTAybHguYmFuY29jcmVkaWNvb3AuY29vcDo4MDgwL2F1dGhTZXJ2aWNlLzEwMDAwMDAwMiIsICJfc2NvcGUiOiAiZyIsICJfaXNzbWV0YSI6ICIvbWV0YWRhdGEvNDZQYVhSYzF0UnhMaHlxT2pXcXdpUT09IiwgIl9hcHAiOiAiNDIzN2Q1ODItZjY2Mi00ZDgzLWI2ZjAtYmQ5NmM1MjRkY2UxIiwgIl9zZXNzaW9uX2lkIjogImFkNzI2M2E2LTYyNDYtNGRkZC1hNGEwLTVhMzAzODA0OTgwNiIsICJfcHVpZCI6IDM2NTExNzAyOTM2NDIxOTI4NDUsIC"
		"JfYXV0aHoiOiAiZXlKd1pYSnRhWE56YVc5dWN5STZlMzBzSW5KdmJHVnpJanBiWFgwIiwgIl9pZHAiOiAiRGJ4VXNlckxvZ2luIiwgImV4cCI6IDE2ODM4MTg1NTMsICJpYXQiOiAxNjgzODE3MzUzLCAiX3Nlc3Npb25fdGlkIjogIjEwMDAwMDAwMiIsICJfcHJvdl91c2VyaWQiOiAiMjIwMzIyMTMxOTA3Mzg5IiwgImp0aSI6ICIwYTM0MTFiMi1hMWI2LTQ4Y2EtODlmYi1lZTg3ODYyY2JkNzciLCAiX2FjcyI6ICIxMDAwMDAwMDIiLCAiX3Byb3ZpZGVycyI6IFsgIkRieFVzZXJMb2dpbiIgXSB9.U8IeqVWE1iuOyV1kjYzL6lqoXGGgi0MnJorZCfrGzaXrm_EmXEpl9EiiOVJAOkx5tkSrlczHZOffaG93icqtEj-C4nDHNTO9q9pUNMQHKPg6_qmPQ48fWxx6m049nzU"
		"zOe9HvkyW8TzjxfBKJKCHA_z7IaWQNmSJnP3xG-JTCFULvTA_Rae4GpioT32TCEX8d5gWP5DodSWUWJ0ZMTCqz6GUWWulSe4wofWmhFcZFEnXIMCVb-LIkKxdeH3w929UlZS0JUbJIXROFf8WAChn7Nay4Iv3Ly9eg7HbllgT4ImvY1tL52JpTvLNoDx5rPKEobaurAeCaVjAqW6S4vhy_w");

	web_add_auto_header("X-Kony-CustomParams", 
		"%7B%22idOperador%22:%225606%22,%22idAdherente%22:%22105752%22,%22geolocalizacion%22:%22%22,%22canal%22:%22BPI%22,%22appVersion%22:%222.71.28%22%7D");

	web_add_auto_header("X-Kony-DeviceId", 
		"24BD73D7-0BC5-483C-81D6-4D1458B11A78");

	web_add_auto_header("bx-trace-id", 
		"8e098fef-fa50-474a-b8fe-1d5fe462272a");

	web_custom_request("getFiltros", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Operations/getFiltros", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t211.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22SegundoFactor%22%7D");

	web_custom_request("getSegundoFactor", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/SegundoFactor/getSegundoFactor", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t212.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		LAST);

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22ClaveMovil%22%7D");

	web_custom_request("getCelularSeguro", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/ClaveMovil/getCelularSeguro", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t213.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		LAST);

	web_add_auto_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22Parametros%22%7D");

	web_custom_request("getParametros_2", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Parametros/getParametros", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t214.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22nombreParametro%22%3A%22PERMITIR_SESION_MULTIPLE_CANAL%22%2C%22idOperador%22%3A%225606%22%7D", 
		LAST);

	web_custom_request("getParametros_3", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Parametros/getParametros", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t215.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22nombreParametro%22%3A%22PERMITIR_SESION_MULTIPLE_CANAL%22%2C%22idOperador%22%3A%225606%22%7D", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Kony-CustomParams");

	web_revert_auto_header("bx-trace-id");

	web_add_auto_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22metadata_Limits%22%7D");

	web_custom_request("Limits", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/Limits", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t216.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22Limits%22%7D");

	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_add_auto_header("X-Kony-CustomParams", 
		"%7B%22idOperador%22:%225606%22,%22idAdherente%22:%22105752%22,%22geolocalizacion%22:%22%22,%22canal%22:%22BPI%22,%22appVersion%22:%222.71.28%22%7D");

	web_add_auto_header("bx-trace-id", 
		"8e098fef-fa50-474a-b8fe-1d5fe462272a");

	web_custom_request("consultaLimitesDisponibles", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Limits/consultaLimitesDisponibles", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t217.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idAdherente%22%3A%22105752%22%2C%22idTipoOperacion%22%3A%226%22%2C%22segundoFactorVigente%22%3A%22BYPASS%22%2C%22idOperador%22%3A%225606%22%7D", 
		LAST);

	web_add_auto_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22Investments%22%7D");

	web_custom_request("getInvestments", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Investments/getInvestments", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t218.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		LAST);

	web_add_auto_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmAccountsLanding%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22ServicesPay%22%7D");

	web_custom_request("getProximoVencimiento", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/ServicesPay/getProximoVencimiento", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t219.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		LAST);

	return 0;
}