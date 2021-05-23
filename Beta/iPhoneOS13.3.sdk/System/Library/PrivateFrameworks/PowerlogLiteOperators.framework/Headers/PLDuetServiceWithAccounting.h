/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLDuetServiceImpl.h>

@interface PLDuetServiceWithAccounting : PLDuetServiceImpl

+ (id)mapBundleID:(id)arg1;

- (id)init;
- (void)initOperatorDependancies:(id)arg1;
- (void)didReceiveEventWithPayload:(id)arg1;
- (id)energyResponse;
- (void)accumulateWithLastCompletedDate:(id)arg1 withNow:(id)arg2;
- (void)setupBatterySaverModeForNotification:(id)arg1;
- (id)eventTransitionsWithEvents:(id)arg1;
- (void)createQualificationEventsWithEventTransitions:(id)arg1 withQualificationID:(int)arg2;
- (id)energyResponseWithQualificationID:(int)arg1;
- (void)accumulateWithLastCompletedDate:(id)arg1 withNow:(id)arg2 withQualificationID:(int)arg3;

@end
