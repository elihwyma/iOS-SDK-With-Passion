/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSAccount, SSAppPurchaseHistoryDatabase, SSDatabaseCache;

@interface SSAppPurchaseHistoryCache : NSObject

{
    SSAccount *_account;
    SSDatabaseCache *_databaseCache;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
}

- (id)init;
- (id)initWithAccount:(id)arg1;
- (unsigned long long)purge:(unsigned long long)arg1;
- (unsigned long long)purgeableSpace;
- (id)allUncachedImages:(id)arg1;
- (id)allUncachedImages;
- (void)clearCacheForAdamID:(id)arg1;
- (_Bool)setImageData:(id)arg1 forAdamID:(id)arg2 imageToken:(id)arg3;
- (id)imageDataForAdamID:(id)arg1;

@end
