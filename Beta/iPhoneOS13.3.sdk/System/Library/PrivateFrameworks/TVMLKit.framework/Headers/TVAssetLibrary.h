/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface TVAssetLibrary : NSObject

{
    NSObject<OS_dispatch_queue> *assetWriteQueue;
    NSObject<OS_dispatch_queue> *assetAccessQueue;
    NSString *_cachePath;
    NSMutableArray *_registeredGroups;
}

@property (copy, nonatomic) NSString *cachePath;
@property (retain, nonatomic) NSMutableArray *registeredGroups;

+ (id)sharedInstance;
+ (void)initializeAssetLibraryWithCachePath:(id)arg1 purgeCacheOnLoad:(_Bool)arg2;
+ (void)_initializeAssetLibraryWithCachePath:(id)arg1 screensaverCache:(_Bool)arg2 purgeCacheOnLoad:(_Bool)arg3;
+ (void)initializeAssetLibraryWithCachePath:(id)arg1;
+ (void)intializeScreensaverSharedAssetLibrary;

- (id)initWithCachePath:(id)arg1 screensaverCache:(_Bool)arg2 purgeCacheOnLoad:(_Bool)arg3;
- (void)registerGroup:(id)arg1;
- (id)groupWithGroupType:(long long)arg1;
- (void)removeAssetForKey:(id)arg1 inGroupOfType:(long long)arg2;
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 overWrite:(_Bool)arg5;
- (void)_setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 overWrite:(_Bool)arg5 tags:(id)arg6;
- (void)setImageAssetFromPath:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 tags:(id)arg5;
- (id)assetForKey:(id)arg1 inGroupOfType:(long long)arg2;
- (id)assetPathForKey:(id)arg1 inGroupOfType:(long long)arg2;
- (id)assetExpiryDateForKey:(id)arg1 inGroupOfType:(long long)arg2;
- (id)keyForAssetWithTags:(id)arg1 inGroupOfType:(long long)arg2;
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4;
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 tags:(id)arg5;
- (void)setImageAssetFromPath:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4;
- (void)purgeAssetsInGroupOfType:(long long)arg1;
- (void)updateAssetsInGroupOfType:(long long)arg1;
- (id)assetPathsForGroupOfType:(long long)arg1;
- (id)cachePathForGroupOfType:(long long)arg1;
- (void)unRegisterGroup:(long long)arg1;

@end
