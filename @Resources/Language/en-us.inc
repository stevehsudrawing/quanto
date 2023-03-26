[Variables]
; Welcome your contributions of translation!
; If interested, please upload your files to GitHub (https://github.com/SteveHsuDrawing/quanto) or send your files to Rainmeter Forum (https://forum.rainmeter.net/viewtopic.php?t=41809).
; Please save your files in UTF-16 LE with BOM for a better multi-language support.
; Contributor: (write your name here)

; What files you need to translate are:
; - .\en-us.inc
; - .\GetStarted\en-us.inc
; - .\Shortcuts\en-us.inc
; - .\Tips\en-us.txt
; - (Optional: .\Help\en-us.inc )

; When you need to test your translation, please modify "Language" Variable in Settings.inc. Your work will be adopted to be a available selection in Settings.

; It should be noted that the English language files will be changed ANYTIME WHEN I MODIFIED ANY FUNCTIONS.

; #CRLF# - Wrap text to next line
; There are something you shouldn't translate. e.g. Names of variables (Nouns enclosed in brackets（[]) or Tic Tac Letters(#)) and "%x"

; en-us / EN-US - English (US)
languageCode=en
countryCode=us

; "languageCodeOWM" is the language code used for Open Weather Map. Learn more:
; https://openweathermap.org/api/one-call-3#multi
languageCodeOWM=en

; A test text for anywhere (not nessesary to translate)
LoremIpsumTitle=Lorem Ipsum
LoremIpsum=Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quis ipsum suspendisse ultrices gravida. Risus commodo viverra maecenas accumsan lacus vel facilisis. 

; ==================== Parameters ====================

Default.FontFace_0=Segoe UI
Default.FontFace_1=Segoe UI Bold
Default.FontFace_2=Segoe UI Light
Default.FontFace_0.Alternative=Microsoft Sans Serif

; About time format:
; https://docs.rainmeter.net/manual/measures/time/#FormatCodes

; Global time format (NOT WORK)
TimeFormat.1=%#H:%M

; Date format of Time (4x4)
TimeFormat.2=%B %#d, %Y#CRLF#%A

; Global date format
; Please keep it as short as possible
TimeFormat.3=%a, %b %#d, %Y

; Date format of Calendar (global)
TimeFormat.4=%B, %Y

; Format of UPTIME (Shows on Time (4x4))
; Information: https://docs.rainmeter.net/manual/measures/uptime/
; You can also translate it as "It has been running for %4!i!d %3!i!h %2!02i!m". e.g. 已運作 %4!i! 天 %3!i! 小時 %2!02i! 分鐘
TimeFormat.5=Uptime: %4!i!d %3!i!h %2!02i!m

; Default Temperature unit
; C - Celsius
; F - Fahrenheit
P.Widgets_Weather.3=F

; Latitude and longitude of a known city of your country/region
P.Widgets_Weather.4=40.64
P.Widgets_Weather.5=-74.00
P.Widgets_Weather.6=New York

; Default RSS URL and its name
P.RSS.1=http://rss.cnn.com/rss/edition_world.rss
P.RSS.2=CNN News

; EDT - (America) Eastern Daylight Saving Time
; JST - Japan Standard Time
P.Widgets_WorldTime.1=EDT
P.Widgets_WorldTime.2=JST

; ==================== Names of items ==================== 

T.Skins=Skins
T.Shortcuts=Shortcuts
T.Widgets=Widgets
T.Extras=Extras

Shortcuts_4in1_Text.0=4 in 1 Shortcut
Shortcuts_Custom_Text.0=Custom Shortcut
Widgets_Battery_Text.0=Battery
Widgets_Calculator_Text.0=Calculator
Widgets_Calendar_Text.0=Calendar
Widgets_Control_Text.0=Control
Widgets_COVID_Text.0=COVID-19 Datas
Widgets_CPU_Text.0=CPU
Widgets_CPUDetailed_Text.0=CPU (Detailed)
Widgets_Desktop_Text.0=Desktop
Widgets_Driver_Text.0=Drivers
Widgets_FansSpeed_Text.0=Fans
Widgets_Gallery_Text.0=Gallery
Widgets_GPU_Text.0=GPU
Widgets_MediaControl_Text.0=Media Control
Widgets_Network_Text.0=Network
Widgets_Note_Text.0=Note
Widgets_RAM_Text.0=RAM
Widgets_RSS_Text.0=RSS Feeds
Widgets_Search_Text.0=Search
Widgets_Settings_Text.0=Settings of #ProjectName#
Widgets_CustomShortcutSettings_Text.0=Settings of Custom Shortcut
Widgets_Stopwatch_Text.0=Stopwatch
Widgets_Time_Text.0=Time & Date
Widgets_Timer_Text.0=Timer
Widgets_VRAM_Text.0=VRAM
Widgets_Weather_Text.0=Weather
Widgets_WorldTime_Text.0=World Clock
Extras_Background_Text.0=Background
Extras_GlobalControl_Text.0=Global Control
Extras_Sidebar_Text.0=Side Bar Background
Extras_Time_Text.0=Time
Extras_Visualiser_Text.0=Visualiser
Extras_Welcome_Text.0=Welcome

; ==================== Terms ==================== 
; Includes nouns, verbs and adjectives.

T.Day=Day
T.Mouth=Mouth
T.Year=Year

T.Yesterday=Yesterday
T.Today=Today
T.Tomorrow=Tomorrow
T.After_tomorrow=After#CRLF#tomorrow

T.Sunday=Sunday
T.Monday=Monday
T.Tuesday=Tuesday
T.Wednesday=Wednesday
T.Thursday=Thursday
T.Friday=Friday
T.Saturday=Saturday
T.Sun=Sun
T.Mon=Mon
T.Tue=Tue
T.Wed=Wed
T.Thu=Thu
T.Fri=Fri
T.Sat=Sat

T.January=January
T.February=February
T.March=March
T.April=April
T.May=May
T.June=June
T.July=July
T.August=August
T.September=September
T.October=October
T.November=November
T.December=December
T.Jan=Jan
T.Feb=Feb
T.Mar=Mar
T.Apr=Apr
T.May=May
T.Jun=Jun
T.Jul=Jul
T.Aug=Aug
T.Sep=Sep
T.Oct=Oct
T.Nov=Nov
T.Dec=Dec

T.AM=AM
T.PM=PM

T.No=No.

T.Bright=Bright
T.Dark=Dark
T.Dark_Enhanced=Dark (Enhanced)
T.Colored=Colored (Experimental)
T.Yellow=Yellow
T.Green=Green
T.Pink=Pink
T.Purple=Purple
T.Blue=Blue
T.Light_grey=Light grey
T.Grey=Grey

T.SearchEngine.0=Baidu
T.SearchEngine.1=Microsoft Bing
T.SearchEngine.2=Google
T.SearchEngine.3=Wikipedia

T.Action=Action
T.Start=Start
T.Next=Next
T.Back=Back
T.OK=OK
T.Done=Done
T.Cancel=Cancel
T.Apply=Apply
T.Save=Save
T.Open=Open
T.Close=Close
T.Close_and_save=Close & save
T.ON=ON
T.OFF=OFF
T.Show=Show
T.Hide=Hide
T.Expand=Expand
T.Collapse=Collapse
T.Modify=Modify
T.Modify_my_name=Modify my name
T.Restore=Restore
T.More=More
T.Customize=Customize
T.Test=Test
T.Go_to=Go to
T.Learn_about=Learn about
T.Tap_to_continue=Tap to continue
T.View_list_of_Quick_Settings=View list of Quick Settings
T.Find_your_latitude_and_longitude=Find your latitude and longitude
T.Shutdown=Shutdown
T.Copy=Copy
T.Edit=Edit
T.Add_it_to_the_desktop=Add it to the desktop
T.Back_to_Settings=Back to Settings
T.Restore_to_my_previous_layout=Restore to my previous layout
T.Repeat=Repeat
T.Explore=Explore
T.Undo=Undo
T.Keep_my_setting=Keep my setting

T.Loading=Loading
T.Welcome=Welcome
T.Note=Note
T.Warning=Warning
T.Connection_failed=Connection failed
T.Incorrect_format=Incorrect format
T.Read_failed=Read failed
T.Copied=Copied

T.Default=Default
T.Light=Light
T.Bold=Bold

T.Setting=Setting
T.General_Settings=General Settings
T.Advanced_Settings=Advanced Settings
T.Value=Value
T.Quantity=Quantity
T.Quantity_of_bands=Quantity of band(s)
T.Width=Width
T.Width_of_bands=Width of band(s)
T.Height=Height
T.Height_of_bands=Height of band(s)
T.Length=Length
T.Depth=Depth
T.Spacing=Spacing
T.Spacing_of_bands=Spacing of band(s)
T.Scaling=Scaling
T.Color=Color
T.Color_mode=Color mode
T.Color_and_opacity_of_bands=Color & opacity of band(s)
T.Theme_color=Theme color
T.Maximum=Maximum
T.Maximum_temperature=Maximum temperature
T.Maximum_fan_speed=Maximum fan speed
T.Minimum=Minimum
T.Duration=Duration
T.Refresh_interval=Refresh interval
T.Language=Language
T.Country_or_region=Country/region
T.Time_zone=Time zone
T.Daylight_Saving_Time=Daylight Saving Time
T.Longitude=Longitude
T.Latitude=Latitude
T.Name=Name
T.Name_on_display=Name on display
T.Your_name=Your name
T.Name_of_region=Name of region
T.Title=Title
T.Font=Font
T.Font_Color=Font Color
T.Gradient=Gradient
T.Icon=Icon
T.Image=Image
T.Target=Target
T.Sound=Sound
T.Unit=Unit
T.State=State
T.Wear_level=Wear level
T.Mode=Mode
T.Fix=Fix
T.Crop=Crop
T.Code_page=Code page
T.Layouts=Layouts
T.Opacity=Opacity
T.Effect=Effect
T.Blur_effect=Blur effect
T.Global_Blur_Effect=Global Blur Effect
T.Rounded_corners_and_borders=Rounded corners & borders
T.Time_format=Time format
T.Tip=Tip
T.Referenced_folder=Referenced folder
T.URL=URL
T.Sensitivity=Sensitivity
T.Registry_Key_of_Wear_level=Registry Key of #T.Wear_level#
T.Registry_Key_of_Voltage=Registry Key of #T.Voltage#
T.Registry_Key_of_Temperature=Registry Key of #T.Temperature#
T.Registry_Key_of_Fan_speed=Registry Key of #T.Fan_speed#
T.Registry_Key_of_Power=Registry Key of #T.Power#
T.Source_of_CPU_usage=Source of CPU usage

T.About=About
T.Global_Settings=Global Settings
T.Add_Skins=Add Skins
T.Help_Center=Help Center
T.Manage_Rainmeter=Manage Rainmeter
T.Personalization_in_Control_Panel=Personalization in Control Panel

T.Special_settings=Special settings
T.Customizable=Customizable
T.Customizable_size=Customizable size
T.Not_applicable=(Not applicable)
T.Adaptive=Adaptive
T.AIDA64_required=AIDA64 required
T.Windows_10_or_newer_required=Windows 10 or newer required
T.Internet_connection_required=Internet connection required
T.High-occupancy_attention=High-occupancy attention

T.Information=Information
T.Main_Author=Main Author
T.Version=Version
T.License=License
T.Special_Thanks=Special Thanks
T.Changelog=Changelog
T.Changelog_of_Version=Changelog of #Version#

T.System=System
T.Quick_Setting=Quick Setting
T.Charging=Charging
T.Event=Event
T.Bluetooth=Bluetooth
T.Total_confirmed_cases=Total confirmed cases
T.Total_deaths=Total deaths
T.Total_vaccinated=Total vaccinated
T.Global_epidemic=Global epidemic
T.Epidemic_of_Region=Epidemic of #Region#
T.Occupation=Occupation
T.Temperature=Temperature
T.Fan_speed=Fan speed
T.Voltage=Voltage
T.Power=Power
T.To_do_list=To-do list
T.Disconnected_or_Ethernet=Disconnected/Ethernet
T.Ordinal_number_of_DIMM=Ordinal number of DIMM
T.Ordinal_number_of_HDD=Ordinal number of HDD
T.Search_engine=Search engine
T.Center=Center
T.Both_sides=Both sides
T.Side_Bar=Side Bar
T.Page=Page
T.Aero_Global=Aero (Global)
T.Acrylic_BGs=Acrylic (BGs)
; Acrylic (Backgrounds)
T.Mica=Mica
T.12-hour=12-hour
T.24-hour=24-hour
T.Reference=Reference
T.Seconds=Seconds
T.Celsius=Celsius (C°)
T.Fahrenheit=Fahrenheit (F°)
T.Local_time=Local time
T.Work_area=Work area
T.Screen=Screen
T.Video_Card=Video Card
T.Task_Manager=Task Manager
T.CPU=CPU
T.CPU_name=CPU name
T.Top=Top
T.Top_process=Top process
T.Calendar=Calendar
T.Photos=Photos
T.Preview=Preview
T.High=High
T.Low=Low
T.Physical_memory=Physical memory
T.Resources=Resources
T.Performance_Monitor=Performance Monitor
T.WAN_IP=WAN IP
T.LAN_IP=LAN IP
T.DNS_address=DNS address
T.Network_card=Network card
T.Wired_Internet=Wired Internet
T.Chassis=Chassis
T.Fans=Fans
T.Read_speed=Read speed
T.Write_speed=Write speed

T.available=Available
T.used=Used

; ==================== Terms of context menu options ==================== 
; Please keep the "&" and the following letter (or swap it out for a letter you can enter on your keyboard).
; e.g. &Alternative -> 切換(&A)

OT.Alternative=&Alternative
; To change scale/style of the skin
OT.Add_another=A&dd another
; To add a skin in the same category
OT.Skin_Settings=&Settings
OT.GlobalSettings=&Global Settings
OT.LockUnlock=&Lock/Unlock
; To change its state of "draggable"
OT.Bring_to_front=&Bring to Front
; To set the position on screen to the topmost
OT.Send_to_back=&Send to Back
; To set the position on screen to the buttom
OT.Refresh=&Refresh
OT.Unload=&Unload
OT.More=&More...
; To show the gerneral menu

; Specific actions of Shortcuts
OT.System_Properties=&System properties
OT.Network_and_Sharing_Center=&Network and Sharing Center
OT.Empty_Recycle_Bin=&Empty Recycle Bin
OT.View_list_of_Quick_Settings=&View list of Quick Settings
OT.Edit_settings_of_Customs=Edit settings of &Customs

; Specific actions of Widgets
OT.Edit_targets=Edit &Targets
OT.Open=&Open
OT.Edit=&Edit
OT.Change=&Change
; To change another picture of Gallery (global)

OT.Lock=&Lock
OT.Log_off=Log &off
OT.Sleep=&Sleep
OT.Hibernate=&Hibernate
OT.Restart=&Restart
OT.Shutdown=&Shutdown

; ==================== Sentences ==================== 

; (The changelog is not nessesary to translate)
S.Changelog=1.31 ALPHA VERSION. CHANGELOG IS NOT AVALIABLE
;S.Changelog=This is a major update. Since then, the project has been renamed "Quanto".#CRLF##CRLF#-New:#CRLF#   -Function: #CRLF#      - Help Center#CRLF#      - 2 color modes: Dark (Enhanced), Colored (Experimental)#CRLF#   - Widgets: #CRLF#      - Battery (4x2)			- CPU (4x2 & 4x3)#CRLF#      - CPU (detailed) (adaptive)	- Desktop (1x1, 2x1, 2x2 & 4x2)#CRLF#      - RAM (4x3)			- Fans (1x1 & 4x1)#CRLF#      - GPU (4x2)			- Network (4x3)#CRLF#      - RAM (4x2)			- Time & date (1 new style of 4x4)#CRLF#   - Extras: #CRLF#      - Global Control (adaptive)#CRLF##CRLF#- Modified:#CRLF#   - Welcome screen.#CRLF#   - Details of each hardware have been unified to be read from AIDA64.#CRLF#   - Independent custom shortcut settings.#CRLF##CRLF#- Overall optimization.#CRLF#   - Optimized translation.#CRLF#   - Optimize functionality, user experience.#CRLF#   - Overall streamlining.#CRLF##CRLF#- Fixed bugs.#CRLF##CRLF#This update may contain more bugs. Your feedback is welcome.

S.Global.1=Press Enter to confirm. Click elsewhere to cancel.
S.Global.2=Hold the upper left icon to drag.
S.Global.3=Timing is not always accurate.
S.Global.4=It works abnormally?
S.Global.5=Cannot show extra informations?
S.Global.6=Please check your Internet status, then retry.
S.Global.7=Enter "-1" to disable it.

S.Widgets_Control.1=Some of these features may not be available on some devices. Switch to 4x1 will show the volume control only.
S.Widgets_COVID.1=We sincerely hope that the global COVID-19 epidemic will end soon.
S.Widgets_COVID.2=Also wish you good health.#CRLF#Datas are from WHO.
S.Widgets_MediaControl.1=CAD mode.#CRLF#Supports foobar2000, J. River Media Center and Media Jukebox.
S.Widgets_MediaControl.2=WLM mode.#CRLF#Supports Last.fm Client, TTPlayer, OpenPandora and Zune.#CRLF#Note: Some features may not be supported.
S.Widgets_Note.1=Click "Edit" button to modify the content. Click the title to modify it. While editing, press Enter to confirm, and click elsewhere to cancel. If you need to wrap, replace the place where you want to wrap with "＃CRLF＃".
S.Widgets_RSS.1=Auto refresh after %1s
S.Widgets_RSS.2=Auto refresh is disabled
S.Widgets_RSS.3=Please check if the RSS feed address is correct.
S.Widgets_RSS.4=Please switch to the 4x4 panel, or check if the URL is an RSS feed.
S.Widgets_RSS.5=It is usually not necessary to set it unless the title is garbled.#CRLF##CRLF#Reference:#CRLF#   437 - Extended ANSI Character Set#CRLF#   65001 - UTF-8
S.Widgets_Time.1="Good morning, "
S.Widgets_Time.2="Good afternoon, "
S.Widgets_Time.3="Good evening, "
S.Widgets_Time.4="Sweet dreams, "
S.Widgets_Weather.1=Powered by [Item0002]
S.Widgets_Weather.2=It may be because the latitude and longitude you filled in is upside down, or it may be because the area you filled in is temporarily unavailable. Please check the settings or change to another area and try again.
S.Extras_Background.1=If the background goes to front abnormally, right-click it and click "Send to Back". Tap to hide this tip.
S.Extras_Visualiser.1=The visualizer bar appears only when music is playing.#CRLF#You can open Skin's "Settings" to make advanced size settings for this skin.#CRLF#If it seems not sensitive, you can open "high sensitivity" in the settings.#CRLF#"Visualizer" can be CPU-INTENSIVE.

S.Widgets_Settings.1=Thanks for your choice!
S.Widgets_Settings.2=The guide will help you to complete the setup.#CRLF#Later, you can read Help Center in Quanto Control Panel to learn its usage.
S.Widgets_Settings.3=Compared to #LastVersion#.
S.Widgets_Settings.4=Rendering a blur effect will take up a lot of DWM resources. This can cause graphics issues such as sluggish drag rendering. SURE TO OPEN?
S.Widgets_Settings.5=Sure to set it to [MeasureOption8.Feature3.Display1]% ?
S.Widgets_Settings.6=Experimental feature, bugs may occur.
S.Widgets_Settings.7=Do you know...
S.Widgets_Settings.8=Right-click the icon to modify it. The targets of some icons are not allowed to be modified.
S.Widgets_Settings.9=Setting: [#Text_[#TextInput2]] of [#TextInput3]
S.Widgets_Settings.10=Current value: [#QuickSetting.[#TextInput2].[#TextInput3]]
S.Widgets_Settings.11=Please select what you want to do with [#TextInput3].
S.Widgets_Settings.12=Left click to add/toggle skin (styles)#CRLF#Right-click to modify its target (if available)
S.Widgets_Settings.13=Press Enter to apply. Press Test to test target usability. Press "Back" to go back.
S.Widgets_Settings.14=Press the "Add" icon to add/switch skin (style). The newly added skin will appear in the upper left corner of the desktop or in its original position.#CRLF#Press "↗" button to move the skin to the right top of the window.
S.Widgets_Settings.15=Select a language
S.Widgets_Settings.16=Make your basic personalization
S.Widgets_Settings.17=Select a layout
S.Widgets_Settings.18=Check to hide icon & title
S.Widgets_Settings.19=Press the "Edit" button to edit the custom shortcut.
S.Widgets_Settings.20=If you cannot apply the layout here, please cilck "Manage Rainmeter", and find "Quanto #Selection# #Scale_Actual#x" in the list, then load it.#CRLF#If you need to restore to your prevoius layout, load "@Backup" layout.
S.Widgets_Settings.21=You can set "target"at first.#CRLF#It will set the title and icon automatically.
S.Widgets_Settings.22=Now it's the appearance of #Scale_Actual#x. If it doesn't fit to your screen, click "Undo".
S.Widgets_Settings.23=What's new?

S.Widgets_Settings.Action=Set its target. Type the name of the executable program or its full address.#CRLF#The preset target may only be the name of the executable program, so it may be unavailable. Please fill in manually as needed.
S.Widgets_Settings.Icon=Set its display icon. Enter the full address where the icon is located.#CRLF#Supports ICO or PNG format. Use square images whenever possible.#CRLF#Note: Icons cannot be read directly from the program.
S.Widgets_Settings.Text=Sets the name of its shortcut display.

S.Widgets_Settings.Scaling.1=Please adjust according to the actual situation.
S.Widgets_Settings.Scaling.2=Positions will not be scaled when scaling the skin.
S.Widgets_Settings.Font.1=The light and bold will be set automatically.
S.Widgets_Settings.Theme_color.1=Pick a color, or fill in a color number in RGB (0-255) format.
S.Widgets_Settings.Theme_color.2=Automatically brightens in dark mode.
S.Widgets_Settings.Layouts.2=Adjust "Scaling" to#CRLF#100%, 125%, 150% or 200% first
S.Widgets_Settings.Blur_effect.1=Not available for Windows 8.
S.Widgets_Settings.Global_Blur_Effect.1=Renders the background blurry in all Skins.
S.Widgets_Settings.Time_format.1=Preview: [MeasureTime]

; ==================== New Terms of 1.31 Release ==================== 

T.User_Image=User Image
T.Brighten=Brighten
T.Borders=Borders
T.Light_Effect=Light Effect
T.Region_Settings=Region Settings
T.Gerneral_Settings=Gerneral Settings
T.Details_Settings=Details Settings
T.Experimental_Settings=Experimental Settings
T.Click_for_details=Click for details
T.Regular=Regular
T.Custom=Custom
T.4in1=4-in-1

S.Widgets_Settings.24=This is the list of custom shortcuts. Right-click the icon to modify it.
S.Widgets_Settings.25=Right-click to modify
