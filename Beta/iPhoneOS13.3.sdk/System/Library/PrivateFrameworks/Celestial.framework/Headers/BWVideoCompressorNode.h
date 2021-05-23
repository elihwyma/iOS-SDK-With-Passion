/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWLimitedGMErrorLogger, NSDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface BWVideoCompressorNode : BWNode

{
    NSDictionary *_compressionSettings;
    _Bool _nextFrameEncodeAsKeyFrame;
    _Bool _prioritizeEncodingSpeedOverQuality;
    int _pipelineTraceID;
    struct OpaqueVTCompressionSession *_compressionSession;
    _Bool _didPrepareToEncode;
    _Bool _sourceIsHDResolution;
    unsigned int _sourcePixelFormatType;
    NSObject<OS_dispatch_queue> *_emitterQueue;
    _Bool _emittedFirstVideoBuffer;
    NSObject<OS_dispatch_queue> *_thermalAndPowerNotificationQueue;
    double _bFrameEncodingAllowedAtHigherPressureTimeLimit;
    double _bFrameEncodingAllowedAtHigherPressureStopTime;
    int _nonBFrameAverageBitRate;
    int _thermalPressureNotificationToken;
    int _thermalPressureLevel;
    int _powerPressureNotificationToken;
    int _powerPressureLevel;
    _Bool _bFrameEncodingRequested;
    _Bool _bFrameEncodingAllowed;
    _Bool _propagateStabilizedFacesToAVE;
    _Bool _overCaptureEnabled;
    _Bool _shouldAttachDebugSEI;
    _Bool _shouldPassSerializedDepthImageBuffers;
    _Bool _flushRequestReceived;
    float _maxVideoFrameRate;
    _Bool _attachThumbnailSourcePixelBuffer;
    struct __CVBuffer *_thumbnailSourcePixelBuffer;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
}

+ (void)initialize;
+ (id)_formatRequirementsForCompressionSettings:(id)arg1 maxVideoFrameRate:(float)arg2 retainedBufferCountHint:(int *)arg3;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)setPipelineTraceID:(int)arg1;
- (void)setCompressionSettings:(id)arg1;
- (void)prepareForVideoCompression;
- (void)makeCurrentConfigurationLive;
- (id)initWithCompressionSettings:(id)arg1 overCaptureEnabled:(_Bool)arg2 maxVideoFrameRate:(float)arg3;
- (void)setPrioritizeEncodingSpeedOverQuality:(_Bool)arg1;
- (int)pipelineTraceID;
- (void)_cleanCompressor;
- (void)_registerForThermalAndPowerNotifications;
- (void)_validateBFrameEncodingAbility;
- (struct OpaqueVTCompressionSession *)_createEncoderSessionWithWidth:(int)arg1 height:(int)arg2 inputPixelFormat:(unsigned int)arg3 isHDResolution:(unsigned char)arg4 videoCodec:(unsigned int)arg5 encoderSpecification:(id)arg6 compressionProperties:(id)arg7 compressorNodeRef:(void *)arg8;
- (void)_updateThermalPressureLevel;
- (void)_updatePowerPressureLevel;
- (int)_setEncoderCompressionPropertiesWithCompressionSession:(struct OpaqueVTCompressionSession *)arg1 compressionProperties:(id)arg2 sourcePixelType:(unsigned int)arg3 isHDResolution:(unsigned char)arg4;
- (void)insertKeyFrame;
- (id)compressionSettings;
- (_Bool)prioritizeEncodingSpeedOverQuality;

@end
