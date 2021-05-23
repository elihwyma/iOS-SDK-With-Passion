/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIButton.h>

@class UIColor, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SFNavigationBarToggleButton : UIButton

{
    UIImageView *_defaultStateImageView;
    UIImageView *_selectedStateImageView;
    UIView *_selectedStateView;
    _Bool _useStandaloneAppearance;
    _Bool _drawsLightGlyph;
    _Bool _usesInsetFromBackground;
    _Bool _highlightsBackground;
    UIImage *_image;
    double _resizableBackgroundCornerRadius;
    UIColor *_glyphTintColor;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) _Bool drawsLightGlyph;
@property (nonatomic) double resizableBackgroundCornerRadius;
@property (nonatomic) _Bool usesInsetFromBackground;
@property (retain, nonatomic) UIColor *glyphTintColor;
@property (nonatomic) _Bool highlightsBackground;

+ (struct CGSize)glyphSize;
+ (id)formatMenuImage;
+ (id)readerImage;

- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithImage:(id)arg1 forInputMode:(unsigned long long)arg2;
- (void)_updateDefaultStateImageView;
- (void)_updateSelectedStateView;
- (_Bool)_effectiveHighlightsBackground;
- (void)_updateImageViews;

@end
