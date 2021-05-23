/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UIKBRenderer : NSObject

{
    struct CGContext *_cachingContext;
    CDUnknownBlockType _cachingContextCompletion;
    long long _forceColorFormat;
    UIColor *_singleColor;
    int _colorCount;
    _Bool _opaque;
    _Bool _colorDetectMode;
    _Bool _disableInternalCaching;
    struct CGContext *_ctx;
    double _scale;
    long long _renderFlags;
    NSString *_cacheKey;
    UIImage *_renderedImage;
    long long _contentColorFormat;
    long long _assetIdiom;
    struct CGSize _size;
}

@property (nonatomic, readonly) struct CGContext *context;
@property (nonatomic, readonly) NSData *contextData;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) _Bool opaque;
@property (nonatomic, readonly) long long renderFlags;
@property (nonatomic, readonly) UIImage *renderedImage;
@property (nonatomic, readonly) long long contentColorFormat;
@property (nonatomic, readonly) UIColor *singleColor;
@property (retain, nonatomic) NSString *cacheKey;
@property (nonatomic) _Bool colorDetectMode;
@property (nonatomic) _Bool disableInternalCaching;
@property (nonatomic, readonly) long long assetIdiom;

+ (id)rendererWithContext:(struct CGContext *)arg1 withSize:(struct CGSize)arg2 withScale:(double)arg3 opaque:(_Bool)arg4 renderFlags:(long long)arg5 assetIdiom:(long long)arg6;
+ (struct CGContext *)imageContextWithSize:(struct CGSize)arg1 scale:(double)arg2 colorFormat:(long long)arg3 opaque:(_Bool)arg4 invert:(_Bool)arg5;
+ (void)clearInternalCaches;

- (void)dealloc;
- (id)description;
- (void)renderBackgroundTraits:(id)arg1;
- (_Bool)loadCachedImageForHashString:(id)arg1;
- (void)renderKeyContents:(id)arg1 withTraits:(id)arg2;
- (void)renderNullEffect:(id)arg1 withTraits:(id)arg2;
- (void)renderEdgeEffect:(id)arg1 withTraits:(id)arg2;
- (void)renderShadowEffect:(id)arg1 withTraits:(id)arg2;
- (void)renderDivotEffect:(id)arg1 withTraits:(id)arg2;
- (id)initWithContext:(struct CGContext *)arg1 withSize:(struct CGSize)arg2 withScale:(double)arg3 opaque:(_Bool)arg4 renderFlags:(long long)arg5 assetIdiom:(long long)arg6;
- (void)_addDetectedColor:(struct CGColor *)arg1;
- (void)detectColorsForNamedColor:(id)arg1;
- (void)detectColorsForGradient:(id)arg1;
- (void)ensureContext;
- (void)detectColorsForEffect:(id)arg1;
- (void)addPathForTraits:(id)arg1 displayRect:(struct CGRect *)arg2;
- (void)addPathForFlickGeometry:(id)arg1;
- (void)addRoundRect:(struct CGRect)arg1 radius:(double)arg2 corners:(unsigned long long)arg3;
- (void)addPathForRenderGeometry:(id)arg1;
- (void)_drawLinearGradient:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_completeCacheImageWithTraitsIfNecessary:(id)arg1;
- (void)renderBackgroundTraits:(id)arg1 allowCaching:(_Bool)arg2;
- (unsigned long long)renderKeyStringContents:(id)arg1 withTraits:(id)arg2 status:(unsigned long long)arg3;
- (unsigned long long)renderKeyImageContents:(id)arg1 withTraits:(id)arg2 status:(unsigned long long)arg3;
- (_Bool)renderKeyPathContents:(id)arg1 withTraits:(id)arg2;
- (void)_renderVariantsFromKeyContents:(id)arg1 withTraits:(id)arg2;
- (void)_drawKeyImage:(id)arg1 inRect:(struct CGRect)arg2 withStyle:(id)arg3 force1xImages:(_Bool)arg4 flipHorizontally:(_Bool)arg5;
- (_Bool)_drawSingleSymbol:(id)arg1 inRect:(struct CGRect)arg2 withStyle:(id)arg3;
- (_Bool)_drawKeyString:(id)arg1 inRect:(struct CGRect)arg2 withStyle:(id)arg3;
- (struct CGPath *)_thickShiftGlyphPath;
- (struct CGPath *)_thinShiftGlyphPath;
- (struct CGPath *)_deleteGlyphPaths;
- (void)drawPath:(struct CGPath *)arg1 weight:(double)arg2 transform:(struct CGAffineTransform)arg3 color:(struct CGColor *)arg4 fill:(_Bool)arg5;
- (void)drawShiftPath:(_Bool)arg1 weight:(double)arg2 transform:(struct CGAffineTransform)arg3 color:(struct CGColor *)arg4;
- (void)addPathForFlickPopupGeometries:(id)arg1;
- (void)addPathForSplitGeometry:(id)arg1;
- (id)pathForRenderGeometry:(id)arg1;
- (id)pathForFlickGeometry:(id)arg1;
- (id)pathForFlickPopupGeometries:(id)arg1;
- (id)pathForSplitGeometry:(id)arg1;
- (id)pathForConcaveCornerWithGeometry:(id)arg1;
- (id)pathForFlickWidth:(double)arg1 height:(double)arg2 handleLength:(double)arg3 keyMiddle:(struct CGPoint)arg4 angle:(double)arg5;
- (void)forceColorFormat:(long long)arg1;

@end
