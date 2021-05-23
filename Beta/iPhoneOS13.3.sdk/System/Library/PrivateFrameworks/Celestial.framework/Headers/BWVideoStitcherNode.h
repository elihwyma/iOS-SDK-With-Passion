/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class FigStreamingStereoStitchingProcessor, NSDictionary, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_semaphore;

@interface BWVideoStitcherNode : BWNode

{
    NSDictionary *_sensorIDDictionaryByPortType;
    FigStreamingStereoStitchingProcessor *_stereoStitchingProcessor;
    NSMutableDictionary *_stereoStitchingOptions;
    struct opaqueCMFormatDescription *_outputFormatDescription;
    NSObject<OS_dispatch_semaphore> *_emitSampleBufferSemaphore;
    Class _stitchingOutputClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)_setupAttachedMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2;
- (void)_setupDepthMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2;
- (int)_loadAndConfigureVideoStitchingBundle;
- (id)_processorOptions;
- (id)initWithSensorIDDictionaryByPortType:(id)arg1 expectDepth:(_Bool)arg2;

@end
