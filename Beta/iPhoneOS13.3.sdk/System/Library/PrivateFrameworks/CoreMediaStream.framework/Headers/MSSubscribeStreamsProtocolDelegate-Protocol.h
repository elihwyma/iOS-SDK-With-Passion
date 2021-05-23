/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/Swift-Protocol.h>

@protocol MSSubscribeStreamsProtocolDelegate <Swift>

- (unsigned short)subscribeStreamsProtocol:willReceiveUpdatesForPersonID:wasReset:metadata: /* Error: Ran out of types for this method. */;
- (unsigned short)subscribeStreamsProtocol:didReceiveAssetCollections:forPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)subscribeStreamsProtocol:didFinishReceivingUpdatesForPersonID:ctag: /* Error: Ran out of types for this method. */;
- (unsigned short)subscribeStreamsProtocol:didFindDisappearedSubscriptionForPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)subscribeStreamsProtocol:didFindTemporarilyUnavailableSubscriptionForPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)subscribeStreamsProtocol:didFinishError: /* Error: Ran out of types for this method. */;
- (unsigned short)subscribeStreamsProtocol:didReceiveAuthenticationError: /* Error: Ran out of types for this method. */;

@end
