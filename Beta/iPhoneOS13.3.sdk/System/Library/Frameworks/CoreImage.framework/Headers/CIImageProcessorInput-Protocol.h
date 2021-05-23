/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@protocol MTLTexture;

@protocol CIImageProcessorInput

@property (nonatomic, readonly) struct CGRect region;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) const void *baseAddress;
@property (nonatomic, readonly) struct __IOSurface *surface;
@property (nonatomic, readonly) struct __CVBuffer *pixelBuffer;
@property (nonatomic, readonly) id <MTLTexture> metalTexture;

@end
