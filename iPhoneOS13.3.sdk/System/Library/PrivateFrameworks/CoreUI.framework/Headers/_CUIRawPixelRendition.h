//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, NSData;

__attribute__((visibility("hidden")))
@interface _CUIRawPixelRendition : CUIThemeRendition
{
    int _pixelFormat;
    unsigned int _nimages;
    NSData *_rawData;
    CGImage _image[16];
    CGImage _unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
}

- (BOOL)isScaled;
- (id)metrics;
- (id)sliceInformation;
- (id)maskForSliceIndex:(long long)arg1;
- (id)imageForSliceIndex:(long long)arg1;
- (CGSize)unslicedSize;
- (id)rawData;
- (CGImage )unslicedImage;
- (int)pixelFormat;
- (id)_initWithCSIHeader:(const struct _csiheader )arg1;
- (void)dealloc;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken )arg2 artworkStatus:(long long)arg3;

@end

