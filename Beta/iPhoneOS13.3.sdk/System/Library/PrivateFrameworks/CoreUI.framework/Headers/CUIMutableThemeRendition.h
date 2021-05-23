/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation;

__attribute__((visibility("hidden")))
@interface CUIMutableThemeRendition : CUIThemeRendition

{
    struct _renditionkeytoken *_renditionKey;
    struct CGImage *_image;
    CUIRenditionSliceInformation *_sliceInformation;
    CUIRenditionMetrics *_renditionMetrics;
}

- (void)dealloc;
- (const struct _renditionkeytoken *)key;
- (void)setName:(id)arg1;
- (id)metrics;
- (struct CGImage *)unslicedImage;
- (id)initWithCGImage:(struct CGImage *)arg1 withDescription:(id)arg2 forKey:(const struct _renditionkeytoken *)arg3;
- (id)sliceInformation;

@end
