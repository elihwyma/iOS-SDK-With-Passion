/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface MFHardwareJPEGScaler : NSObject

{
    struct __IOSurface *_ioSurfaceRef;
    NSData *_imageData;
    struct __CFDictionary *_imageProperties;
    _Bool _canHardwareScaleImage;
}

- (void)dealloc;
- (id)initWithImageData:(id)arg1 imageSource:(struct CGImageSource *)arg2;
- (_Bool)scaleImageToFitLargestDimension:(id)arg1 dataConsumer:(id)arg2;
- (_Bool)_isJPEGImage:(struct CGImageSource *)arg1;
- (_Bool)_decodeImageToIOSurface;

@end
