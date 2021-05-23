/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDServiceBroker;

@interface ASDSubscriptionEntitlements : NSObject

{
    ASDServiceBroker *_serviceBroker;
    int _newsCacheUpdatedNotificationToken;
    int _appStoreCacheUpdatedNotificationToken;
    int _appStoreArcadeSubscriptionBagUpdatedNotificationToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_initWithServiceBroker:(id)arg1;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3;
- (void)getSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 forActiveAccountWithResultHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 forActiveAccountWithResultAndExpiryHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(_Bool)arg2 withCacheInfoResultHandler:(CDUnknownBlockType)arg3;
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(CDUnknownBlockType)arg1;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(CDUnknownBlockType)arg1;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(CDUnknownBlockType)arg1;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(_Bool)arg2 withResultHandler:(CDUnknownBlockType)arg3;
- (void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withResultHandler:(CDUnknownBlockType)arg2;

@end
