/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIButton.h>

@class _UIBackdropView;

@interface TPButton : UIButton

{
    int _color;
    _UIBackdropView *_backdropView;
    _Bool _blursBackground;
    _Bool _roundsCorners;
    _Bool _usesOverlayBlendingForContents;
}

@property (nonatomic) _Bool blursBackground;
@property (nonatomic) _Bool roundsCorners;
@property (nonatomic) _Bool usesOverlayBlendingForContents;

+ (double)defaultHeight;
+ (double)defaultHeightForColor:(int)arg1;
+ (id)defaultStandardFont;
+ (double)defaultWidthForSideButton;
+ (double)defaultWidthForCenterButton;
+ (double)maxWidthForCenterButton;

- (void)setEnabled:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (int)buttonColor;
- (void)setButtonColor:(int)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(struct CGRect)arg4;
- (void)_animationWillBegin;
- (void)_animationDidEnd;
- (void)setPlusSeparatedTitle:(id)arg1;
- (void)setMinimumTitleFontSize:(double)arg1;
- (void)setMinimumTitleFontSize:(double)arg1 maximumTitleFontSize:(double)arg2;
- (void)setTitleImagePadding:(double)arg1;
- (void)setIconVerticalOffset:(double)arg1;
- (void)setTitleVerticalOffset:(double)arg1;
- (void)setDisabledButtonColor:(int)arg1;

@end
