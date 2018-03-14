# FaceOSC-iOS(-Wekinator)
Port to iOS of Christopher Baker's FaceOSC for Kyle McDonald's ofxFaceTracker, with output set to be compatible with Rebecca Fiebrink's Wekinator

See https://github.com/kylemcdonald/ofxFaceTracker

Given how Apple does authentication, my binary wouldn't be accepted by your phone.  So you'll need to build your own binary using the .xcodeproject file.

I used the openFrameworks nightly build (March 13, 2018)  for iOS: http://ci.openframeworks.cc/versions/nightly/of_v20180313_ios_nightly.zip

This app will *not* build if you use the 'stable' openFrameworks release (v0.9.8), so either grab a nightly build, or build the whole thing from source.  If you get errors submit an Issue and I'll try to help. 

Note that the OSC output is setup to issue the message `/wek/inputs`, with values numbered 0 to 13.

Host and port for output is given in bin/data/settings.xml.  Currently set to 10.0.1.5 (my laptop on my home network), and port 6448 (Wekinator default),
respectively. 

**TODO:** It's still "not pretty". There's an unused white area at the bottom of the screen, the face mesh is drawn in a disjointed way (??), and there are no user-editiable options of any kind while the app is running. 'Someone' could add a dialog box to at least allow the hostname to be changed on the fly. 

<hr ->

Other (hopefully irrelevant) details: I build this using Mac OS X High Sierra 10.13.3, Xcode 9.3 beta 4, iPhone 7 Plus running iOS 11.3, built against Xcode Target iOS 11.0. 

