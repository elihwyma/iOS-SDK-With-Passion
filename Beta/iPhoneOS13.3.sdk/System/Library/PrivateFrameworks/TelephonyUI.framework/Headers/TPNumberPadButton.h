/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIControl.h>

@class CALayer, NSString, TPRevealingRingView, UIColor, UIView;

@interface TPNumberPadButton : UIControl

{
    unsigned int character;
    UIColor *_color;
    CALayer *_glyphLayer;
    CALayer *_highlightedGlyphLayer;
    UIView *_circleView;
    UIColor *_buttonColor;
    TPRevealingRingView *_revealingRingView;
}

@property (retain) CALayer *glyphLayer;
@property (retain) CALayer *highlightedGlyphLayer;
@property (retain) UIView *circleView;
@property (nonatomic, readonly) UIColor *buttonColor;
@property (nonatomic, readonly) UIColor *highlightedButtonColor;
@property (nonatomic, readonly) TPRevealingRingView *revealingRingView;
@property (retain, nonatomic) UIColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property unsigned int character;

+ (struct CGSize)defaultSize;
+ (double)horizontalPadding;
+ (void)resetLocale;
+ (double)verticalPadding;
+ (struct UIEdgeInsets)paddingOutsideRing;
+ (double)unhighlightedCircleViewAlpha;
+ (double)highlightedCircleViewAlpha;
+ (_Bool)usesTelephonyGlyphsWhereAvailable;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(_Bool)arg2 whiteVersion:(_Bool)arg3;
+ (id)imageForCharacter:(unsigned int)arg1;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(_Bool)arg2;
+ (double)outerCircleDiameter;
+ (void)loadNumberPadKeyPrototypeView;
+ (void)resetLocaleIfNeeded;
+ (id)scriptKey;
+ (_Bool)usesBoldAssets;
+ (_Bool)isCarPlay;
+ (id)localizedLettersForCharacter:(unsigned int)arg1;
+ (_Bool)useLargeFont;
+ (struct CGRect)circleBounds;
+ (_Bool)usesButtonSaturationFilters;
+ (id)disabledImageForCharacter:(unsigned int)arg1;

- (void)setHighlighted:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchDown;
- (void)setGreyedOut:(_Bool)arg1;
- (id)initForCharacter:(unsigned int)arg1;
- (id)defaultColor;
- (void)reloadImagesForCurrentCharacter;
- (void)touchUp;
- (void)touchCancelled;
- (void)highlightCircleView:(_Bool)arg1 animated:(_Bool)arg2;

@end
