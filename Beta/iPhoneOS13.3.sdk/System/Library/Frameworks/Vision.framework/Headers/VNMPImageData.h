/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNMPImageData : NSObject

{
    _Bool _freeImageInDealloc;
    struct vImage_Buffer *_image;
    struct __CVBuffer *_imageCVPixelBuffer;
    NSString *_imageFilePath;
    NSString *_externalImageId;
    long long _exifTimestamp;
}

@property (readonly) struct vImage_Buffer *image;
@property (readonly) struct __CVBuffer *imageCVPixelBuffer;
@property (retain) NSString *imageFilePath;
@property _Bool freeImageInDealloc;
@property (readonly) NSString *externalImageId;
@property (readonly) long long exifTimestamp;

- (void)dealloc;
- (id)initWithVImage:(struct vImage_Buffer *)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id *)arg4;
- (id)initWithVImage:(struct vImage_Buffer *)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id *)arg4;
- (id)initWithCVPixelBufferImage:(struct __CVBuffer *)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id *)arg4;
- (id)initWithCVPixelBufferImage:(struct __CVBuffer *)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id *)arg4;

@end
