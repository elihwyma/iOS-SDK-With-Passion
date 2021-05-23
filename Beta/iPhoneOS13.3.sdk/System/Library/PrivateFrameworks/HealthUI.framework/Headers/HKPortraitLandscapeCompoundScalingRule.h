/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HKInteractiveChartsAxisScalingRule;

@interface HKPortraitLandscapeCompoundScalingRule : NSObject

{
    id <HKInteractiveChartsAxisScalingRule> _portraitScalingRule;
    id <HKInteractiveChartsAxisScalingRule> _landscapeScalingRule;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)ruleWithPortraitRule:(id)arg1 landscapeRule:(id)arg2;

- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;

@end
