/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSMutableDictionary, NSString, PLXPCListenerOperatorComposition, SSEventMonitor;

@interface PLStoreAgent : PLAgent

{
    SSEventMonitor *_monitor;
    NSMutableDictionary *_currentDownloads;
    PLXPCListenerOperatorComposition *_HLSContentTierEvent;
}

@property (retain) SSEventMonitor *monitor;
@property (retain) NSMutableDictionary *currentDownloads;
@property (readonly) PLXPCListenerOperatorComposition *HLSContentTierEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;

- (id)init;
- (void)log;
- (void)eventMonitor:(id)arg1 receivedEventWithName:(id)arg2 userInfo:(id)arg3;
- (void)initOperatorDependancies;
- (void)logHLSContentTierEvent:(id)arg1;
- (void)logAssetDownloadWithState:(id)arg1 info:(id)arg2;
- (void)logAppUpdatePollWithState:(id)arg1;

@end
