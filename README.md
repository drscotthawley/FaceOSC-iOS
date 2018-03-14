# FaceOSC-iOS
Port to iOS of Christopher Baker's FaceOSC for Kyle McDonald's ofxFaceTracker, with output set to be compatible with Rebecca Fiebrink's Wekinator

See https://github.com/kylemcdonald/ofxFaceTracker

I used the openFrameworks nightly build (March 13, 2018)  for iOS: http://ci.openframeworks.cc/versions/nightly/of_v20180313_ios_nightly.zip

This will *not* work with the 'stable' openFrameworks release (v0.9.8), so either grab a nightly build, or build the whole thing from source. 

Note that OSC output is /wek/inputs, numbered 0 to 13.

Host and port for output is given in bin/data/settings.xml.  Currently set to 10.0.1.5 (my laptop on my home network), and port 6448 (Wekinator default),
respectively. 
