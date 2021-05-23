/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@class LPCaptionButtonPresentationProperties, LPTextView, UIButton;

__attribute__((visibility("hidden")))
@interface LPHorizontalCaptionPairView

{
    LPTextView *_leftView;
    LPTextView *_rightView;
    LPCaptionButtonPresentationProperties *_buttonProperties;
    struct UIEdgeInsets _contentInset;
    long long _balancingMode;
    UIButton *_button;
}

- (id)init;
- (double)descender;
- (double)ascender;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)buttonPressed:(id)arg1;
- (void)layoutComponentView;
- (double)firstLineLeading;
- (double)lastLineDescent;
- (long long)computedNumberOfLines;
- (void)setOverrideMaximumNumberOfLines:(long long)arg1;
- (struct CGSize)_layoutCaptionPairForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;
- (id)initWithLeadingText:(id)arg1 leadingStyle:(id)arg2 trailingText:(id)arg3 trailingStyle:(id)arg4 button:(id)arg5 balancingMode:(long long)arg6;

@end
