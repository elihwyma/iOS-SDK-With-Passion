/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class MKVibrantView, NSString, UIColor, UIFont, UIImageView;

@interface MKPlatterView : UIView

{
    UIImageView *_glyphImageView;
    MKVibrantView *_platterView;
    _Bool _highlighted;
    NSString *_glyph;
    UIFont *_glyphFont;
    UIColor *_glyphColor;
}

@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (retain, nonatomic) NSString *glyph;
@property (retain, nonatomic) UIFont *glyphFont;
@property (retain, nonatomic) UIColor *glyphColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)infoCardThemeChanged;
- (void)updateGlyph;

@end
