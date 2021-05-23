/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface PUCurationKeyAssetComparisonViewCell : UICollectionViewCell

{
    UIImageView *_imageView;
    UIImage *_thumbnailImage;
    NSString *_representedAssetIdentifier;
}

@property (retain, nonatomic) UIImage *thumbnailImage;
@property (retain, nonatomic) NSString *representedAssetIdentifier;

+ (double)cellHeightWithCellWidth:(double)arg1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
