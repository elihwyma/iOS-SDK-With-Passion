/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/Swift-Protocol.h>

@protocol VCRemoteVideoManagerDelegate <Swift>

- (unsigned short)remoteVideoDidDegrade:streamToken: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteVideoDidSuspend:streamToken: /* Error: Ran out of types for this method. */;
- (unsigned short)releaseQueueForStreamToken: /* Error: Ran out of types for this method. */;
- (unsigned short)connectionDidChangeWithLocalInterfaceType:remoteInterfaceType:streamToken: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteMediaDidStall:streamToken: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteScreenAttributesDidChange:streamToken: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteVideoAttributesDidChange:streamToken: /* Error: Ran out of types for this method. */;
- (unsigned short)didReceiveFirstRemoteFrameForStreamToken: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteVideoDidPause:streamToken: /* Error: Ran out of types for this method. */;

@end
