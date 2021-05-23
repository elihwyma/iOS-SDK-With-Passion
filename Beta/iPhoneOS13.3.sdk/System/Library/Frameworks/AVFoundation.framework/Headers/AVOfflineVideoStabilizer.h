/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSMutableArray, NSMutableDictionary, NSSet;

@interface AVOfflineVideoStabilizer : NSObject

{
    CDStruct_1b6d18a9 _targetFrameDuration;
    int _metadataPrimingCount;
    float _lookAheadTime;
    AVWeakReference *_dataProviderWeakReference;
    struct __CVPixelBufferPool *_pixelBufferPool;
    _Bool _clientMarkedEndOfVideoData;
    long long _videoOutputFrameNumber;
    struct opaqueCMFormatDescription *_cachedVideoFormatDescription;
    NSMutableDictionary *_cachedInputBufferAttributes;
    NSMutableArray *_outputSampleBuffers;
    _Bool _clientMarkedEndOfMetadata;
    long long _metadataOutputFrameNumber;
    NSMutableArray *_futureFrameMetadataDicts;
    NSSet *_requiredMetadataKeys;
    NSSet *_optionalMetadataKeys;
    struct OpaqueFigSampleBufferProcessor *_gvsProcessor;
    _Bool _stabilizationEnabled;
    _Bool _isFirstFrame;
}

@property (nonatomic, readonly) NSMutableArray *outputSampleBuffers;
@property (nonatomic, readonly) int preferredSourcePixelBufferPrimingFrameCount;
@property (nonatomic, readonly) int preferredSourceStabilizationMetadataPrimingCount;

+ (void)initialize;
+ (id)offlineVideoStabilizerWithTargetFrameDuration:(CDStruct_1b6d18a9)arg1 dataProvider:(id)arg2 destinationBufferPool:(struct __CVPixelBufferPool *)arg3 stabilizationEnabled:(_Bool)arg4;

- (void)dealloc;
- (id)initWithTargetFrameDuration:(CDStruct_1b6d18a9)arg1 dataProvider:(id)arg2 destinationBufferPool:(struct __CVPixelBufferPool *)arg3 stabilizationEnabled:(_Bool)arg4;
- (void)_teardownVISProcessor;
- (struct opaqueCMSampleBuffer *)_copyStabilizedSampleBuffer:(id *)arg1;
- (int)_validateStabilizationMetadata:(id)arg1 withSampleTime:(CDStruct_1b6d18a9)arg2 isEndOfData:(_Bool *)arg3;
- (int)_validateSourcePixelBuffer:(struct __CVBuffer *)arg1 withSampleTime:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3 isEndOfData:(_Bool *)arg4;
- (struct opaqueCMSampleBuffer *)_createSampleBufferWithPixelBuffer:(struct __CVBuffer *)arg1 sampleTime:(CDStruct_1b6d18a9)arg2 futureMetadata:(id)arg3 status:(int *)arg4;
- (int)_setupGVSProcessor;
- (unsigned long long)_extendedRowsOfOutputBuffer;
- (struct opaqueCMSampleBuffer *)copyStabilizedSampleBuffer:(id *)arg1;

@end
