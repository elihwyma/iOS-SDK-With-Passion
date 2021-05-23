/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWStillImageCaptureSettings, NSDictionary, NSMutableDictionary;

@protocol BWStillImageProcessingStatusDelegate;

@interface BWStillImageFrameCoordinatorNode : BWNode

{
    NSDictionary *_portTypeToInput;
    NSDictionary *_portTypeToOutput;
    NSMutableDictionary *_portTypeToFrameCounters;
    id <BWStillImageProcessingStatusDelegate> _stillImageProcessingDelegate;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)_resetStillImageCaptureState;
- (int)_setupStillImageCaptureStateWithResolvedStillImageCaptureSettings:(id)arg1;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)_isCaptureComplete;
- (id)initWithPortTypes:(id)arg1;
- (id)inputForPortType:(id)arg1;
- (id)outputForPortType:(id)arg1;
- (void)setStillImageProcessingDelegate:(id)arg1;
- (id)stillImageProcessingDelegate;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)_handleZeroShutterLagSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
