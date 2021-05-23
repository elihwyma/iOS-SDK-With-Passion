/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface VUIAppCell : UICollectionViewCell

{
    UIImage *_image;
    NSString *_title;
    _Bool _didLayout;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;

@end
