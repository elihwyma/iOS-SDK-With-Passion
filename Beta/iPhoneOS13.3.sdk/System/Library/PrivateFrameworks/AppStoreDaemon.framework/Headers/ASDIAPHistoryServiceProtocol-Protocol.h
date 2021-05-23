/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@protocol ASDIAPHistoryServiceProtocol

- (unsigned short)setSubscriptionEntitlementsWithDictionary:forAccountID:segment: /* Error: Ran out of types for this method. */;
- (unsigned short)getSubscriptionEntitlementsForSegment:ignoreCaches:withReplyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getCachedSubscriptionEntitlementsForSegment:withReplyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllIAPsForActiveAccountWithReplyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getIAPsForActiveAccountWithAdamIDs:withReplyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshIAPsForActiveAccountWithReplyHandler: /* Error: Ran out of types for this method. */;

@end
