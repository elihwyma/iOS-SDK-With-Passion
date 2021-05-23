/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface HUCheckmarkAccessoryView : UIView

{
    _Bool _checked;
    _Bool _disabled;
    UIImageView *_checkmarkImageView;
}

@property (retain, nonatomic) UIImageView *checkmarkImageView;
@property (nonatomic) _Bool checked;
@property (nonatomic) _Bool disabled;

+ (double)borderWidth;
+ (id)grayBorderColor;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)_updateColors;

@end
