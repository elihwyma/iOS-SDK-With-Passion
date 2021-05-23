/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigColorCubeMetalFilter, NSBundle, NSString;

@protocol MTLCommandQueue;

@interface BWMetalColorCubeRenderer : NSObject

{
    NSBundle *_bundle;
    FigColorCubeMetalFilter *_filter;
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
+ (id)bundle;

- (void)dealloc;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 originalPixelBuffer:(struct __CVBuffer *)arg4 processedPixelBuffer:(struct __CVBuffer *)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithVideoFormat:(id)arg1 metalCommandQueue:(id)arg2;
- (int)_loadAndConfigureFilterBundle;

@end
