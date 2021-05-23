/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIImageRowReader : NSObject

{
    unsigned long long height;
    unsigned long long width;
    unsigned long long bpr;
    void *data;
    short red;
    short green;
    short blue;
    short alpha;
    struct CGColorSpace *cs;
}

+ (id)forImage:(id)arg1 usingContext:(id)arg2;
+ (id)fromImage:(struct CGImage *)arg1;
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2 colorspace:(struct CGColorSpace *)arg3;
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2 colorspace:(struct CGColorSpace *)arg3 usingContext:(id)arg4;
+ (id)forImage:(id)arg1 usingContext:(id)arg2 colorspace:(struct CGColorSpace *)arg3;
+ (id)fromImageFile:(id)arg1;
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2;
+ (id)withDictionary:(id)arg1;

- (id)init;
- (void)dealloc;
- (unsigned long long)width;
- (unsigned long long)height;
- (short)red;
- (short)green;
- (short)blue;
- (short)alpha;
- (void)_dumpImage:(id)arg1 colorspace:(struct CGColorSpace *)arg2;
- (const char *)rowAtIndex:(unsigned int)arg1;
- (unsigned int)bytesPerPixel;
- (void)dumpImage:(id)arg1;
- (void)dumpImageAsDeviceRGB:(id)arg1;
- (void)dumpImageAsDict:(id)arg1;

@end
