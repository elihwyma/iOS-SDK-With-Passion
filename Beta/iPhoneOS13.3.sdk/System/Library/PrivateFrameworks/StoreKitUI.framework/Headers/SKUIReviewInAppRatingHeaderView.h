/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIStarRatingControl, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIReviewInAppRatingHeaderView : UIView

{
    _Bool _completed;
    NSString *_title;
    NSString *_message;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    SKUIStarRatingControl *_ratingView;
    struct CGSize _contentSize;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) SKUIStarRatingControl *ratingView;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) _Bool completed;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3;
- (id)_titleLabelFont;
- (id)_messageLabelFont;
- (void)setCompletedWithRating:(long long)arg1;

@end
