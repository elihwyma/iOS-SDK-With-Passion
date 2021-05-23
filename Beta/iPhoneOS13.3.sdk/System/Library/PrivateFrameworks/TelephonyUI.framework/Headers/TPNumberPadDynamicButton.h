/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TPNumberPadButton.h>

@interface TPNumberPadDynamicButton : TPNumberPadButton

+ (long long)currentStyle;
+ (double)unhighlightedCircleViewAlpha;
+ (double)highlightedCircleViewAlpha;
+ (_Bool)usesTelephonyGlyphsWhereAvailable;
+ (id)imageForCharacter:(unsigned int)arg1;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(_Bool)arg2;

- (void)traitCollectionDidChange:(id)arg1;
- (id)buttonColor;
- (id)initForCharacter:(unsigned int)arg1;
- (void)updateCurrentStyleIfNecessaryFromStyle:(long long)arg1;

@end
