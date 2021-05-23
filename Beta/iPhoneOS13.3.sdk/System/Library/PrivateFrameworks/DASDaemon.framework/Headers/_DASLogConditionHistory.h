/*
 Image: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _DASLogConditionHistory : NSObject

{
    NSMutableArray *_conditions;
    NSMutableArray *_intervals;
}

@property (retain, nonatomic) NSMutableArray *conditions;
@property (retain, nonatomic) NSMutableArray *intervals;

+ (id)condition:(id)arg1 fromDate:(id)arg2;

- (id)description;
- (id)initWithCondition:(id)arg1 fromDate:(id)arg2;
- (void)addCondition:(id)arg1 atDate:(id)arg2;
- (id)idealIntervals;

@end
