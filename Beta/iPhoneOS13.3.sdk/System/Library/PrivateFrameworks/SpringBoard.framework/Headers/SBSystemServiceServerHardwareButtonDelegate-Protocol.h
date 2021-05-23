/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBSystemServiceServerHardwareButtonDelegate <Swift>

- (unsigned short)systemServiceServer:clientDidDisconnect: /* Error: Ran out of types for this method. */;
- (unsigned short)systemServiceServer:client:acquireAssertionOfType:forReason:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)systemServiceServer:client:setEventMask:buttonKind:priority: /* Error: Ran out of types for this method. */;
- (unsigned short)systemServiceServer:client:requestsHIDEvents:token:forButtonKind: /* Error: Ran out of types for this method. */;
- (unsigned short)systemServiceServer:client:setHapticType:buttonKind: /* Error: Ran out of types for this method. */;
- (unsigned short)systemServiceServer:client:fetchHapticTypeForButtonKind:completion: /* Error: Ran out of types for this method. */;

@end
