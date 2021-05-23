/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICDocCamCVPixelBufferUtilities : NSObject

+ (struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg1 colorSpace:(struct CGColorSpace *)arg2;
+ (struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg1 colorSpace:(struct CGColorSpace *)arg2 copyMemory:(_Bool)arg3;
+ (struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)coreImageForPixelBuffer:(struct __CVBuffer *)arg1 colorSpace:(struct CGColorSpace *)arg2;

@end
