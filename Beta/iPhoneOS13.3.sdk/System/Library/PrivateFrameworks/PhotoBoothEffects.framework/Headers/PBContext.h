/*
 Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import <NSObject.h>

@interface PBContext : NSObject

@property (nonatomic) struct _CAImageQueue *outputImageQueue;
@property (retain, nonatomic) struct __CVPixelBufferPool *smallPool;
@property (retain, nonatomic) struct __CVPixelBufferPool *largePool;

+ (id)openGLContext;
+ (id)openGLContext:(id)arg1;
+ (id)openCLContext;

- (id)init;
- (struct __CVBuffer *)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 mirrored:(_Bool)arg3;
- (void)applyFilter:(id)arg1 toSurface:(struct __IOSurface *)arg2 mirrored:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)applyFilter:(id)arg1 toSurface:(struct __IOSurface *)arg2 mirrored:(_Bool)arg3 surfaceResultHandler:(CDUnknownBlockType)arg4;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 mirrored:(_Bool)arg3;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 mirrored:(_Bool)arg3;
- (struct __CVBuffer *)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2;
- (void)preloadFilter:(id)arg1;

@end
