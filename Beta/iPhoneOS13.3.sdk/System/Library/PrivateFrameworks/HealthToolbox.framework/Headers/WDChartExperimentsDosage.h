/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsDosage : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSNumber *_doseInMilligrams;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSNumber *doseInMilligrams;

@end
