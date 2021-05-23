/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWNodeError, BWNodeInput, BWNodeOutput, NSArray;

@interface BWStillImageDualPhotoFacePropagatorNode : BWNode

{
    long long _currentSettingsID;
    NSArray *_baseZoomFactors;
    struct opaqueCMSampleBuffer *_widerFOVBuffer;
    struct opaqueCMSampleBuffer *_narrowerFOVBuffer;
    BWNodeError *_widerFOVError;
    BWNodeError *_narrowerFOVError;
    BWNodeInput *_widerFOVInput;
    BWNodeInput *_narrowerFOVInput;
    BWNodeOutput *_widerFOVOutput;
    BWNodeOutput *_narrowerFOVOutput;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)_clearCaptureRequestState;
- (id)initWithBaseZoomFactors:(id)arg1;
- (void)_configureCaptureRequestStateWithStillImageSettings:(id)arg1;
- (void)_processWiderAndNarrowerFOVInput;
- (void)_emitBuffersAndErrorsToOutputs;

@end
