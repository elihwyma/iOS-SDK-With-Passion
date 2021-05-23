/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class UIPDFPage;

@interface UIPDFSelection : NSObject

{
    UIPDFPage *_page;
    struct CGPDFSelection *_cgSelection;
    _Bool _dirty;
    struct __CFString *_string;
    long long _cachedStartIndex;
    long long _cachedEndIndex;
    CDStruct_627e0f85 stringRange;
}

@property (nonatomic) CDStruct_627e0f85 stringRange;

- (id)init;
- (id)string;
- (void)dealloc;
- (id)description;
- (_Bool)isEmpty;
- (struct CGAffineTransform)transform;
- (id)textAtIndex:(unsigned long long)arg1;
- (CDStruct_627e0f85)extent;
- (struct CGRect)bounds;
- (unsigned long long)startIndex;
- (id)page;
- (unsigned long long)numberOfRectangles;
- (_Bool)getBounds:(struct CGRect *)arg1 transform:(struct CGAffineTransform *)arg2 index:(unsigned long long)arg3;
- (id)attributedStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)endIndex;
- (id)archive;
- (CDStruct_f9662865)rectangleAtIndex:(unsigned long long)arg1 scale:(double)arg2 inset:(double)arg3;
- (id)initWithPage:(id)arg1 cgSelection:(struct CGPDFSelection *)arg2;
- (struct CGPDFSelection *)CGSelection;
- (id)initWithPage:(id)arg1 fromArchive:(id)arg2;
- (id)initWithSelection:(id)arg1;
- (id)initWithPage:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (_Bool)isNonEmpty;
- (id)selectionExtendedToLineBoundaries;
- (id)containingTextLine;
- (_Bool)isWord;
- (id)htmlAtIndex:(unsigned long long)arg1;
- (unsigned long long)extendAtStart:(unsigned long long)arg1;
- (unsigned long long)extendAtEnd:(unsigned long long)arg1;
- (void)copyToPasteboard;
- (double)baseLineAtIndex:(unsigned long long)arg1;
- (void)extendToParagraph;

@end
