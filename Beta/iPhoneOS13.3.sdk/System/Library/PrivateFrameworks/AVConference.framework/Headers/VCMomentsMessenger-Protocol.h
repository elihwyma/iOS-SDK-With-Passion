/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/Swift-Protocol.h>

@protocol VCMomentsMessenger <Swift>

@property (nonatomic, readonly) unsigned int capabilities;

- (unsigned short)registerClient;
- (unsigned short)cleanupActiveRequests;
- (unsigned short)setMomentsDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)processClientRequest:error: /* Error: Ran out of types for this method. */;
- (unsigned short)deregisterClient;

@end
