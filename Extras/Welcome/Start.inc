[Variables]
MeterOption1.X=224
MeterOption1.Y=550
MeterOption2.X=224
MeterOption2.Y=600
MeterOption3.X=224
MeterOption3.Y=650

[MeterImage]
Meter=Image
ImageName=#@#Bitmap\Title.png
X=(108*#Scale#)
Y=(188*#Scale#)
W=(420*#Scale#)
DynamicVariables=1
PreserveAspectRatio=1

[MeterText]
Meter=String
X=(24*#Scale#)
Y=(54*#Scale#)
Text=#T.Welcome#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(24*#Scale#)
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1

[MeasureOption1.Feature1.TextDisplay]
Measure=String
String=#Language#
Substitute="en-us":"#en-us#","zh-cn":"#zh-cn#","zh-tw":"#zh-tw#"
DynamicVariables=1

[MeasureOption1.Feature1.TextNum]
Measure=String
String=#Language#
Substitute="en-us":"0","zh-cn":"1","zh-tw":"2"
DynamicVariables=1

[MeterOption1.Feature1.Display0]
Meter=Image
ImageName=#@#Bitmap\Language.png
X=((#MeterOption1.X#-32)*#Scale#)
Y=((#MeterOption1.Y#+8)*#Scale#)
H=(20*#Scale#)
W=(20*#Scale#)
ImageTint=#FontColor_General#,255

[MeterOption1.Feature1.Display1]
Meter=Shape
X=(#MeterOption1.X#*#Scale#)
Y=(#MeterOption1.Y#*#Scale#)
MeterStyle=MeterTextInputStyle
MouseOverAction=[!ShowMeter MeterOption1.Feature1.Display4][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption1.Feature1.Display4][!Redraw]
LeftMouseDownAction=[!ToggleMouseActionGroup * MouseAction][!ShowMeterGroup "MeterOption1.Feature1"][!Redraw]

[MeterOption1.Feature1.Display2]
Meter=String
X=((8*#Scale#))r
Y=((6*#Scale#))r
Text=[#[#Language]]
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterOption1.Feature1.Display3]
Meter=Image
X=((160*#Scale#))r
Y=((4*#Scale#))r
ImageName=#@#Bitmap\Arrow Down.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1

[MeterOption1.Feature1.Display4]
Meter=Shape
X=(#MeterOption1.X#*#Scale#)
Y=(#MeterOption1.Y#*#Scale#)
MeterStyle=MeterTextInputSelectedStyle

[MeasureOption2.Feature1.TextDisplay]
Measure=Calc
Formula=#Scale_Actual#*100


[MeterOption2.Feature1.Display0]
Meter=Image
ImageName=#@#Bitmap\Scale.png
X=((#MeterOption2.X#-32)*#Scale#)
Y=((#MeterOption2.Y#+8)*#Scale#)
H=(20*#Scale#)
W=(20*#Scale#)
ImageTint=#FontColor_General#,255

[MeterOption2.Feature1.Display1]
Meter=Shape
X=(#MeterOption2.X#*#Scale#)
Y=(#MeterOption2.Y#*#Scale#)
MeterStyle=MeterTextInputStyle
MouseOverAction=[!ShowMeter MeterOption2.Feature1.Display4][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption2.Feature1.Display4][!Redraw]
LeftMouseDownAction=[!ToggleMouseActionGroup * MouseAction][!ShowMeterGroup "MeterOption2.Feature1"][!Redraw]

[MeterOption2.Feature1.Display2]
Meter=String
X=((8*#Scale#))r
Y=((6*#Scale#))r
Text=[MeasureOption2.Feature1.TextDisplay]%
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterOption2.Feature1.Display3]
Meter=Image
X=((160*#Scale#))r
Y=((4*#Scale#))r
ImageName=#@#Bitmap\Arrow Down.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1

[MeterOption2.Feature1.Display4]
Meter=Shape
X=(#MeterOption2.X#*#Scale#)
Y=(#MeterOption2.Y#*#Scale#)
MeterStyle=MeterTextInputSelectedStyle

[MeterOption3.Feature1.Display1]
Meter=Shape
X=(#MeterOption3.X#*#Scale#)
Y=(#MeterOption3.Y#*#Scale#)
Shape=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
DynamicVariables=1
MouseOverAction=[!ShowMeter MeterOption3.Feature1.Display2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption3.Feature1.Display2][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables Page Welcome "#ROOTCONFIGPATH#Extras\Welcome\10x13.ini"][!Refresh]

[MeterOption3.Feature1.Display2]
Meter=Shape
X=0r
Y=0r
MeterStyle=MeterTextInputSelectedStyle

[MeterOption3.Feature1.Display3]
Meter=String
X=((96*#Scale#))r
Y=((18*#Scale#))r
Text=#T.Start#
FontFace=#FontFace_General#
FontColor=255,255,255
FontSize=(12*#Scale#)
AntiAlias=1
StringAlign=CenterCenter
DynamicVariables=1




[MeterOption1.Feature1.Function1]
Meter=Shape
X=(#MeterOption1.X#*#Scale#)
Y=((#MeterOption1.Y#-36*[MeasureOption1.Feature1.TextNum])*#Scale#)
Shape=Rectangle 0,0,(192*#Scale#),(108*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | Stroke Color #ThemeColor_BarBorder#
Hidden=1
DynamicVariables=1
Group=MeterOption1.Feature1
MouseLeaveAction=[!ToggleMouseActionGroup * MouseAction][!HideMeterGroup Hover][!HideMeterGroup MeterOption1.Feature1][!Redraw]

[MeterOption1.Feature1.Function2]
Meter=String
X=((14*#Scale#))r
Y=((6*#Scale#))r
Text=#en-us#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Language en-us "#@#Settings.inc"][!RefreshApp]
Hidden=1
Group=MeterOption1.Feature1

[MeterOption1.Feature1.Function3]
Meter=String
X=0r
Y=((36*#Scale#))r
Text=#zh-cn#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Language zh-cn "#@#Settings.inc"][!RefreshApp]
Hidden=1
Group=MeterOption1.Feature1

[MeterOption1.Feature1.Function4]
Meter=String
X=0r
Y=((36*#Scale#))r
Text=#zh-tw#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Language zh-tw "#@#Settings.inc"][!RefreshApp]
Hidden=1
Group=MeterOption1.Feature1

[MeterOption1.Feature1.Function5]
Meter=Shape
X=(#MeterOption1.X#*#Scale#)
Y=(#MeterOption1.Y#*#Scale#)
Shape=Rectangle (6*#Scale#),(8*#Scale#),(3*#Scale#),(18*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | Fill Color #ThemeColor_General# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1
Group=MeterOption1.Feature1

[MeterOption2.Feature1.Function1]
Meter=Shape
X=(#MeterOption2.X#*#Scale#)
Y=((#MeterOption2.Y#-36*(#Scale_Actual#=1?0:(#Scale_Actual#=1.25?1:(#Scale_Actual#=1.5?2:(#Scale_Actual#=2?3:2)))))*#Scale#)
Shape=Rectangle 0,0,(192*#Scale#),(36*4*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | Stroke Color #ThemeColor_BarBorder#
Hidden=1
DynamicVariables=1
Group=MeterOption2.Feature1
MouseLeaveAction=[!ToggleMouseActionGroup * MouseAction][!HideMeterGroup Hover][!HideMeterGroup MeterOption2.Feature1][!Redraw]

[MeterOption2.Feature1.Function2]
Meter=String
X=((14*#Scale#))r
Y=((6*#Scale#))r
Text=100%
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Scale_Actual 1 "#@#Settings.inc"][!Move ((#SCREENAREAWIDTH#/2)-((640*1.0/1.25)/2)) 60][!Refresh]
Hidden=1
Group=MeterOption2.Feature1

[MeterOption2.Feature1.Function3]
Meter=String
X=0r
Y=((36*#Scale#))r
Text=125%
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Scale_Actual 1.25 "#@#Settings.inc"][!Move ((#SCREENAREAWIDTH#/2)-((640*1.25/1.25)/2)) 60][!Refresh]
Hidden=1
Group=MeterOption2.Feature1

[MeterOption2.Feature1.Function4]
Meter=String
X=0r
Y=((36*#Scale#))r
Text=150%
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Scale_Actual 1.5 "#@#Settings.inc"][!Move ((#SCREENAREAWIDTH#/2)-((640*1.5/1.25)/2)) 60][!Refresh]
Hidden=1
Group=MeterOption2.Feature1

[MeterOption2.Feature1.Function5]
Meter=String
X=0r
Y=((36*#Scale#))r
Text=200%
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Scale_Actual 2 "#@#Settings.inc"][!Move ((#SCREENAREAWIDTH#/2)-((640*2.0/1.25)/2)) 60][!Refresh]
Hidden=1
Group=MeterOption2.Feature1

[MeterOption2.Feature1.Function6]
Meter=Shape
X=(#MeterOption2.X#*#Scale#)
Y=(#MeterOption2.Y#*#Scale#)
Shape=Rectangle (6*#Scale#),(8*#Scale#),(3*#Scale#),(18*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | Fill Color #ThemeColor_General# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1
Group=MeterOption2.Feature1