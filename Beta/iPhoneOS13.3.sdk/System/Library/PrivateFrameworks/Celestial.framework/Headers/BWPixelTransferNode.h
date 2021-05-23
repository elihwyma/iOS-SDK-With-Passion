/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWLimitedGMErrorLogger, BWPixelBufferPool, NSObject, NSString;

@protocol OS_dispatch_semaphore;

@interface BWPixelTransferNode : BWNode

{
    int _cropMode;
    int _liveCropMode;
    struct CGRect _inputCropRect;
    struct CGRect _liveInputCropRect;
    _Bool _haveLiveInputCropRect;
    _Bool _passesBuffersThroughWhenPossible;
    _Bool _livePassesBuffersThroughWhenPossible;
    _Bool _appliesUprightExifOrientationTransformToInput;
    _Bool _liveAppliesUprightExifOrientationTransformToInput;
    int _rotationDegrees;
    int _liveRotationDegrees;
    _Bool _flipHorizontal;
    _Bool _liveFlipHorizontal;
    _Bool _flipVertical;
    _Bool _liveFlipVertical;
    _Bool _liveZeroFillBuffers;
    _Bool _lowSpeed;
    _Bool _liveLowSpeed;
    _Bool _updatesSampleBufferMetadataForIrisVIS;
    _Bool _liveUpdatesSampleBufferMetadataForIrisVIS;
    unsigned long long _outputWidth;
    unsigned long long _outputHeight;
    unsigned int _outputPixelFormat;
    int _outputColorSpaceProperties;
    CDStruct_79c71658 _validOutputDimensions;
    CDStruct_79c71658 _liveValidOutputDimensions;
    struct OpaqueVTImageRotationSession *_rotationSession;
    int _rotationSessionRotationDegrees;
    _Bool _rotationSessionFlipHorizontal;
    _Bool _rotationSessionFlipVertical;
    _Bool _rotationSessionZeroFillBuffers;
    _Bool _rotationSessionLowSpeed;
    int _rotationSessionColorSpaceProperties;
    int _lastInputUprightExifOrientation;
    struct OpaqueVTPixelTransferSession *_transferSession;
    BWPixelBufferPool *_intermediateBufferPool;
    CDStruct_79c71658 _intermediatePoolDimensions;
    struct opaqueCMFormatDescription *_outputFormatDescription;
    _Bool _makeCurrentConfigurationLiveOnNextRenderCallback;
    NSObject<OS_dispatch_semaphore> *_emitSampleBufferSemaphore;
    _Bool _packed10BitPixelFormatSupported;
    _Bool _htpcCompressionSupported;
    _Bool _expectsMarkerBuffers;
    _Bool _liveExpectsMarkerBuffers;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)nodeType;
- (void)setOutputWidth:(unsigned long long)arg1;
- (void)setOutputHeight:(unsigned long long)arg1;
- (unsigned long long)outputWidth;
- (unsigned long long)outputHeight;
- (struct CGRect)inputCropRect;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)setPassesBuffersThroughWhenPossible:(_Bool)arg1;
- (int)outputColorSpaceProperties;
- (unsigned int)outputPixelFormat;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (void)makeCurrentConfigurationLive;
- (_Bool)hasNonLiveConfigurationChanges;
- (void)_updateOutputRequirements;
- (_Bool)_zeroFillBuffers;
- (void)_makeCurrentConfigurationLive;
- (_Bool)_emitIfMarkerBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_updateLiveRotationAndFlipsToApplyUprightExifOrientation:(int)arg1;
- (CDStruct_79c71658)_intermediateBufferDimensionsForInputDimensions:(CDStruct_79c71658)arg1 outputDimensions:(CDStruct_79c71658)arg2;
- (int)_ensureIntermediatePoolWithDimensions:(CDStruct_79c71658)arg1;
- (void)_ensureTransferSession;
- (void)_ensureRotationSession;
- (void)_updateMetadataForOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 destinationRect:(struct CGRect)arg2;
- (void)_updateUprightExifOrientationOnSampleBufferIfNeeded:(struct opaqueCMSampleBuffer *)arg1;
- (void)_updatePrimaryCaptureRect:(struct opaqueCMSampleBuffer *)arg1 inputDimensions:(CDStruct_79c71658)arg2;
- (void)_updateCameraIntrinsicsMatrixOnSampleBufferIfNeeded:(struct opaqueCMSampleBuffer *)arg1 inputCropRect:(struct CGRect)arg2;
- (id)_supportedOutputPixelFormatsInPreferredOrder;
- (void)setCropMode:(int)arg1;
- (int)cropMode;
- (void)setInputCropRect:(struct CGRect)arg1;
- (void)setUpdatesSampleBufferMetadataForIrisVIS:(_Bool)arg1;
- (_Bool)updatesSampleBufferMetadataForIrisVIS;
- (_Bool)passesBuffersThroughWhenPossible;
- (void)setOutputColorSpaceProperties:(int)arg1;
- (void)setValidOutputDimensions:(CDStruct_79c71658)arg1;
- (CDStruct_79c71658)validOutputDimensions;
- (void)setAppliesUprightExifOrientationTransformToInput:(_Bool)arg1;
- (_Bool)appliesUprightExifOrientationTransformToInput;
- (void)setRotationDegrees:(int)arg1;
- (int)rotationDegrees;
- (void)setFlipHorizontal:(_Bool)arg1;
- (_Bool)flipHorizontal;
- (void)setFlipVertical:(_Bool)arg1;
- (_Bool)flipVertical;
- (void)setLowSpeed:(_Bool)arg1;
- (_Bool)lowSpeed;
- (void)setPacked10BitPixelFormatSupported:(_Bool)arg1;
- (_Bool)packed10BitPixelFormatSupported;
- (void)setHtpcCompressionSupported:(_Bool)arg1;
- (_Bool)htpcCompressionSupported;
- (void)setExpectsMarkerBuffers:(_Bool)arg1;
- (_Bool)expectsMarkerBuffers;

@end
