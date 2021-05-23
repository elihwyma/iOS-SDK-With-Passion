/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMProperty.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface CMColorProperty : CMProperty

{
    OITSUColor *wdValue;
}

+ (id)cssStringFromOADColor:(id)arg1;
+ (float)transformedAlphaFromOADColor:(id)arg1;
+ (id)nsColorFromShading:(id)arg1;
+ (id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2;
+ (id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3;
+ (float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3;
+ (id)nsColorFromOADFill:(id)arg1 state:(id)arg2;
+ (id)nsColorFromOADColor:(id)arg1 state:(id)arg2;
+ (id)cssStringFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)cssStringFromTSUColor:(id)arg1;
+ (struct CGColor *)copyCGColorFromOADColor:(id)arg1 state:(id)arg2;
+ (struct CGColor *)copyCGColorFromOADFill:(id)arg1 state:(id)arg2;
+ (id)cssStringFromOADGradientFill:(id)arg1 state:(id)arg2;

- (id)value;
- (id)initWithColor:(id)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (id)cssStringForName:(id)arg1;
- (id)cssString;

@end
