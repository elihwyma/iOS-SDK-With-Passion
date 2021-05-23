/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKValueRange, NSString;

@interface HKInteractiveChartBloodPressureData : NSObject

{
    HKValueRange *_systolicRange;
    HKValueRange *_diastolicRange;
}

@property (retain, nonatomic) HKValueRange *systolicRange;
@property (retain, nonatomic) HKValueRange *diastolicRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
