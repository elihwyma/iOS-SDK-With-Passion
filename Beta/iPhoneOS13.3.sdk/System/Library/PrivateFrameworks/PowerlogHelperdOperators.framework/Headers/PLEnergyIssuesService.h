/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogCore/PLService.h>

@class NSString, PLXPCListenerOperatorComposition;

@interface PLEnergyIssuesService : PLService

{
    PLXPCListenerOperatorComposition *_eventListener;
    PLXPCListenerOperatorComposition *_xpcListenerEnergyIssueTrigger;
    NSString *_entryKeyForEnergyIssues;
}

@property (retain) PLXPCListenerOperatorComposition *eventListener;
@property (retain) PLXPCListenerOperatorComposition *xpcListenerEnergyIssueTrigger;
@property (retain) NSString *entryKeyForEnergyIssues;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionEnergySignatures;

- (id)init;
- (void)initOperatorDependancies;
- (void)setAssertionThresholds;
- (struct __CFDictionary *)createAssertionThreshold:(int)arg1 withAggregateLimit:(int)arg2;
- (void)handleAssertionNotifications;

@end
