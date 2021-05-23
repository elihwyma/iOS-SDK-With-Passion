/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorController.h>

@class BWDeepFusionProcessorControllerConfiguration, BWDeepFusionProcessorRequest, DeepFusionPrepareDescriptor, DeepFusionProcessor, FigStateMachine, NSMutableArray, NSSet, NSString;

@interface BWDeepFusionProcessorController : BWStillImageProcessorController

{
    BWDeepFusionProcessorControllerConfiguration *_configuration;
    NSSet *_supportedPortTypes;
    FigStateMachine *_stateMachine;
    DeepFusionProcessor *_deepFusionProcessor;
    DeepFusionPrepareDescriptor *_prepareDescriptor;
    Class _deepFusionOutputClass;
    struct opaqueCMFormatDescription *_outputFormatDescription;
    NSMutableArray *_requestQueue;
    BWDeepFusionProcessorRequest *_currentRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (unsigned long long)type;
- (id)initWithConfiguration:(id)arg1;
- (void)_process;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (void)input:(id)arg1 addType:(unsigned long long)arg2;
- (void)addInferencesForInput:(id)arg1;
- (int)_loadSetupAndPrepareDeepFusionProcessor;
- (void)_resetProcessor;
- (void)_updateStateIfNeeded;
- (void)_serviceNextRequest;
- (int)_setupProcessor;

@end
