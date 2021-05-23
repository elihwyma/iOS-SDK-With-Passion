/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDClientContext, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface CKDAssetCacheEvictionInfo : NSObject

{
    _Bool _forced;
    _Bool _evictNow;
    _Bool _clearRegisteredItems;
    CKDClientContext *_clientContext;
    NSMutableOrderedSet *_itemIDsToUnregister;
    NSMutableOrderedSet *_assetHandleItemIDsToDelete;
}

@property _Bool forced;
@property _Bool evictNow;
@property _Bool clearRegisteredItems;
@property (retain, nonatomic) CKDClientContext *clientContext;
@property (retain, nonatomic) NSMutableOrderedSet *itemIDsToUnregister;
@property (retain, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete;

- (id)initWithClientContext:(id)arg1 forced:(_Bool)arg2 evictNow:(_Bool)arg3;

@end
