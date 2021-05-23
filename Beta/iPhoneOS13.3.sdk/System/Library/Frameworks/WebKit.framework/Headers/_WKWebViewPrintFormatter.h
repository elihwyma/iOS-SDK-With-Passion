/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIViewPrintFormatter.h>

@class _WKFrameHandle;

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter

{
    struct RetainPtr<_WKFrameHandle> _frameToPrint;
    struct RetainPtr<CGPDFDocument *> _printedDocument;
    _Bool _suppressPageCountRecalc;
    _Bool _snapshotFirstPage;
}

@property (retain, nonatomic) _WKFrameHandle *frameToPrint;
@property (nonatomic) _Bool snapshotFirstPage;

- (id).cxx_construct;
- (id)_webView;
- (void)_setNeedsRecalc;
- (long long)_recalcPageCount;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (void)_setSnapshotPaperRect:(struct CGRect)arg1;

@end
