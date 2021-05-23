/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UIViewController.h>

@class PDFExtensionViewControllerPrivate;

@interface PDFExtensionViewController : UIViewController

{
    PDFExtensionViewControllerPrivate *_private;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)init;
- (void)copy;
- (void)viewDidLoad;
- (void)setMinimumZoomScale:(double)arg1;
- (void)setMaximumZoomScale:(double)arg1;
- (void)selectAll;
- (void)_updatePageCount;
- (void)goToPageIndex:(long long)arg1;
- (void)cancelFindString;
- (void)findString:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)focusOnSearchResultAtIndex:(unsigned long long)arg1;
- (void)cancelFindStringWithHighlightsCleared:(_Bool)arg1;
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4;
- (void)setDocumentData:(id)arg1;
- (void)clearSearchHighlights;
- (void)updatePDFViewLayout:(struct CGRect)arg1 scrollViewFrame:(struct CGRect)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3 zoomScale:(double)arg4;
- (void)snapshotViewRect:(struct CGRect)arg1 forWidth:(double)arg2 afterScreenUpdates:(_Bool)arg3;
- (void)unlockWithPassword:(id)arg1;
- (void)documentDidEndDocumentFind:(id)arg1;
- (void)didMatchString:(id)arg1;
- (void)_pageChangedNotification:(id)arg1;
- (void)_goToPage:(id)arg1;
- (void)_goToDestination:(id)arg1;
- (void)_pdfViewZoomToRect:(id)arg1;
- (void)_selectionChangedNotification:(id)arg1;
- (void)_selectionPointsChangedNotification:(id)arg1;
- (void)_textSelectionShowTextSelectionMenu:(id)arg1;
- (void)_textSelectionDidCopyStringNotification:(id)arg1;
- (void)_textSelectionDidCopyDataNotification:(id)arg1;
- (void)_annotationHitNotification:(id)arg1;
- (void)_annotationLongPressNotification:(id)arg1;
- (void)_setupDocumentViewSize;
- (void)setupPDFView;
- (void)_updateDocumentIsLocked;
- (void)_zoomToRect:(struct CGRect)arg1;
- (void)_updateTextSelectionPoints;

@end
