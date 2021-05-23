/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIColor.h>

@interface UIColor (TPTelephonyUIUtilities)

+ (id)dynamicTertiaryLabelColor;
+ (id)dynamicBackgroundColor;
+ (id)_tp_bluePillColor;
+ (id)_tp_greenPillColor;
+ (id)_tp_defaultPillColor;
+ (id)dynamicLabelColor;
+ (id)dynamicSecondaryLabelColor;
+ (id)dynamicQuaternaryLabelColor;
+ (id)dynamicCarPrimaryColor;
+ (id)dynamicCarSecondaryColor;
+ (id)dynamicCarTertiaryColor;
+ (id)dynamicCarQuaternaryColor;
+ (id)dynamicCarFocusedColor;
+ (id)dynamicCarFocusedLabelColor;
+ (id)dynamicCarFocusedPrimaryLabelColor;
+ (id)dynamicCarFocusedSecondaryLabelColor;

- (id)tpImageFromColor;
- (id)darkerColorByPercentage:(float)arg1;
- (id)colorByAlteringOpacityToPercentage:(float)arg1;

@end
