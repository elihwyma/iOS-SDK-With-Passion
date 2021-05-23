/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <CoreMaterial/MTColor.h>

@interface MTRGBColor : MTColor

{
    double _red;
    double _green;
    double _blue;
    double _alpha;
}

@property (nonatomic, readonly) double red;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) double alpha;

- (id)description;
- (struct CGColor *)CGColor;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)_rgbColor;
- (id)_initWithCGColor:(struct CGColor *)arg1;
- (id)_initWithDescription:(id)arg1;
- (id)colorDescription;
- (id)colorWithAdditionalAlphaComponent:(double)arg1;
- (id)colorBlendedWithColor:(id)arg1;
- (struct CAColorMatrix)sourceOverColorMatrix;

@end
