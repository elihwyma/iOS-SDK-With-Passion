/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AccessibilityUtilities/AXServer.h>

@interface AXVoiceOverServer : AXServer

+ (id)server;

- (id)_serviceName;
- (_Bool)_connectIfNecessary;
- (void)performAutomationTestingCommand:(id)arg1 userInfo:(id)arg2 timeout:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)lastSpokenPhrases;
- (id)lastSpokenContents;
- (id)lastSoundsPlayed;
- (id)currentRotorName;
- (id)lastScreenChange;
- (id)currentFocusedElement;
- (_Bool)triggerGesture:(id)arg1;
- (_Bool)triggerCommand:(long long)arg1;
- (_Bool)triggerCommand:(long long)arg1 withArgument:(id)arg2;
- (_Bool)isBrailleInputUIShowing;
- (_Bool)isHandwritingInputUIShowing;
- (_Bool)isBluetoothBrailleDisplayConnected;

@end
