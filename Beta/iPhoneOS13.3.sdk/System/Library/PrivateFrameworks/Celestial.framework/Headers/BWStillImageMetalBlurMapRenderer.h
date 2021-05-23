/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWPixelBufferPool, FigSDOFBlurMapRendering, NSDictionary, NSString;

@protocol MTLCommandQueue;

@interface BWStillImageMetalBlurMapRenderer : NSObject

{
    NSDictionary *_sensorIDDictionary;
    FigSDOFBlurMapRendering *_sdofBlurMapRenderer;
    BWPixelBufferPool *_blurMapPixelBufferPool;
    CDStruct_79c71658 _imageDimensions;
    CDStruct_79c71658 _depthDataMapDimensions;
    id <MTLCommandQueue> _mtlCommandQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) _Bool supportsAnimation;
@property (nonatomic, readonly) _Bool adjustsMetadata;

+ (void)initialize;

- (void)dealloc;
- (id)bundleOptionsDictionary;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 originalPixelBuffer:(struct __CVBuffer *)arg4 processedPixelBuffer:(struct __CVBuffer *)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithSensorIDDictionary:(id)arg1 imageDimensions:(CDStruct_79c71658)arg2 depthDataMapDimensions:(CDStruct_79c71658)arg3 metalCommandQueue:(id)arg4;
- (int)_loadAndConfigureSDOFBlurMapRenderer;
- (int)_allocateBlurMapPixelBufferPoolForBuffersOfWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;

@end
