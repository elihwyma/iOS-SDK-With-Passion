/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSIndexSet, NSMutableIndexSet, NSMutableSet, PHAssetCollection, PHFetchResult;

__attribute__((visibility("hidden")))
@interface PUPhotoSelectionEntry : NSObject <Swift>

{
    _Bool _hasValidAssetIndexes;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_fetchResult;
    NSMutableSet *_selectedAssets;
    NSMutableIndexSet *_selectedIndexes;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (nonatomic, readonly) NSIndexSet *selectedIndexes;
@property (nonatomic, readonly) NSArray *selectedAssets;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)handlePhotoLibraryChange:(id)arg1;
- (void)invalidateAllAssetIndexes;
- (void)enumerateSelectedAssetsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isIndexSelected:(unsigned long long)arg1;
- (void)deselectAssetsAtIndexes:(id)arg1;
- (void)selectAssetsAtIndexes:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 fetchResult:(id)arg2 uniqueSelectedAssets:(id)arg3;
- (void)_ensureValidAssetIndexes;
- (void)setSelectedAssetsSet:(id)arg1;

@end
