/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionKey, CUIRenditionMetrics, CUIRenditionSliceInformation, CUIStructuredThemeStore;

__attribute__((visibility("hidden")))
@interface _CUIInternalLinkRendition : CUIThemeRendition

{
    unsigned int _nimages;
    struct CGRect _imageRect[16];
    struct CGImage *_image[16];
    struct CGImage *_unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    struct CGRect _frame;
    CUIStructuredThemeStore *_sourceProvider;
    CUIRenditionKey *_referenceKey;
    struct CGSize _originalUncroppedSize;
    struct CGRect _alphaCroppedFrame;
}

- (void)dealloc;
- (id)data;
- (_Bool)isOpaque;
- (id)properties;
- (int)pixelFormat;
- (id)metrics;
- (struct CGImage *)unslicedImage;
- (id)linkingToRendition;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (struct CGSize)originalUncroppedSize;
- (struct CGImage *)_sourceImage;
- (void)_setStructuredThemeStore:(id)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (_Bool)isTiled;
- (id)imageForSliceIndex:(long long)arg1;
- (_Bool)isScaled;
- (id)maskForSliceIndex:(long long)arg1;
- (_Bool)edgesOnly;
- (id)sliceInformation;
- (struct CGRect)alphaCroppedRect;
- (struct CGSize)unslicedSize;
- (id)_sourceRendition;
- (int)bitmapEncoding;
- (struct CGRect)_destinationFrame;
- (void)_fillOutImageSlices;
- (_Bool)isInternalLink;

@end
