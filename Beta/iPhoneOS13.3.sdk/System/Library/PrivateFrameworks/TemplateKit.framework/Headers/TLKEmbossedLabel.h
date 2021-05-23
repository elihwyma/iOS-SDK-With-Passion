/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class TLKLabel, TLKMultilineText, UIColor, UIFont;

@interface TLKEmbossedLabel

{
    struct UIEdgeInsets _customInsets;
    _Bool _shouldBadge;
    TLKMultilineText *_text;
    UIColor *_color;
    UIFont *_font;
    TLKLabel *_label;
    struct CGSize _textOffset;
}

@property (retain, nonatomic) TLKLabel *label;
@property (nonatomic) _Bool shouldBadge;
@property (retain, nonatomic) TLKMultilineText *text;
@property (nonatomic) struct CGSize textOffset;
@property (nonatomic) _Bool adjustsFontSizeToFitWidth;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIFont *font;

+ (Class)layerClass;

- (id)init;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)observedPropertiesChanged;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)setText:(id)arg1 font:(id)arg2 customInsets:(struct UIEdgeInsets)arg3 badge:(_Bool)arg4;

@end
