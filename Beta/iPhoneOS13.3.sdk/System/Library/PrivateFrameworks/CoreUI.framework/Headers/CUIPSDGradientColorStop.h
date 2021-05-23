/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDGradientStop.h>

@interface CUIPSDGradientColorStop : CUIPSDGradientStop

{
    struct _psdGradientColor gradientColor;
}

+ (void)initialize;
+ (id)colorStopWithLocation:(double)arg1 gradientColor:(struct _psdGradientColor)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isColorStop;
- (double)colorLocation;
- (struct _psdGradientColor)gradientColor;
- (id)initWithLocation:(double)arg1 gradientColor:(struct _psdGradientColor)arg2;

@end
