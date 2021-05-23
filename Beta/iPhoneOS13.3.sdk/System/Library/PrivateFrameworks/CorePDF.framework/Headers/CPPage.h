/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPChunk.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPPage : CPChunk

{
    int pageNumber;
    struct CGRect pageCropBox;
    _Bool hasZones;
    _Bool hasTextLines;
    _Bool isDirty;
    _Bool isStartOfSection;
    long long maxLayoutZOrder;
    CPChunk *background;
    float complexity;
    int rotation;
    NSMutableArray *shapesOnPage;
    NSMutableArray *imagesOnPage;
    NSMutableArray *graphicsOnPage;
    NSMutableArray *columnsOnPage;
    struct CPPDFContext *pdfContext;
    _Bool contextOwner;
    struct CGPDFPage *pdfPage;
    NSMutableArray *textLinesOnPage;
    void *_layout;
    id hitTest;
    _Bool reconstructed;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } mutex;
}

+ (void)sortByReadingOrder:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (id)parent;
- (void)addImage:(id)arg1;
- (id)background;
- (int)rotation;
- (void)setRotation:(int)arg1;
- (struct CGPDFLayout *)layout;
- (id)children;
- (void)setBackground:(id)arg1;
- (int)pageNumber;
- (void)addColumns:(id)arg1;
- (struct CGPDFPage *)pdfPage;
- (id)initWithPDFPage:(struct CGPDFPage *)arg1;
- (void)setPageCropBox:(struct CGRect)arg1;
- (void)setPDFContext:(struct CPPDFContext *)arg1;
- (id)bodyZone;
- (void)addShape:(id)arg1;
- (id)graphicsOnPage;
- (void)layDownObjectsOnPage;
- (void)sortByReadingOrder;
- (struct CGRect)pageCropBox;
- (void)accept:(id)arg1;
- (void)dispose;
- (id)imagesOnPage;
- (id)shapesOnPage;
- (unsigned int)traverse:(id)arg1 ordinal:(unsigned int)arg2;
- (unsigned int)setReadingOrder:(id)arg1 from:(unsigned int)arg2;
- (unsigned int)setGraphicPositions:(id)arg1 from:(unsigned int)arg2;
- (unsigned int)setPositionsOf:(id)arg1 from:(unsigned int)arg2;
- (unsigned int)setCellPositionsOf:(id)arg1 from:(unsigned int)arg2;
- (void)reconstruct;
- (struct CPPDFContext *)PDFContext;
- (float)complexity;
- (void)setComplexity:(float)arg1;
- (void)setPageNumber:(int)arg1;
- (void)setHasZones:(_Bool)arg1;
- (_Bool)hasZones;
- (_Bool)hasTextLines;
- (void)setHasTextLines:(_Bool)arg1;
- (_Bool)isStartOfSection;
- (void)setIsStartOfSection:(_Bool)arg1;
- (void)restoreBackGroundObjectToPage;
- (void)layDownObjectsOnPageOld;
- (id)textLinesOnPage;
- (id)columnsOnPage;
- (id)hitTest;
- (_Bool)populatePDFLayout:(struct CGPDFLayout *)arg1;
- (struct CPPDFClipBuffer *)clipBuffer;

@end
