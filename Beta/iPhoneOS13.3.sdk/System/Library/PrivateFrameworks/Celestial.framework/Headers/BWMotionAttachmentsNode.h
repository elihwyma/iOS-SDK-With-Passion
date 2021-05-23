/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWLimitedGMErrorLogger, BWNodeOutput, NSDictionary, NSString;

@interface BWMotionAttachmentsNode : BWNode

{
    struct OpaqueFigSampleBufferProcessor *_sampleBufferProcessor;
    NSDictionary *_optionsDict;
    BWNodeOutput *_sourceVideoWithMotionAttachmentsOutput;
    BWNodeOutput *_offlineVISMotionDataOutput;
    NSString *_attachedMediaKeyToProcess;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    _Bool _attachedMediaStreamForcedOff;
}

@property (nonatomic, readonly) BWNodeOutput *sourceVideoWithMotionAttachmentsOutput;
@property (nonatomic, readonly) BWNodeOutput *offlineVISMotionDataOutput;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)initWithSensorIDDictionaryByPortType:(id)arg1 cameraModuleInfoByPortType:(id)arg2 tuningParameters:(id)arg3 activePortTypes:(id)arg4 horizontalSensorBinningFactor:(int)arg5 verticalSensorBinningFactor:(int)arg6 maxSupportedFrameRate:(float)arg7 motionAttachmentsMode:(int)arg8 motionAttachmentsSource:(int)arg9 motionCallbackThreadPriority:(unsigned int)arg10 provideSourceVideoWithMotionAttachmentsOutput:(_Bool)arg11 provideOfflineVISMotionDataOutput:(_Bool)arg12;
- (void)setAttachedMediaKeyToProcess:(id)arg1;
- (int)_setupSampleBufferProcessor;
- (void)_flushIfRequiredForMarkerBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_emitSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 output:(id)arg2;
- (id)attachedMediaKeyToProcess;

@end
