/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class FBSDisplayLayoutMonitor, NSString;

@interface PLScreenStateAgent : PLAgent

{
    FBSDisplayLayoutMonitor *_mainDisplayMonitor;
    FBSDisplayLayoutMonitor *_airPlayDisplayMonitor;
    FBSDisplayLayoutMonitor *_carPlayDisplayMonitor;
}

@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor;
@property (retain) FBSDisplayLayoutMonitor *airPlayDisplayMonitor;
@property (retain) FBSDisplayLayoutMonitor *carPlayDisplayMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointBacklightEvent;
+ (id)entryEventForwardScreenState;
+ (id)entryAggregateDefinitionForeground;

- (id)init;
- (void)dealloc;
- (void)log;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)initOperatorDependancies;
- (void)logEventForwardCarScreenState:(id)arg1;
- (void)logEventForwardAirPlayScreenState:(id)arg1;
- (void)logEventForwardMainScreenState:(id)arg1;
- (void)accountWithLayoutEntries:(id)arg1;
- (void)createCarPlayAccountingEvents:(id)arg1;
- (void)createAirPlayWiFiAccountingEvent:(id)arg1;
- (void)logEventPointMainBacklightEvent:(id)arg1 withContext:(id)arg2;

@end
