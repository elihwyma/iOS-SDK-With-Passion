/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <TelephonyUI/TPNumberPadDarkStyleButton.h>

@class NSString, UIColor;

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton

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
+ (int)_characterTypeForCharacter:(unsigned int)arg1;
+ (id)_stringCharacterForCharacter:(unsigned int)arg1;
+ (_Bool)_shouldUseAlternativeCirlceViewAlphas;
+ (double)unhighlightedCircleViewAlpha;
+ (double)highlightedCircleViewAlpha;

- (id)initForCharacter:(unsigned int)arg1;
- (int)characterType;
- (id)stringCharacter;

@end
