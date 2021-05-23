/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class SSAppPurchaseHistoryCache;

@interface ISDeleteDaemonModule : NSObject

{
    SSAppPurchaseHistoryCache *__purchaseHistoryCache;
}

- (unsigned long long)purge:(unsigned long long)arg1;
- (unsigned long long)purgeableSpace;
- (id)_purchaseHistoryCache;

@end
