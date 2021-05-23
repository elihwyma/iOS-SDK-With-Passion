/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKStrokeStyle.h>

@interface HKTickStyle : HKStrokeStyle

{
    _Bool _shouldRenderMajorTickMarks;
    double _tickLength;
    long long _tickDirection;
}

@property (nonatomic) double tickLength;
@property (nonatomic) long long tickDirection;
@property (nonatomic) _Bool shouldRenderMajorTickMarks;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
