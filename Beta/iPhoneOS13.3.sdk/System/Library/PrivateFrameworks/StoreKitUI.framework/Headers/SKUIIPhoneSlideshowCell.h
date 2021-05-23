/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIIPhoneSlideshowCell : UICollectionViewCell

{
    UIImageView *_imageView;
    UIImageView *_playIcon;
    struct CGSize _imageSize;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) struct CGRect imageFrame;
@property (nonatomic, getter=isVideo) _Bool video;
@property (nonatomic) struct CGSize imageSize;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;

@end
