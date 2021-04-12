//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <TelephonyUI/TPNumberPadButtonProtocol-Protocol.h>

@class CALayer, TPRevealingRingView, UIColor, UIView;

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol>
{
    unsigned int character;
    UIColor *_color;
    CALayer *_glyphLayer;
    CALayer *_highlightedGlyphLayer;
    UIView *_circleView;
    UIColor *_buttonColor;
    TPRevealingRingView *_revealingRingView;
}

+ (id)disabledImageForCharacter:(unsigned int)arg1;
+ (double)highlightedCircleViewAlpha;
+ (double)unhighlightedCircleViewAlpha;
+ (double)horizontalPadding;
+ (double)verticalPadding;
+ (void)resetLocale;
+ (id)scriptKey;
+ (void)resetLocaleIfNeeded;
+ (void)loadNumberPadKeyPrototypeView;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(BOOL)arg2 whiteVersion:(BOOL)arg3;
+ (id)localizedLettersForCharacter:(unsigned int)arg1;
+ (BOOL)isCarPlay;
+ (BOOL)usesBoldAssets;
+ (BOOL)usesButtonSaturationFilters;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(BOOL)arg2;
+ (id)imageForCharacter:(unsigned int)arg1;
+ (UIEdgeInsets)paddingOutsideRing;
+ (BOOL)useLargeFont;
+ (double)outerCircleDiameter;
+ (CGRect)circleBounds;
+ (CGSize)defaultSize;
@property(readonly, nonatomic) TPRevealingRingView *revealingRingView; // @synthesize revealingRingView=_revealingRingView;
@property(readonly, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(retain) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain) CALayer *highlightedGlyphLayer; // @synthesize highlightedGlyphLayer=_highlightedGlyphLayer;
@property(retain) CALayer *glyphLayer; // @synthesize glyphLayer=_glyphLayer;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property unsigned int character; // @synthesize character;
// - (void).cxx_destruct;
- (void)touchCancelled;
- (void)touchUp;
- (void)touchDown;
- (id)defaultColor;
- (void)setHighlighted:(BOOL)arg1;
- (void)highlightCircleView:(BOOL)arg1 animated:(BOOL)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setGreyedOut:(BOOL)arg1;
- (void)reloadImagesForCurrentCharacter;
- (id)initForCharacter:(unsigned int)arg1;
@property(readonly, nonatomic) UIColor *highlightedButtonColor;

@end

