/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIStarRatingView : UIView

{
    double _elementSpacing;
    UIImageView *_ratingStarsImageView;
    UILabel *_textLabel;
}

@property (nonatomic) double elementSpacing;
@property (retain, nonatomic) UIImage *ratingStarsImage;
@property (nonatomic, readonly) UILabel *textLabel;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
