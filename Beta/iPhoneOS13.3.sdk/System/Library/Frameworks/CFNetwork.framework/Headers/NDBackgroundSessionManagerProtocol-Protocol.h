/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/Swift-Protocol.h>

@protocol NDBackgroundSessionManagerProtocol <Swift>

- (unsigned short)boost;
- (unsigned short)dropBoost;
- (unsigned short)sendPendingCallbacksForIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)createSessionWithConfiguration:clientProxy:cachesDirectory:options:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)obliterateAllSessionsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getActiveSessionIdentifiersWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)releaseAssertionForSession:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)okayToSendPendingCallbacksForIdentifier:reply: /* Error: Ran out of types for this method. */;

@end
