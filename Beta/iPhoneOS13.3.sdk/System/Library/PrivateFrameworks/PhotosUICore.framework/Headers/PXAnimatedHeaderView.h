/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, PXAnimatedLabel, UIFont;

@interface PXAnimatedHeaderView : UIView

{
    UIFont *_font;
    NSString *_text;
    PXAnimatedLabel *_currentLabel;
    PXAnimatedLabel *_sizingLabel;
    CAGradientLayer *_gradientLayer;
}

@property (retain) PXAnimatedLabel *currentLabel;
@property (retain) PXAnimatedLabel *sizingLabel;
@property (retain) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSString *text;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setText:(id)arg1 withAnimationStyle:(long long)arg2;
- (void)setText:(id)arg1 withAnimationStyle:(long long)arg2 spinDigits:(_Bool)arg3;
- (_Bool)_requiresLabelSwitchForNewText:(id)arg1;
- (_Bool)_requiresDigitAnimationForNewText:(id)arg1;
- (id)_labelWithText:(id)arg1;
- (void)_updateSizingWithText:(id)arg1;
- (void)_animateLabelSwitchFromLabel:(id)arg1 toLabel:(id)arg2 andAnimationStyle:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
