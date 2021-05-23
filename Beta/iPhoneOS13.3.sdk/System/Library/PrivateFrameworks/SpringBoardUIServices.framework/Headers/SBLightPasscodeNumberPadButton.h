/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <TelephonyUI/TPNumberPadLightStyleButton.h>

@class NSString, UIColor;

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton

{
    UIColor *_reduceTransparencyButtonColor;
}

@property (retain, nonatomic) UIColor *reduceTransparencyButtonColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)defaultSize;
+ (double)_numberPadButtonOuterCircleDiameter;
+ (struct UIEdgeInsets)paddingOutsideRing;
+ (_Bool)_shouldUseAlternativeCirlceViewAlphas;
+ (double)unhighlightedCircleViewAlpha;
+ (double)highlightedCircleViewAlpha;
+ (_Bool)usesTelephonyGlyphsWhereAvailable;

- (id)initForCharacter:(unsigned int)arg1;
- (int)characterType;
- (id)stringCharacter;

@end
