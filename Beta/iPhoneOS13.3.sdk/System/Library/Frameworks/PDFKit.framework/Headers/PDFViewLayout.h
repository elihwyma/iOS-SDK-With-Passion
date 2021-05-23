/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFDocument, PDFViewLayoutPrivate;

@interface PDFViewLayout : NSObject

{
    PDFViewLayoutPrivate *_private;
}

@property (weak, nonatomic) id delegate;
@property (weak, nonatomic) PDFDocument *document;

- (id)init;
- (void)dealloc;
- (struct CGRect)boundsForPage:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toPage:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromPage:(id)arg2;
- (struct CGSize)contentSizeWithCurrentPage:(id)arg1;
- (long long)functionalDisplayMode;
- (id)facingPageForPage:(id)arg1;
- (void)invalidateInternalDocumentGeometry;
- (void)generateInternalDocumentGeometry;
- (id)pageNearestPoint:(struct CGPoint)arg1 currentPage:(id)arg2;
- (struct _NSRange)visiblePageRangeInBounds:(struct CGRect)arg1 currentPage:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toPage:(id)arg2 forScaleFactor:(double)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3;
- (struct CGRect)normalizedPageBounds:(id)arg1;
- (id)visiblePagesInBounds:(struct CGRect)arg1 currentPage:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3;

@end
