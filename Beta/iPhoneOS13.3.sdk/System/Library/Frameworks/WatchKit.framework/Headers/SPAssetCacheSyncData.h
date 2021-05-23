/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSString, SPAssetCacheAssets;

@interface SPAssetCacheSyncData : NSObject

{
    SPAssetCacheAssets *_permanentCache;
    SPAssetCacheAssets *_transientCache;
    NSString *_cacheIdentifier;
}

@property (retain, nonatomic) SPAssetCacheAssets *permanentCache;
@property (retain, nonatomic) SPAssetCacheAssets *transientCache;
@property (retain, nonatomic) NSString *cacheIdentifier;

+ (id)toProto:(id)arg1;
+ (id)fromProto:(id)arg1;

- (id)init;

@end
