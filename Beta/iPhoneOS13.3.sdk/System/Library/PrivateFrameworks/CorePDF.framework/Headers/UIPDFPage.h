/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, UIImage, UIPDFDocument, UIPDFSelection;

@interface UIPDFPage : NSObject

{
    struct CGPDFPage *_cgPage;
    unsigned long long _pageNumber;
    NSString *_stringInReadingOrder;
    UIPDFSelection *_selection;
    struct os_unfair_lock_s _lock;
    UIPDFDocument *_document;
    unsigned long long _pageIndex;
    UIImage *_pageImage;
    NSMutableArray *_annotations;
}

@property (readonly) struct CGPDFPage *CGPage;
@property (readonly) unsigned long long pageNumber;
@property (readonly) unsigned long long pageIndex;
@property (readonly) struct CGRect cropBox;
@property (readonly) UIPDFDocument *document;
@property (retain) UIImage *pageImage;
@property (retain) UIPDFSelection *selection;

- (id)string;
- (void)dealloc;
- (struct CGSize)size;
- (unsigned long long)rotation;
- (void)refresh;
- (void)setDocument:(id)arg1;
- (id)findString:(id)arg1 fromSelection:(id)arg2 options:(unsigned long long)arg3;
- (id)annotations;
- (void)addAnnotation:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (struct CGRect)mediaBox;
- (id)initWithCGPDFPage:(struct CGPDFPage *)arg1;
- (unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)arg1;
- (void)clearAnnotations;
- (id)annotationIn:(id)arg1 withIndex:(unsigned long long)arg2;
- (id)initWithDocument:(id)arg1 pageNumber:(unsigned long long)arg2;
- (void)drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)getImageIfAvailable;
- (void)deliverImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 receiver:(id)arg3 selector:(SEL)arg4 info:(id)arg5;
- (struct CGRect)cropBoxAccountForRotation;
- (struct CGRect)mediaBoxAccountForRotation;
- (id)copyPage;
- (void)removeAllAnnotations;

@end
