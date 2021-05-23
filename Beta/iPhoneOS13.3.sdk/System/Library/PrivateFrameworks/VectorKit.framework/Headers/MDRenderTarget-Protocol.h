/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/Swift-Protocol.h>

@protocol GGLRenderQueueSource;

@protocol MDRenderTarget <Swift>

@property (nonatomic) struct CGSize size;
@property (nonatomic) double contentScale;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) id <GGLRenderQueueSource> renderSource;
@property (nonatomic, readonly) _Bool multiSample;
@property (nonatomic, readonly) const struct RenderTargetFormat *format;
@property (nonatomic, readonly) struct Renderer *renderer;
@property (nonatomic, readonly) _Bool shouldRasterize;
@property (nonatomic, readonly) struct CGSize sizeInPixels;
@property (nonatomic, readonly) struct RenderTarget *finalRenderTarget;
@property (nonatomic, readonly) float averageFPS;

- (unsigned short)bitmapData;
- (unsigned short)destroyRenderTarget;
- (unsigned short)createRenderTarget;
- (unsigned short)hasRenderTarget;
- (unsigned short)renderWithTimestamp:completion: /* Error: Ran out of types for this method. */;

@end
