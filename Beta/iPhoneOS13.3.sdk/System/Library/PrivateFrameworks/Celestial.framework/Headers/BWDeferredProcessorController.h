/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorController.h>

@class BWDeferredProcessorRequest, FigStateMachine, NSMutableArray;

@interface BWDeferredProcessorController : BWStillImageProcessorController

{
    NSMutableArray *_processorRequests;
    BWDeferredProcessorRequest *_currentRequest;
    FigStateMachine *_stateMachine;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (unsigned long long)type;
- (void)_process;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (void)_updateStateIfNeeded;
- (void)_serviceNextRequest;
- (void)inputReadyForProcessing:(id)arg1;

@end
