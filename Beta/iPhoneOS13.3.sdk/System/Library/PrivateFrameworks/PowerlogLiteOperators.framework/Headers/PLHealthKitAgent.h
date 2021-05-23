/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLHealthKitAgent : PLAgent

{
    PLXPCListenerOperatorComposition *_queryHandler;
    PLXPCListenerOperatorComposition *_cloudSyncHandler;
}

@property (retain) PLXPCListenerOperatorComposition *queryHandler;
@property (retain) PLXPCListenerOperatorComposition *cloudSyncHandler;

+ (void)load;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;

@end
