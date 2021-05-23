/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@protocol TUMomentsControllerXPCServer <Swift>

- (unsigned short)registerClient: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterClient: /* Error: Ran out of types for this method. */;
- (unsigned short)registerStreamToken:requesterID:remoteIDSDestinations:remoteMomentsAvailable:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterStreamToken:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)startRequestWithMediaType:forStreamToken:requesteeID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)endRequestWithTransactionID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)registerXPCClientWithReply: /* Error: Ran out of types for this method. */;

@end
