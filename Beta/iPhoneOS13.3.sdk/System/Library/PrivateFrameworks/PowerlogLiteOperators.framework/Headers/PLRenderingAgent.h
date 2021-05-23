/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class FBSDisplayLayoutMonitor, NSNumber, NSString, PLEntryNotificationOperatorComposition;

@interface PLRenderingAgent : PLAgent

{
    unsigned int _lastFrameCount;
    FBSDisplayLayoutMonitor *_mainDisplayMonitor;
    PLEntryNotificationOperatorComposition *_pluggedInStateNotification;
    NSNumber *_deviceIsPlugged;
}

@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor;
@property (retain) PLEntryNotificationOperatorComposition *pluggedInStateNotification;
@property unsigned int lastFrameCount;
@property (retain) NSNumber *deviceIsPlugged;
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
+ (id)entryEventBackwardDefinitionFrameCount;

- (id)init;
- (void)dealloc;
- (void)log;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)initOperatorDependancies;
- (void)handleConnectedChange:(id)arg1;
- (void)logEventForwardFrameCount:(id)arg1;
- (void)logFrameCount:(unsigned int)arg1 forConnectedState:(_Bool)arg2;

@end
