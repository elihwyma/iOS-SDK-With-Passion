/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKStatistics;

@interface _HKBloodPressureWrapper : NSObject

{
    HKStatistics *_systolic;
    HKStatistics *_diastolic;
}

@property (retain, nonatomic) HKStatistics *systolic;
@property (retain, nonatomic) HKStatistics *diastolic;

@end
