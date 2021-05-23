/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxBitmapImage : NSObject

{
    struct FxBitmapImagePriv *_priv;
}

+ (id)bitmapWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;
+ (id)bitmapWithSize:(struct CGSize)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3;

- (void)dealloc;
- (void *)bytes;
- (id)data;
- (struct CGSize)size;
- (unsigned long long)bytesPerRow;
- (struct CGColorSpace *)colorSpace;
- (int)pixelFormat;
- (struct CGImage *)cgImage;
- (struct CGContext *)cgContext;
- (id)initWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;

@end
