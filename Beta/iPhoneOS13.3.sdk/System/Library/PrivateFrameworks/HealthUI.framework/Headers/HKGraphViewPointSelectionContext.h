/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKGraphSeries, HKValueRange, NSArray, NSDateComponents;

@interface HKGraphViewPointSelectionContext : NSObject

{
    HKGraphSeries *_selectedSeries;
    HKValueRange *_selectedRangeXValues;
    HKValueRange *_selectedPathIndexRange;
    HKValueRange *_selectedPointValueRange;
    NSDateComponents *_pointIntervalComponents;
    NSArray *_userInfo;
}

@property (retain, nonatomic) HKGraphSeries *selectedSeries;
@property (retain, nonatomic) HKValueRange *selectedRangeXValues;
@property (retain, nonatomic) HKValueRange *selectedPathIndexRange;
@property (retain, nonatomic) HKValueRange *selectedPointValueRange;
@property (retain, nonatomic) NSDateComponents *pointIntervalComponents;
@property (retain, nonatomic) NSArray *userInfo;

- (id)debugDescription;

@end
