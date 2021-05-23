/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/Swift-Protocol.h>

@protocol CRKSessionDelegate <Swift>

- (unsigned short)sessionDidDisconnect: /* Error: Ran out of types for this method. */;
- (unsigned short)sessionDidInvalidate: /* Error: Ran out of types for this method. */;
- (unsigned short)clientIdentityForSession: /* Error: Ran out of types for this method. */;
- (unsigned short)trustedAnchorCertificatesForSession: /* Error: Ran out of types for this method. */;
- (unsigned short)session:willLoseBeaconAfterTimeInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)sessionDidLoseBeacon: /* Error: Ran out of types for this method. */;
- (unsigned short)sessionDidBecomeConnectable: /* Error: Ran out of types for this method. */;
- (unsigned short)sessionDidBecomeNotConnectable: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didConnectWithTransport: /* Error: Ran out of types for this method. */;

@end
