/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIColor.h>

@interface UIColor (AKPlatformColor_Extensions_Shared)

+ (id)akColorWithCIColor:(id)arg1;
+ (id)akColorWithWhite:(double)arg1 alpha:(double)arg2;
+ (struct CGColorSpace *)_getCIELABColorSpace;
+ (id)akColorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)im_colorWithSRGBDescription:(id)arg1;
+ (id)akColorPickerPurple;
+ (id)akColorPickerBlue;
+ (id)akColorPickerGreen;
+ (id)akColorPickerYellow;
+ (id)akColorPickerOrange;
+ (id)akColorPickerRed;
+ (id)akBoxBorderColor;
+ (id)akSystemBlueColor;
+ (id)akRowSeparatorColor;
+ (id)akButtonHoverStateColor;
+ (id)akSystemRedColor;
+ (id)akSystemYellowColor;
+ (id)akSystemGreenColor;
+ (id)akSystemPinkColor;
+ (id)akSystemPurpleColor;
+ (id)akBubbleFillColor;

- (_Bool)akIsEqualToColor:(id)arg1;
- (void)getL:(double *)arg1 a:(double *)arg2 b:(double *)arg3;
- (double)akDistanceFromColor:(id)arg1;
- (id)colorUsingSRGBColorSpace;
- (double)akAlphaComponent;
- (_Bool)akHasHueEqualToColor:(id)arg1 withTolerance:(double)arg2;
- (id)akBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;

@end
