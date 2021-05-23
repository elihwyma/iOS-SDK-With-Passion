/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

__attribute__((visibility("hidden")))
@interface _CUIThemePDFRendition : CUIThemeRendition

{
    struct CGPDFDocument *_pdfDocument;
}

- (void)dealloc;
- (int)pixelFormat;
- (id)metrics;
- (struct CGPDFDocument *)pdfDocument;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (struct CGImage *)createImageFromPDFRenditionWithScale:(double)arg1;

@end
