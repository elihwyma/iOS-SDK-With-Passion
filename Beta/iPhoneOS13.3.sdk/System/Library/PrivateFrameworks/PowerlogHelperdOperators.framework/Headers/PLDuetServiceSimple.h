/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogHelperdOperators/PLDuetServiceImpl.h>

@class NSMutableDictionary, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition;

@interface PLDuetServiceSimple : PLDuetServiceImpl

{
    _Bool _isCharging;
    NSMutableDictionary *_bundleIDToState;
    PLXPCListenerOperatorComposition *_resetListener;
    PLEntryNotificationOperatorComposition *_chargingListener;
}

@property (retain) NSMutableDictionary *bundleIDToState;
@property (retain) PLXPCListenerOperatorComposition *resetListener;
@property (retain) PLEntryNotificationOperatorComposition *chargingListener;
@property _Bool isCharging;

- (id)init;
- (void)initOperatorDependancies:(id)arg1;
- (void)didReceiveStartEventWithPayload:(id)arg1;
- (id)didReceiveStopEventWithPayload:(id)arg1;
- (void)didReceiveReset;
- (double)numCPUSecondsForPid:(int)arg1;
- (double)numCPUSecondsForBundleID:(id)arg1;
- (double)capUtilizationInSeconds:(double)arg1 withUpperBoundInError:(double)arg2 withCapInError:(double)arg3 withCappedUpperBound:(double)arg4;

@end
