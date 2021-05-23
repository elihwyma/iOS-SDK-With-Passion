/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TPNumberPadButton.h>

@interface TPNumberPadLightStyleButton : TPNumberPadButton

+ (double)unhighlightedCircleViewAlpha;
+ (double)highlightedCircleViewAlpha;
+ (_Bool)usesTelephonyGlyphsWhereAvailable;
+ (id)imageForCharacter:(unsigned int)arg1;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(_Bool)arg2;

- (id)buttonColor;
- (id)defaultColor;

@end
