/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray;

@interface PLDuetState : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    double _cpuSeconds;
    NSMutableArray *_overlappingStates;
    NSDictionary *_info;
}

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property double cpuSeconds;
@property (retain) NSMutableArray *overlappingStates;
@property (retain) NSDictionary *info;

- (id)init;
- (id)description;
- (double)duration;

@end
