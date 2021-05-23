/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageCGPDFPageContent : _UIImageContent

{
    struct CGPDFPage *_pdfPageRef;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)canProvideFullResCGImage;
- (id)initWithScale:(double)arg1;
- (_Bool)isCGPDFPage;
- (struct CGPDFPage *)CGPDFPage;
- (struct CGSize)sizeInPixels;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)initWithCGPDFPage:(struct CGPDFPage *)arg1 scale:(double)arg2;

@end
