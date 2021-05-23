/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSString, PDFSelectionPrivate, UIColor;

@interface PDFSelection : NSObject

{
    PDFSelectionPrivate *_private;
}

@property (nonatomic, readonly) NSArray *pages;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSAttributedString *attributedString;

+ (id)defaultActiveColor;
+ (id)defaultInactiveColor;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (long long)compare:(id)arg1;
- (id)webArchive;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (id)initWithPage:(id)arg1;
- (void)extendSelectionAtStart:(long long)arg1;
- (void)extendSelectionAtEnd:(long long)arg1;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1 onPage:(id)arg2;
- (const struct __CFArray *)cgSelections;
- (void)addSelection:(id)arg1;
- (unsigned long long)numberOfTextRangesOnPage:(id)arg1;
- (struct CGRect)firstSpanBoundsForPage:(id)arg1;
- (struct CGRect)boundsForPage:(id)arg1;
- (id)selectionsByLine;
- (_Bool)isStandaloneGraphic;
- (id)firstPage;
- (id)asDestination;
- (id)lastPage;
- (unsigned long long)pdfKitIndexOfFirstCharacterOnPage:(id)arg1;
- (unsigned long long)pdfKitIndexOfLastCharacterOnPage:(id)arg1;
- (void)addSelectionNoNormalize:(id)arg1;
- (void)addSelectionCore:(id)arg1 normalize:(_Bool)arg2;
- (void)addCGSelection:(struct CGPDFSelection *)arg1 forPage:(id)arg2;
- (void)setForceBreaks:(_Bool)arg1;
- (_Bool)forceBreaks;
- (id)pdfSelectionUUID;
- (void)addSelectionRange:(struct _NSRange)arg1 page:(id)arg2 normalize:(_Bool)arg3;
- (id)attributedStringScaled:(double)arg1;
- (id)boundsArrayForPage:(id)arg1;
- (void)addSelections:(id)arg1;
- (void)drawForPage:(id)arg1 withBox:(long long)arg2 active:(_Bool)arg3;
- (void)drawForPage:(id)arg1 withBox:(int)arg2 active:(_Bool)arg3 inContext:(struct CGContext *)arg4;
- (id)cgSelectionPages;
- (void)normalize;
- (struct _NSRange)previewRangeAtIndex:(unsigned long long)arg1 onPage:(id)arg2;
- (id)createAttributedStringForCGSelection:(struct CGPDFSelection *)arg1 scaled:(double)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1 onPage:(id)arg2;
- (struct CGRect)spanBoundsForPage:(id)arg1 atPoint:(struct CGPoint)arg2;
- (struct CGRect)lastSpanBoundsForPage:(id)arg1;
- (void)extendSelectionForLineBoundaries;
- (void)drawForPage:(id)arg1 active:(_Bool)arg2;
- (struct CGPDFSelection *)cgSelectionForPage:(id)arg1;
- (struct CGPoint)firstCharCenter;
- (struct CGPoint)leftMostCharCenter;
- (struct CGPoint)rightMostCharCenter;
- (unsigned long long)indexOfFirstCharacterOnPage:(id)arg1;
- (unsigned long long)indexOfLastCharacterOnPage:(id)arg1;
- (id)html;
- (id)rtfdData;

@end
