/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface HKNumericClampingAxisScalingRule : NSObject

{
    NSArray *_chartBoundsRuleChoices;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)ruleWithChartBoundsRuleChoices:(id)arg1;

- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;

@end
