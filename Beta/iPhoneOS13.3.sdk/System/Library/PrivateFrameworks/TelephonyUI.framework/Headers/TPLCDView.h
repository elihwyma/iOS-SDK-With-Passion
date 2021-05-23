/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TPLCDBar.h>

@class TPLCDSubImageView, TPLCDTextView, UIView;

@interface TPLCDView : TPLCDBar

{
    UIView *_contentView;
    TPLCDTextView *_textView;
    TPLCDTextView *_labelView;
    TPLCDSubImageView *_imageView;
    unsigned int _layoutAsLabelled:1;
    _Bool _verticallyCenterTextViewIfLabelless;
}

@property _Bool verticallyCenterTextViewIfLabelless;

+ (double)defaultTextFontSize;
+ (double)defaultLabelFontSize;

- (void)setLabel:(id)arg1;
- (id)label;
- (id)text;
- (void)setText:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGRect)_labelFrame;
- (struct CGRect)textFrame;
- (struct CGRect)fullSizedContentViewFrame;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;
- (id)subImage;
- (void)_resetContentViewFrame;
- (double)_textVInset;
- (double)_labelVInset;
- (_Bool)shouldCenterContentView;
- (struct CGRect)_text1Frame;
- (_Bool)shouldCenterText;
- (struct CGRect)_imageViewFrame;
- (void)setLabel:(id)arg1 animate:(_Bool)arg2;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)setContentsAlpha:(double)arg1;
- (void)setTextFontSize:(double)arg1;
- (void)setLabelFontSize:(double)arg1;
- (void)blinkLabel;
- (void)setSubImage:(id)arg1;
- (void)setLayoutAsLabelled:(_Bool)arg1;
- (void)setSecondLineText:(id)arg1;
- (id)secondLineText;

@end
