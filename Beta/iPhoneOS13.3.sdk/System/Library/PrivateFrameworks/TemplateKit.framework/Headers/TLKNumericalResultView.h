/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class TLKLabel, TLKMultilineText;

@interface TLKNumericalResultView

{
    _Bool _topLabelIsVibrant;
    TLKMultilineText *_title;
    TLKMultilineText *_subtitle;
    TLKLabel *_titleLabel;
    TLKLabel *_subtitleLabel;
}

@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) TLKLabel *subtitleLabel;
@property (retain, nonatomic) TLKMultilineText *title;
@property (retain, nonatomic) TLKMultilineText *subtitle;
@property (nonatomic) _Bool topLabelIsVibrant;

- (id)titleFont;
- (id)subtitleFont;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (id)titleLabelText;
- (id)subtitleLabelText;

@end
