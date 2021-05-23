/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedObjectReference.h>

@class PXAssetReference;

@protocol PXDisplayAssetCollection;

@interface PXAssetCollectionReference : PXSectionedObjectReference

{
    PXAssetReference *_keyAssetReference;
}

@property (nonatomic, readonly) id <PXDisplayAssetCollection> assetCollection;
@property (nonatomic, readonly) PXAssetReference *keyAssetReference;

- (id)initWithAssetCollection:(id)arg1 keyAssetReference:(id)arg2 indexPath:(struct PXSimpleIndexPath)arg3;

@end
