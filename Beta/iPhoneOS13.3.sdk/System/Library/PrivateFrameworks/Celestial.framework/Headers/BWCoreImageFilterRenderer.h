/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class CIContext, NSString;

@protocol MTLCommandQueue, OS_dispatch_queue;

@interface BWCoreImageFilterRenderer : NSObject

{
    _Bool _usingDepth;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CIContext *_renderingQueueContext;
    id <MTLCommandQueue> _metalCommandQueue;
}

@property (nonatomic, readonly) _Bool usingDepth;
@property (retain, nonatomic) CIContext *renderingQueueContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) _Bool supportsAnimation;
@property (nonatomic, readonly) _Bool adjustsMetadata;

+ (void)initialize;
+ (void)prewarm;

- (id)init;
- (void)dealloc;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 originalPixelBuffer:(struct __CVBuffer *)arg4 processedPixelBuffer:(struct __CVBuffer *)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initForRenderingWithDepth:(_Bool)arg1 metalCommandQueue:(id)arg2;
- (void)_renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 originalPixelBuffer:(struct __CVBuffer *)arg4 processedPixelBuffer:(struct __CVBuffer *)arg5 prewarming:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)_visionKitFaceObservationToCoreImageDictionary:(id)arg1 orientation:(id)arg2;
- (id)coreImageArrayRepresentationForRegion:(id)arg1;

@end
