/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CIImage, CUINamedVectorGlyph;

__attribute__((visibility("hidden")))
@interface _UIImageContent : NSObject

{
    double _scale;
    _Bool _isDecompressing;
    struct CGSize _sizeInPixels;
}

@property (nonatomic, readonly) CUINamedVectorGlyph *vectorGlyph;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize sizeInPixels;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) struct CGImage *CGImage;
@property (nonatomic, readonly) CIImage *CIImage;
@property (nonatomic, readonly) struct __IOSurface *IOSurface;
@property (nonatomic, readonly) struct CGPDFPage *CGPDFPage;
@property (nonatomic, readonly) struct CGSVGDocument *CGSVGDocument;
@property (nonatomic, readonly) double vectorScale;
@property (nonatomic) _Bool isDecompressing;

+ (_Bool)content:(id)arg1 isEqualToContent:(id)arg2;
+ (id)empty;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)debugQuickLookObject;
- (_Bool)canProvideFullResCGImage;
- (id)initWithScale:(double)arg1;
- (_Bool)isCGPDFPage;
- (_Bool)isCGSVGDocument;
- (id)renditionWithSize:(struct CGSize)arg1 scale:(double)arg2 applyingEffect:(id)arg3;
- (struct CGAffineTransform)_transformForCGContextWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (_Bool)hasCGImage;
- (_Bool)_canProvideCGImageDirectly;
- (struct CGImage *)_CGImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (_Bool)canProvideCGImage;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (_Bool)_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 effect:(id)arg3;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (_Bool)isCGImageOnly;
- (_Bool)isCGImage;
- (_Bool)isCIImage;
- (_Bool)isIOSurface;
- (struct CGSize)CGPDFPageSize;
- (struct CGSize)CGSVGDocumentSize;
- (_Bool)isVectorGlyph;
- (id)contentWithCGImage:(struct CGImage *)arg1;
- (id)renditionApplyingEffect:(id)arg1;

@end
