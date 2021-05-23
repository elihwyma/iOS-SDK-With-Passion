/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UIViewController.h>

#import <PDFKit/Swift-Protocol.h>

@class NSString, PDFPageViewControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageViewController : UIViewController <Swift>

{
    PDFPageViewControllerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)textInputView;
- (id)scrollView;
- (id)selection;
- (void)setSelection:(id)arg1;
- (id)pdfView;
- (id)pageView;
- (void)setPDFView:(id)arg1;
- (void)enforceAutoScaleFactor;
- (double)autoScaleFactor;
- (void)setAutoScales:(_Bool)arg1;
- (void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2;
- (void)changedBoundsForBoxNotification:(id)arg1;
- (void)didRotatePageNotification:(id)arg1;
- (void)_removePDFView;
- (void)_buildPDFPageView;
- (void)_updateAnnotations;
- (void)removeAKOverlay;
- (void)_centerAlign;
- (void)_setupGestureRecognizerDependencies;
- (void)setRenderingProperties:(id)arg1;
- (void)setPageBreakMargins:(struct UIEdgeInsets)arg1;
- (void)setPDFPage:(id)arg1;
- (id)PDFPage;
- (void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2;

@end
