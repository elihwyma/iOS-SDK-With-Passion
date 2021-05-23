/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBatteryBreakdownService.h>

@class PLXPCResponderOperatorComposition;

@interface PLBLDService : PLBatteryBreakdownService

{
    PLXPCResponderOperatorComposition *_batteryBreakdownResponder;
    PLXPCResponderOperatorComposition *_logBUIResultsResponder;
}

@property (retain) PLXPCResponderOperatorComposition *batteryBreakdownResponder;
@property (retain) PLXPCResponderOperatorComposition *logBUIResultsResponder;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointBLD;

- (id)init;
- (void)initOperatorDependancies;
- (id)batteryBreakdownWithPayload:(id)arg1;
- (id)bldEntryWithBatteryBreakdown:(id)arg1;

@end
