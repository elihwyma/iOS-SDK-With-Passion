/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedLookup.h>

@class CUICatalog;

@interface CUINamedVectorGlyph : CUINamedLookup

{
    double _pointSize;
    double _lookedupScaleFactor;
    struct CGImage *_cgImageRef;
    double _fontMatchingScaleFactor;
    CUICatalog *_catalog;
    unsigned int _generatedImage:1;
}

@property (nonatomic) double fontMatchingScaleFactor;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, readonly) double capHeight;
@property (nonatomic, readonly) struct CGRect alignmentRect;
@property (nonatomic, readonly) struct CGRect contentBounds;
@property (nonatomic, readonly) _Bool isFlippable;

- (void)dealloc;
- (double)scale;
- (struct CGImage *)image;
- (double)pointSize;
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2;
- (double)referencePointSize;
- (long long)glyphSize;
- (long long)glyphWeight;
- (id)knownAvailableVectorSizes;
- (double)_requestedPointSizeRatio;
- (id)initWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 pointSize:(double)arg4 fromCatalog:(id)arg5 usingRenditionKey:(id)arg6 fromTheme:(unsigned long long)arg7;
- (struct CGSVGDocument *)referenceGlyph;
- (_Bool)generatedImage;

@end
