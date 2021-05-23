/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@protocol HKDecimalPrecisionRule, HKInteractiveChartsAxisScalingRule;

@interface HKDisplayTypeChartingRules : NSObject

{
    long long _defaultStyle;
    NSMutableDictionary *_rulesByTimeScope;
    id <HKDecimalPrecisionRule> _allowedDecimalPrecisionRule;
    NSDictionary *_perUnitDecimalPrecision;
    _Bool _shouldHideAverageLine;
    _Bool _shouldConnectSamplesWithLines;
    long long _defaultChartStyle;
    id <HKInteractiveChartsAxisScalingRule> _axisScalingRule;
    long long _preferredTimeScope;
}

@property (nonatomic, readonly) long long defaultChartStyle;
@property (nonatomic) _Bool shouldHideAverageLine;
@property (retain, nonatomic) id <HKInteractiveChartsAxisScalingRule> axisScalingRule;
@property (nonatomic) _Bool shouldConnectSamplesWithLines;
@property (nonatomic) long long preferredTimeScope;

- (long long)chartStyleForTimeScope:(long long)arg1;
- (id)allowedDecimalPrecisionRuleForUnit:(id)arg1;
- (id)initWithDefaultChartStyle:(long long)arg1;
- (void)setIntervalComponents:(id)arg1 forTimeScope:(long long)arg2;
- (void)setChartPointRadius:(double)arg1 forTimeScope:(long long)arg2;
- (void)setChartPointLineWidth:(double)arg1 forTimeScope:(long long)arg2;
- (void)setChartStyle:(long long)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartFlatLastValue:(_Bool)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartUsesPointMarkerImage:(_Bool)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartUsesValueAxisAnnotation:(_Bool)arg1 forTimeScope:(long long)arg2;
- (_Bool)lineChartFlatLastValueForTimeScope:(long long)arg1;
- (_Bool)lineChartExtendLastValueForTimeScope:(long long)arg1;
- (_Bool)lineChartExtendFirstValueForTimeScope:(long long)arg1;
- (_Bool)lineChartUsesPointMarkerImageForTimeScope:(long long)arg1;
- (_Bool)lineChartUsesValueAxisAnnotationForTimeScope:(long long)arg1;
- (void)_setRule:(id)arg1 forKey:(id)arg2 timeScope:(long long)arg3;
- (id)_ruleForKey:(id)arg1 timeScope:(long long)arg2;
- (id)intervalComponentsForTimeScope:(long long)arg1;
- (double)chartPointLineWidthForTimeScope:(long long)arg1;
- (double)chartPointRadiusForTimeScope:(long long)arg1;
- (void)setLineChartExtendLastValue:(_Bool)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartExtendFirstValue:(_Bool)arg1 forTimeScope:(long long)arg2;
- (void)adjustedBoundsForPortraitChartWithMin:(double)arg1 max:(double)arg2 minOut:(double *)arg3 maxOut:(double *)arg4 decimalPrecision:(long long *)arg5 unit:(id)arg6 timeScope:(long long)arg7;
- (void)setAllowedDecimalPrecisionRule:(id)arg1 perUnitPrecisionRules:(id)arg2;

@end
