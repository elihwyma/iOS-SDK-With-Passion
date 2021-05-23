/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLWatchKitAgent : PLAgent

{
    PLXPCListenerOperatorComposition *_xpcHandler;
}

@property (retain) PLXPCListenerOperatorComposition *xpcHandler;

+ (void)load;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (id)appNameForWatchAppExtension:(id)arg1;

@end
