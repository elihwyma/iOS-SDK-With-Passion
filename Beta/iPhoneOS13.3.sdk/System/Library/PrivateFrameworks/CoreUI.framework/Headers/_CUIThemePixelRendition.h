/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, NSMutableArray, _CSIRenditionBlockData;

__attribute__((visibility("hidden")))
@interface _CUIThemePixelRendition : CUIThemeRendition

{
    unsigned int _nimages;
    struct CGImage *_image[16];
    struct CGImage *_unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    _CSIRenditionBlockData *_cachedBlockDataBGRX;
    _CSIRenditionBlockData *_cachedBlockDataRGBX;
    _CSIRenditionBlockData *_cachedBlockDataGray;
    unsigned long long _sourceRowbytes;
    NSMutableArray *_layers;
    struct CGSize _unslicedSize;
}

- (void)dealloc;
- (int)pixelFormat;
- (id)metrics;
- (id)layerReferences;
- (struct CGImage *)unslicedImage;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (_Bool)isTiled;
- (id)imageForSliceIndex:(long long)arg1;
- (_Bool)isScaled;
- (id)maskForSliceIndex:(long long)arg1;
- (_Bool)edgesOnly;
- (id)sliceInformation;
- (unsigned long long)sourceRowbytes;
- (struct CGSize)unslicedSize;
- (struct CGImage *)newImageFromCSIDataSlice:(struct _slice)arg1 ofBitmap:(struct _csibitmap *)arg2 usingColorspace:(struct CGColorSpace *)arg3;
- (id)copySharedBlockDataWithPixelFormat:(int)arg1;
- (void)setSharedBlockData:(id)arg1;

@end
