/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWPixelBufferPool;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface BWRenderListProcessor : NSObject

{
    NSObject<OS_dispatch_queue> *_configurationMutexQueue;
    _Bool _configurationQueueAlwaysEmitsOriginalResult;
    BWPixelBufferPool *_renderingPool;
    NSObject<OS_dispatch_group> *_renderingGroup;
    struct opaqueCMFormatDescription *_mostRecentFormatDescription;
}

@property (nonatomic, readonly) BWPixelBufferPool *renderingPool;
@property (nonatomic) _Bool alwaysEmitsOriginalResult;

+ (void)initialize;

- (void)dealloc;
- (void)_processRenderList:(id)arg1 parameterListProvider:(id)arg2 inputPixelBuffer:(struct __CVBuffer *)arg3 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)_continueRenderingUsingRenderList:(id)arg1 result:(unsigned long long)arg2 resultError:(id)arg3 fromRendererNode:(struct BWRenderListRendererNode *)arg4 parameterNode:(struct BWRenderListParameterNode *)arg5 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg6 inputPixelBuffer:(struct __CVBuffer *)arg7 finalResultHandler:(CDUnknownBlockType)arg8;
- (void)_finishRenderingUsingRenderList:(id)arg1 result:(unsigned long long)arg2 resultError:(id)arg3 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg4 processedPixelBuffer:(struct __CVBuffer *)arg5 finalResultHandler:(CDUnknownBlockType)arg6;
- (void)_emitProcessedSampleBufferFromRenderList:(id)arg1 result:(unsigned long long)arg2 resultError:(id)arg3 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg4 processedPixelBuffer:(struct __CVBuffer *)arg5 finalResultHandler:(CDUnknownBlockType)arg6;
- (id)initWithRenderingPool:(id)arg1;
- (void)processRenderList:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)processRenderList:(id)arg1 withParameters:(id)arg2 inputPixelBuffer:(struct __CVBuffer *)arg3 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)waitForAllProcessingToComplete;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 usingRenderList:(id)arg2;

@end
