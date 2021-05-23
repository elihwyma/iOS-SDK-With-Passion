/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLInitialSyncAgent : PLAgent

{
    PLXPCListenerOperatorComposition *_xpcHandler;
}

@property (retain) PLXPCListenerOperatorComposition *xpcHandler;

+ (void)load;
+ (id)entryEventIntervalDefinitions;

- (void)initOperatorDependancies;
- (void)logInitialSyncActivityFromEvent:(id)arg1;
- (void)logInitialSyncFromEvent:(id)arg1;

@end
