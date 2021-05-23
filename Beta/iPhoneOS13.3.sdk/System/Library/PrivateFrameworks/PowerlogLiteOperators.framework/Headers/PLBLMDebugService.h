/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLService.h>

@class NSMutableDictionary, PLEntryNotificationOperatorComposition, PLTimer, PLXPCListenerOperatorComposition;

@interface PLBLMDebugService : PLService

{
    PLXPCListenerOperatorComposition *_xpcListenerBLMDebugTrigger;
    PLEntryNotificationOperatorComposition *_ioreportCallback;
    PLEntryNotificationOperatorComposition *_processmonitorCallback;
    PLEntryNotificationOperatorComposition *_processnetworkCallback;
    PLEntryNotificationOperatorComposition *_wifiCallback;
    PLEntryNotificationOperatorComposition *_bbCallback;
    PLEntryNotificationOperatorComposition *_btCallback;
    PLEntryNotificationOperatorComposition *_displayAPLCallback;
    PLTimer *_debugTimers;
    NSMutableDictionary *_triggers;
}

@property (retain) PLXPCListenerOperatorComposition *xpcListenerBLMDebugTrigger;
@property (retain) PLEntryNotificationOperatorComposition *ioreportCallback;
@property (retain) PLEntryNotificationOperatorComposition *processmonitorCallback;
@property (retain) PLEntryNotificationOperatorComposition *processnetworkCallback;
@property (retain) PLEntryNotificationOperatorComposition *wifiCallback;
@property (retain) PLEntryNotificationOperatorComposition *bbCallback;
@property (retain) PLEntryNotificationOperatorComposition *btCallback;
@property (retain) PLEntryNotificationOperatorComposition *displayAPLCallback;
@property (retain) PLTimer *debugTimers;
@property (retain) NSMutableDictionary *triggers;

+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventNoneDefinitionBLMDebug;
+ (_Bool)isModelTriggerRun;

- (id)init;
- (void)initOperatorDependancies;
- (void)registerTrigger:(id)arg1;
- (void)triggerLoggersNow:(id)arg1;
- (void)triggerSelectorAtDate:(id)arg1 withSelector:(SEL)arg2 withUseInfo:(id)arg3;
- (id)respondBLMDDebugQuery:(id)arg1;
- (id)logRailData:(int)arg1 withTriggerName:(id)arg2 inTimeRange:(struct _PLTimeIntervalRange)arg3;
- (double)energyForRootNodeID:(int)arg1 withRange:(struct _PLTimeIntervalRange)arg2;
- (id)Testservice:(id)arg1;
- (void)debugTrigger;

@end
