/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorController.h>

@class CIDualRedEyeRepairSession, NSDictionary, NSMutableArray, NSString;

@interface BWRedEyeReductionController : BWStillImageProcessorController

{
    NSDictionary *_redEyeReductionParametersByPortType;
    CIDualRedEyeRepairSession *_redEyeRepairSession;
    struct opaqueCMFormatDescription *_outputFormatDescription;
    NSMutableArray *_requestQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)prewarm;
+ (id)_newRedEyeRepairSessionWithMetalCommandQueue:(id)arg1;

- (void)dealloc;
- (unsigned long long)type;
- (id)initWithConfiguration:(id)arg1;
- (id)_currentRequest;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (void)didReceiveFrameForInput:(id)arg1;
- (void)didReceiveAllFramesForInput:(id)arg1;
- (int)_configureRedEyeReductionSessionWithConfiguration:(id)arg1;
- (void)_serviceRequests;
- (id)_requestForInput:(id)arg1;
- (void)_processRedEyeReductionWhenNecessaryForRequest:(id)arg1;
- (_Bool)_receivedRequiredFramesForRequest:(id)arg1;
- (void)_clearRequest:(id)arg1;

@end
