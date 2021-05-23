/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface _CUIThemeSVGRendition : CUIThemeRendition

{
    struct CGSVGDocument *_svgDocument;
    NSData *_fileData;
    unsigned int _standardPointSize;
    NSArray *_vectorSizes;
    double _baseline;
    double _capline;
    CDStruct_3c058996 _alignmentRectInsets;
    _Bool _isAlignmentRect;
    struct CGSize _canvasSize;
    struct os_unfair_lock_s _lock;
}

- (void)dealloc;
- (int)pixelFormat;
- (id)metrics;
- (struct CGSVGDocument *)svgDocument;
- (id)rawData;
- (struct CGSize)canvasSize;
- (double)vectorGlyphBaseline;
- (double)vectorGlyphCapLine;
- (double)vectorGlyphReferencePointSize;
- (id)vectorGlyphAvailableSizes;
- (CDStruct_3c058996)vectorGlyphAlignmentRectInsets;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (struct CGSVGDocument *)_nts_svgDocument;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader *)arg1;

@end
