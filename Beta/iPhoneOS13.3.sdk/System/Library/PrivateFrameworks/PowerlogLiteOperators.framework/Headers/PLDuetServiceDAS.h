/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class PLService, PLXPCListenerOperatorComposition;

@interface PLDuetServiceDAS : NSObject

{
    PLService *_duetService;
    PLXPCListenerOperatorComposition *_dasActivityEventListener;
    PLXPCListenerOperatorComposition *_dasInfoEventListener;
    PLXPCListenerOperatorComposition *_dasPredictionEventListener;
}

@property (weak) PLService *duetService;
@property (retain) PLXPCListenerOperatorComposition *dasActivityEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasInfoEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasPredictionEventListener;

+ (id)entryEventNoneDefinitionsDASActivity;
+ (id)entryEventNoneDefinitionsDASActivityDropCount;
+ (id)entryEventNoneDefinitionsDASInfo;
+ (id)entryEventForwardDefinitionsDASPrediction;
+ (id)entryEventForwardDefinitionsDASApplicationPrediction;

- (id)init;
- (void)stopService;
- (void)didReceiveDASActivityEventWithPayload:(id)arg1;
- (void)didReceiveDASInfoEventWithPayload:(id)arg1;
- (void)didReceiveDASPredictionEventWithPayload:(id)arg1;
- (void)initOperatorDependanciesDAS:(id)arg1;

@end
