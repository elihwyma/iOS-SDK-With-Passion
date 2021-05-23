/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVVideoComposition, AVVideoCompositionRenderContextInternal;

@interface AVVideoCompositionRenderContext : NSObject

{
    AVVideoCompositionRenderContextInternal *_internal;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) struct CGAffineTransform renderTransform;
@property (nonatomic, readonly) float renderScale;
@property (nonatomic, readonly) CDStruct_43f4b5b8 pixelAspectRatio;
@property (nonatomic, readonly) CDStruct_1edcc8d7 edgeWidths;
@property (nonatomic, readonly) _Bool highQualityRendering;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;

+ (id)renderContextPropertiesFromFigCompositor:(struct OpaqueFigVideoCompositor *)arg1;

- (void)dealloc;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (void)_willDeallocOrFinalize;
- (struct __CVBuffer *)newPixelBuffer;
- (id)initWithFigVideoCompositor:(struct OpaqueFigVideoCompositor *)arg1 clientRequiredPixelBufferAttributes:(id)arg2 videoComposition:(id)arg3 pixelBufferPool:(struct __CVPixelBufferPool *)arg4;
- (_Bool)hasEqualPropertiesToFigVideoCompositor:(struct OpaqueFigVideoCompositor *)arg1;
- (_Bool)isBufferYCbCr:(struct __CVBuffer *)arg1;

@end
