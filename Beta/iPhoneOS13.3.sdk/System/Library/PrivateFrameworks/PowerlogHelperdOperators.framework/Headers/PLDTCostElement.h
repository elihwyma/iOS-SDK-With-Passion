/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface PLDTCostElement : NSObject

{
    NSDate *_startDate;
    NSDate *_costReturnedTillDate;
    double _costAggregated;
    NSDate *_lastOverheadStart;
}

@property (retain) NSDate *startDate;
@property (retain) NSDate *costReturnedTillDate;
@property double costAggregated;
@property (retain) NSDate *lastOverheadStart;

+ (id)getCostElementInstance;

- (id)init;
- (id)initWithTime:(id)arg1;
- (void)addNetworkingEvent:(double)arg1 atTime:(id)arg2 withPid:(int)arg3 withAppState:(int)arg4 withQueryCount:(int)arg5;
- (id)getNetworkingCostUptoTime:(id)arg1 withPid:(int)arg2 withLastActiveStart:(id)arg3 withLastSuspendStart:(id)arg4 withAppState:(int)arg5 withQueryCount:(int)arg6;
- (void)addLocationEvent:(double)arg1 atTime:(id)arg2 withPid:(int)arg3 withAppState:(int)arg4;
- (id)getLocationCostUptoTime:(id)arg1 withPid:(int)arg2 withLastActiveStart:(id)arg3 withLastSuspendStart:(id)arg4 withAppState:(int)arg5;
- (void)addCpuEvent:(double)arg1 atTime:(id)arg2 withPid:(int)arg3 withAppState:(int)arg4;
- (id)getCpuCostUptoTime:(id)arg1 withPid:(int)arg2 withLastActiveStart:(id)arg3 withLastSuspendStart:(id)arg4 withAppState:(int)arg5;
- (void)addGpuEvent:(double)arg1 atTime:(id)arg2 withPid:(int)arg3 withAppState:(int)arg4;
- (id)getGpuCostUptoTime:(id)arg1 withPid:(int)arg2 withLastActiveStart:(id)arg3 withLastSuspendStart:(id)arg4 withAppState:(int)arg5;
- (void)addDisplayEvent:(double)arg1 atTime:(id)arg2 withPid:(int)arg3 withAppState:(int)arg4;
- (id)getDisplayCostUptoTime:(id)arg1 withPid:(int)arg2 withLastActiveStart:(id)arg3 withLastSuspendStart:(id)arg4 withAppState:(int)arg5;
- (void)addEvent:(double)arg1 atTime:(id)arg2;
- (id)getCostUptoTime:(id)arg1;
- (id)getApplicationCostUptoTime:(id)arg1 withPid:(int)arg2 withLastActiveStart:(id)arg3 withLastSuspendStart:(id)arg4 withAppState:(int)arg5;

@end
