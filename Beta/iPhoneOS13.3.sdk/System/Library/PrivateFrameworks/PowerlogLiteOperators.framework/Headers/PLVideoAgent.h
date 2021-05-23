/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent

{
    PLXPCListenerOperatorComposition *_notification;
    PLXPCListenerOperatorComposition *_cMFileListener;
    PLXPCListenerOperatorComposition *_cMHlsListener;
    PLXPCListenerOperatorComposition *_cMCrabsListener;
    PLXPCListenerOperatorComposition *_vTSessionListener;
}

@property (retain) PLXPCListenerOperatorComposition *notification;
@property (retain) PLXPCListenerOperatorComposition *cMFileListener;
@property (retain) PLXPCListenerOperatorComposition *cMHlsListener;
@property (retain) PLXPCListenerOperatorComposition *cMCrabsListener;
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)stateEnumForStateString:(id)arg1;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardVideoWithEntry:(id)arg1;
- (void)logEventBackwardCMFileWithEntry:(id)arg1;
- (void)logEventBackwardCMHlsWithEntry:(id)arg1;
- (void)logEventBackwardCMCrabsWithEntry:(id)arg1;
- (void)logEventBackwardVTSessionWithEntry:(id)arg1;

@end
