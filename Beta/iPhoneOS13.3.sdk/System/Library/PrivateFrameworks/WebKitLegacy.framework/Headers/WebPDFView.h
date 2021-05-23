/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebCore/WAKView.h>

@class NSString;

@interface WebPDFView : WAKView

{
    _Bool dataSourceHasBeenSet;
    struct CGPDFDocument *_PDFDocument;
    NSString *_title;
    struct CGRect *_pageRects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGColor *)shadowColor;
+ (struct CGColor *)backgroundColor;
+ (id)supportedMIMETypes;
+ (Class)_representationClassForWebFrame:(id)arg1;

- (void)dealloc;
- (id)title;
- (void)setDataSource:(id)arg1;
- (void)layout;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsLayout:(_Bool)arg1;
- (unsigned int)totalPages;
- (struct CGRect)rectForPageNumber:(unsigned int)arg1;
- (struct CGPDFDocument *)doc;
- (id)documentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)dataSourceUpdated:(id)arg1;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)viewDidMoveToHostWindow;
- (_Bool)canProvideDocumentSource;
- (id)_pagesInRect:(struct CGRect)arg1;
- (void)drawPage:(struct CGPDFPage *)arg1;
- (void)_checkPDFTitle;
- (void)_computePageRects;
- (unsigned int)pageNumberForRect:(struct CGRect)arg1;

@end
