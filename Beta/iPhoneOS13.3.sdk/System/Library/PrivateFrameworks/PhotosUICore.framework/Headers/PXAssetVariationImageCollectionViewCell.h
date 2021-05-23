/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetVariationCollectionViewCell.h>

@class UIImageView;

@interface PXAssetVariationImageCollectionViewCell : PXAssetVariationCollectionViewCell

{
    UIImageView *_imageView;
}

- (id)loadVariationView;
- (void)updateVariationView;

@end
