/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKNumericAxis.h>

@class NSString;

@interface HKNumericAxisZeroOnly : HKNumericAxis

{
    NSString *_zeroLabel;
}

@property (nonatomic, readonly) NSString *zeroLabel;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)initWithZeroLabel:(id)arg1;

@end
