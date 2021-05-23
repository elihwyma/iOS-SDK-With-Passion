/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBFAuthenticationPolicy <Swift>

- (unsigned short)usesSecureMode;
- (unsigned short)wipeDeviceWithReason: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldClearBlockStateOnSync;
- (unsigned short)allowAuthenticationRevocation;

@end
