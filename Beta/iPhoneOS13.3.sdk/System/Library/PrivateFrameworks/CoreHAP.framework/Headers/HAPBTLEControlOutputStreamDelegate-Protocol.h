/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/Swift-Protocol.h>

@protocol HAPBTLEControlOutputStreamDelegate <Swift>

- (unsigned short)controlOutputStream:didReceiveRequestToSendControlPacket:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)controlOutputStreamDidOpen: /* Error: Ran out of types for this method. */;
- (unsigned short)controlOutputStream:didCloseWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)controlOutputStreamDidComplete: /* Error: Ran out of types for this method. */;

@end
