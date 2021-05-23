/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUITrailersCell : UICollectionViewCell

{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) struct CGRect imageFrame;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
