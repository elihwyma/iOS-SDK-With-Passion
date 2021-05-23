/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKValueRange, NSDictionary, NSString;

@interface HKAbstractFixedAxisScalingRule : NSObject

{
    HKValueRange *_defaultAxisBounds;
    NSDictionary *_axisBoundsOverrides;
    _Bool _shouldExpandBoundsForOutliers;
    long long _portraitPrettyNumberRule;
}

@property (nonatomic) _Bool shouldExpandBoundsForOutliers;
@property (nonatomic) long long portraitPrettyNumberRule;
@property (nonatomic, readonly) HKValueRange *defaultAxisBounds;
@property (nonatomic, readonly) NSDictionary *axisBoundsOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;
- (id)_valueRangeForZoomLevel:(long long)arg1;

@end
