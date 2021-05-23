/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, PHFetchResult;

@protocol PXSearchTopAssetsResultChangeDelegate;

@interface PXSearchTopAssetsResult : NSObject

{
    NSArray *_assetUUIDs;
    PHFetchResult *_topAssetsFetchResult;
    id <PXSearchTopAssetsResultChangeDelegate> _delegate;
    CDUnknownBlockType _topAssetFilter;
    NSString *_priorityAssetUUID;
    NSArray *_removedObjects;
    NSArray *_hiddenObjects;
}

@property (copy, nonatomic, readonly) NSString *priorityAssetUUID;
@property (copy, nonatomic, readonly) NSArray *removedObjects;
@property (copy, nonatomic, readonly) NSArray *hiddenObjects;
@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (nonatomic, readonly) PHFetchResult *topAssetsFetchResult;
@property (weak, nonatomic) id <PXSearchTopAssetsResultChangeDelegate> delegate;
@property (readonly) NSDictionary *debugDictionary;
@property (copy, nonatomic) CDUnknownBlockType topAssetFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long itemType;

+ (id)sortedPreviewAssetsFrom:(id)arg1 priorityAssetUUID:(id)arg2 numberOfTopAssets:(long long)arg3;
+ (id)_fetchAssetsForAssetUUIDs:(id)arg1;
+ (id)sampledAssetUUIDsFrom:(id)arg1 numberOfTopAssets:(long long)arg2 maxNumberToSample:(long long)arg3 rangeToSample:(long long)arg4;
+ (id)_fetchResultForTopAssets:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)photoLibraryDidChange:(id)arg1;
- (id)initWithAssetUUIDs:(id)arg1 priorityAssetUUID:(id)arg2;
- (void)_filterTopAssets:(id)arg1;
- (void)_notifyDelegateOfAssetChanges:(id)arg1 newCuration:(_Bool)arg2;
- (_Bool)_shouldRecurateForChangeDetails:(id)arg1;
- (void)_curateThumbnailAssets;
- (unsigned long long)numberOfTopAssets;

@end
