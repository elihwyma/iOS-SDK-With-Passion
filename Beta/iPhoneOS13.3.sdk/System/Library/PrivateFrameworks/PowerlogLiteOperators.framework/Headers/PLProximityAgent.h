/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLProximityAgent : PLAgent

{
    PLXPCListenerOperatorComposition *_radioStateListener;
    PLXPCListenerOperatorComposition *_clientStateListener;
    PLXPCListenerOperatorComposition *_radioPowerListener;
}

@property (retain) PLXPCListenerOperatorComposition *radioStateListener;
@property (retain) PLXPCListenerOperatorComposition *clientStateListener;
@property (retain) PLXPCListenerOperatorComposition *radioPowerListener;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionRadioState;
+ (id)entryEventForwardDefinitionClientState;
+ (_Bool)isProximitySupported;
+ (id)entryEventBackwardDefinitionRadioPower;

- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardRadioState:(id)arg1;
- (void)logEventForwardClientState:(id)arg1;
- (void)logEventBackwardPowerStats:(id)arg1;

@end
