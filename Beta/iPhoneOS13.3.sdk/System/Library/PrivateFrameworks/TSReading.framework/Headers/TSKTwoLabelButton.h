/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIButton.h>

@class UIColor, UIImage, UIImageView, UILabel;

@interface TSKTwoLabelButton : UIButton

{
    UILabel *mSecondLabel;
    UIImageView *mImageView;
    UIImage *mNormalStateImage;
    UIImage *mHighlightedStateImage;
    UIImage *mDisabledStateImage;
    UIColor *mSecondLabelTextColor;
}

@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *normalStateImage;
@property (retain, nonatomic) UIImage *highlightedStateImage;
@property (retain, nonatomic) UIImage *disabledStateImage;
@property (retain, nonatomic) UIColor *secondLabelTextColor;

- (void)dealloc;
- (void)layoutSubviews;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)p_syncButtonState;

@end
