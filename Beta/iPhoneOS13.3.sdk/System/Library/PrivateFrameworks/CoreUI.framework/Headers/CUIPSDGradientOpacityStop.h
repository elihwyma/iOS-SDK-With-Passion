/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDGradientStop.h>

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop

{
    double opacity;
}

+ (void)initialize;
+ (id)opacityStopWithLocation:(double)arg1 opacity:(double)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)opacity;
- (_Bool)isOpacityStop;
- (double)opacityLocation;
- (id)initWithLocation:(double)arg1 opacity:(double)arg2;

@end
