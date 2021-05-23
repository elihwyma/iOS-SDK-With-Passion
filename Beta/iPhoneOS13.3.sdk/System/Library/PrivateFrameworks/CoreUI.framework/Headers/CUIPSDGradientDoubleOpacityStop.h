/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDGradientOpacityStop.h>

@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop

{
    double leadOutOpacity;
}

+ (void)initialize;
+ (id)doubleOpacityStopWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)leadOutOpacity;
- (_Bool)isDoubleStop;
- (id)initWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3;
- (double)leadInOpacity;

@end
