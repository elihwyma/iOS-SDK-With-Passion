/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class TLKLabel, TLKMultilineText, UIActivityIndicatorView;

@interface TLKActivityIndicatorView

{
    TLKMultilineText *_subtitle;
    UIActivityIndicatorView *_activityIndicator;
    TLKLabel *_subtitleLabel;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) TLKLabel *subtitleLabel;
@property (retain, nonatomic) TLKMultilineText *subtitle;

- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (id)subtitleLabelText;
- (void)tlk_updateForAppearance:(id)arg1;
- (_Bool)usesDefaultInsets;

@end
