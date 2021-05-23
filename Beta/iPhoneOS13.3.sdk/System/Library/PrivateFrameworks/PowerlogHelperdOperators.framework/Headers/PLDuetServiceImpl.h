/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <Foundation/NSObject.h>

@class PLService, PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition;

@interface PLDuetServiceImpl : NSObject

{
    PLService *_duetService;
    PLXPCListenerOperatorComposition *_eventListener;
    PLXPCResponderOperatorComposition *_energyResponder;
}

@property (weak) PLService *duetService;
@property (retain) PLXPCListenerOperatorComposition *eventListener;
@property (retain) PLXPCResponderOperatorComposition *energyResponder;

- (void)stopService;
- (void)initOperatorDependancies:(id)arg1;

@end
