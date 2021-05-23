/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/Swift-Protocol.h>

@protocol ICProcessPlayActivityEventsRequestListener <Swift>

- (unsigned short)completePendingPlayActivityEvents:forSessionToken:result:withReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)flushPlayActivityEventsForEndPointIdentifier:withReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)insertPlayActivityEvents:withReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)removePlayActivityEventsUptoRevision:withReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setRevision:revisionVersionToken:forEndpointIdentifier:withReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)acquirePendingPlayActivityEventsForEndpointIdentifier:storeAccountID:shouldFilterStoreAccountID:withReplyBlock: /* Error: Ran out of types for this method. */;

@end
