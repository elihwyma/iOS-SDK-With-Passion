/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, NSData;

__attribute__((visibility("hidden")))
@interface _CUIRawPixelRendition : CUIThemeRendition

{
    int _pixelFormat;
    unsigned int _nimages;
    NSData *_rawData;
    struct CGImage *_image[16];
    struct CGImage *_unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
}

- (void)dealloc;
- (int)pixelFormat;
- (id)metrics;
- (id)rawData;
- (struct CGImage *)unslicedImage;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)imageForSliceIndex:(long long)arg1;
- (_Bool)isScaled;
- (id)maskForSliceIndex:(long long)arg1;
- (id)sliceInformation;
- (struct CGSize)unslicedSize;

@end
