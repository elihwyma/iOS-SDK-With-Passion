/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class PHAsset, UIImageView;

__attribute__((visibility("hidden")))
@interface _PUPhotoImportHistoryCell : UICollectionViewCell

{
    int _currentImageRequestToken;
    UIImageView *_imageView;
    PHAsset *_asset;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) int currentImageRequestToken;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateBorderColor;

@end
