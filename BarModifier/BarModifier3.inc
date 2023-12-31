[Variables]

[MeasureCustomName3]
Measure=String
String=#CustomAppID3#
RegExpSubstitute=1
Substitute="^(.*)-.*$":"\1","_":" "
OnUpdateAction=[!SetVariable CustomAppName3 [MeasureCustomName3]]

[CustomApp3]
ToolTipText=[#CustomAppName[##CURRENTSECTION#Num]]

[Action]
ToolTipTitle=Action Center
ToolTipText=Opens Windows Action Center
ToolTipHidden=#Actiontip#

[Alarm]
ToolTipTitle=Alarm App
ToolTipText=Set regular and #CRLF#Pomodoro alarms
ToolTipHidden=#Alarmtip#

[AppDrawer1]
ToolTipTitle=App Drawer
ToolTipText=Show Hidden icons
ToolTipHidden=#Appdrawertip#

[Assistant]
ToolTipTitle=Assistant
ToolTipText=Use Windows CoPilot Assistant
ToolTipHidden=#Assistanttip#

[Battery]
ToolTipTitle=Battery App
ToolTipText=Battery related functions
ToolTipHidden=#Batterytip#

[Copy]
ToolTipTitle=Copy App
ToolTipText=Change case, use emojis, #CRLF#take screenshots and #CRLF#check clipboard contents
ToolTipHidden=#Copytip#

[Downloads]
ToolTipTitle=Downloads
ToolTipText=View downloads
ToolTipHidden=#Downloadstip#

[Language]
ToolTipTitle=Language App
ToolTipText=Changes left to right #CRLF#text to right to left text.
ToolTipHidden=#Languagetip#

[MailIcon]
ToolTipTitle=Mail App
ToolTipText=Check your G-mail account
ToolTipHidden=#Mailtip#

[MonD]
ToolTipTitle=MOND App
ToolTipText=Work in progress
ToolTipHidden=#MONDtip#

[NewDesktop]
ToolTipTitle=Desktop Navigator
ToolTipText=Add, remove and #CRLF#switch virtual desktops
ToolTipHidden=#Desktoptip#

[Recent]
ToolTipTitle=Recent
ToolTipText=See recent files
ToolTipHidden=#Recenttip#

[Search]
ToolTipTitle=Search App
ToolTipText=Use Windows search
ToolTipHidden=#Searchtip#

[Time]
ToolTipTitle=Time App
ToolTipText=Clock and calendar
ToolTipHidden=#Timetip#

[VolumeIcon]
ToolTipTitle=Volume App
ToolTipText=Volume adjustment and #CRLF#media player controls
ToolTipHidden=#Volumetip#

[Weather]
ToolTipTitle=Weather App
ToolTipText=Keep up with #CRLF#your local weather
ToolTipHidden=#Weathertip#

[Wifi]
ToolTipTitle=Wifi App
ToolTipText=Network related functions
ToolTipHidden=#Wifitip#
