/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSNumberFormatter, NSString;

@interface HKAxisLabelDimensionScalar : NSObject

{
    NSNumberFormatter *_formatter;
    NSString *_negativeZeroString;
}

@property (retain, nonatomic) NSNumberFormatter *formatter;
@property (retain, nonatomic) NSString *negativeZeroString;

+ (long long)_fractionDigitsForStep:(double)arg1;

- (id)init;
- (id)stringForLocation:(id)arg1;
- (double)niceStepSizeLargerThan:(double)arg1;
- (double)ticksPerStepSize:(double)arg1;
- (void)setStepSizeForLabels:(double)arg1;

@end
