/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBButtonEventsHandler <Swift>

- (unsigned short)handleHomeButtonPress;
- (unsigned short)handleHomeButtonDoublePress;
- (unsigned short)handleHomeButtonLongPress;
- (unsigned short)handleLockButtonPress;
- (unsigned short)handleVolumeUpButtonPress;
- (unsigned short)handleVolumeDownButtonPress;
- (unsigned short)handleHeadsetButtonPress: /* Error: Ran out of types for this method. */;

@end
