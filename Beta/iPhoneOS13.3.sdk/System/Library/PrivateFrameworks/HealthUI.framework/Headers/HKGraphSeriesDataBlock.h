/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKValueRange, NSArray;

@interface HKGraphSeriesDataBlock : NSObject

{
    NSArray *_chartPoints;
    HKValueRange *_yValueRange;
}

@property (copy, nonatomic) NSArray *chartPoints;
@property (nonatomic, readonly) HKValueRange *yValueRange;

@end
