/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AccessibilityUtilities/Swift-Protocol.h>

@protocol AXSystemAppServer <Swift>

+ (unsigned short)server;

- (unsigned short)pid;
- (unsigned short)activeInterfaceOrientation;
- (unsigned short)isNotificationCenterVisible;
- (unsigned short)isNotificationVisible;
- (unsigned short)isDockVisible;
- (unsigned short)isSiriVisible;
- (unsigned short)isNonExclusiveSystemUIFocusable;
- (unsigned short)pid: /* Error: Ran out of types for this method. */;
- (unsigned short)activeInterfaceOrientation: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissSiri;
- (unsigned short)isAppSwitcherVisible;
- (unsigned short)isControlCenterVisible;
- (unsigned short)isScreenSaverVisible;
- (unsigned short)isNowPlayingUIVisible;
- (unsigned short)isSoftwareUpdateUIVisible;
- (unsigned short)isSiriTalkingOrListening;
- (unsigned short)isReceivingAirPlay;
- (unsigned short)isMediaPlaying;
- (unsigned short)rebootDevice;
- (unsigned short)isSystemSleeping;
- (unsigned short)wakeUpDeviceIfNecessary;

@end
