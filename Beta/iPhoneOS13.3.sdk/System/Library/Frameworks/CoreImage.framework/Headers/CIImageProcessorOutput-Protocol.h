/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@protocol MTLCommandBuffer, MTLTexture;

@protocol CIImageProcessorOutput

@property (nonatomic, readonly) struct CGRect region;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) void *baseAddress;
@property (nonatomic, readonly) struct __IOSurface *surface;
@property (nonatomic, readonly) struct __CVBuffer *pixelBuffer;
@property (nonatomic, readonly) id <MTLTexture> metalTexture;
@property (nonatomic, readonly) id <MTLCommandBuffer> metalCommandBuffer;

@end
