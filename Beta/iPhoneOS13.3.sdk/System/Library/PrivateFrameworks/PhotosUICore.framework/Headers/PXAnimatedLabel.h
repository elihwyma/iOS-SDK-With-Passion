/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PXAnimatedCounter, UIFont, UILabel;

@interface PXAnimatedLabel : UIView

{
    UIFont *_font;
    NSString *_text;
    PXAnimatedCounter *_counter;
    UILabel *_label;
    NSLayoutConstraint *_counterWidthConstraint;
}

@property (retain) PXAnimatedCounter *counter;
@property (retain) UILabel *label;
@property (readonly) NSLayoutConstraint *counterWidthConstraint;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSString *text;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setText:(id)arg1 withAnimationStyle:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_updateConstraintsForText;

@end
