/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <NSObject.h>

@class NSMutableSet, PLOperator;

@interface PLAWDAuxMetrics : NSObject

{
    PLOperator *_operator;
    NSMutableSet *_runningMetrics;
}

@property (weak) PLOperator *operator;
@property (retain, nonatomic) NSMutableSet *runningMetrics;

+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (id)initWithOperator:(id)arg1;
- (void)resetTableWithEntryKey:(id)arg1;
- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (_Bool)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (_Bool)dropFirstEntryReceived:(id)arg1 usingFilter:(id)arg2 andStartTime:(id)arg3;
- (_Bool)doesInterfereWithChargerWithStartDate:(id)arg1 withEndDate:(id)arg2;
- (void)handleChargerChangeWithState:(_Bool)arg1 withDate:(id)arg2;
- (double)getRailEnergyWithEntry:(id)arg1 withFilter:(id)arg2 isRailForward:(_Bool)arg3;

@end
