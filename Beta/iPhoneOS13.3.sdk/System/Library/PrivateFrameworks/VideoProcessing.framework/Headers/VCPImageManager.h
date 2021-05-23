/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface VCPImageManager : NSObject

{
    struct FigPhotoDecompressionSession *_decodeSession;
    struct OpaqueVTPixelTransferSession *_transferSession;
    NSObject<OS_dispatch_queue> *_decodeQueue;
}

+ (_Bool)loggingEnabled;
+ (id)sharedImageManager;
+ (_Bool)canDecodeAcceleratedUniformTypeIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)flushCache;
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer **)arg4;
- (int)convertPixelBuffer:(struct __CVBuffer **)arg1 toPixelFormat:(int)arg2;
- (int)drawImage:(struct CGImage *)arg1 withOrientation:(unsigned int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer **)arg4;
- (int)acceleratedDecodeImageData:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer **)arg4 flushCache:(_Bool)arg5;
- (int)decodeImageSource:(struct CGImageSource *)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer **)arg4;
- (id)dataForResource:(id)arg1;
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromData:(id)arg3 withUniformTypeIdentifier:(id)arg4 flushCache:(_Bool)arg5;
- (struct __CVBuffer *)imageForResource:(id)arg1 pixelFormat:(int)arg2;
- (struct __CVBuffer *)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3;
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 fromImageURL:(id)arg2 flushCache:(_Bool)arg3;
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3;

@end
