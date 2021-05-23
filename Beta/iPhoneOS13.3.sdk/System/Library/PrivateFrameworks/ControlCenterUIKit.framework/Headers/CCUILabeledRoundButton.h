/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <UIKit/UIView.h>

@class CCUICAPackageDescription, CCUIRoundButton, MTVisualStylingProvider, NSString, UIColor, UIImage, UILabel;

@interface CCUILabeledRoundButton : UIView

{
    MTVisualStylingProvider *_visualStylingProvider;
    _Bool _labelsVisible;
    _Bool _useAlternateBackground;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_glyphImage;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    CCUIRoundButton *_buttonView;
    UIColor *_highlightColor;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) CCUIRoundButton *buttonView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImage *glyphImage;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (copy, nonatomic) NSString *glyphState;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) _Bool labelsVisible;
@property (nonatomic) _Bool useAlternateBackground;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_layoutLabels;
- (void)buttonTapped:(id)arg1;
- (void)_contentSizeCategoryDidChange;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(_Bool)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(_Bool)arg3;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (id)initWithHighlightColor:(id)arg1 useLightStyle:(_Bool)arg2;
- (void)_setupLabelsBounds;
- (void)_updateVisualStylingOfLabel:(id)arg1;
- (_Bool)_shouldUseLargeTextLayout;

@end
