/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <QuartzCore/CALayer.h>

@class PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFPageIconLayer : CALayer

{
    PDFDocument *_document;
    struct CGSize _frameSize;
    int _pageIndex;
    _Bool _needsUpdate;
}

- (id)initWithSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsUpdate;
- (int)pageIndex;
- (id)document;
- (void)updateAsPageIndex:(int)arg1 forDocument:(id)arg2;

@end
