/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <CoreMaterial/MTColor.h>

@interface MTWhiteColor : MTColor

{
    double _white;
    double _alpha;
}

@property (nonatomic, readonly) double white;
@property (nonatomic, readonly) double alpha;

- (id)description;
- (struct CGColor *)CGColor;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)_rgbColor;
- (id)_initWithCGColor:(struct CGColor *)arg1;
- (id)_initWithDescription:(id)arg1;
- (id)colorDescription;
- (id)colorWithAdditionalAlphaComponent:(double)arg1;
- (id)colorBlendedWithColor:(id)arg1;
- (struct CAColorMatrix)sourceOverColorMatrix;

@end
