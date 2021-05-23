/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString, PDFHostViewControllerPrivate;

@interface PDFHostViewController : _UIRemoteViewController

{
    PDFHostViewControllerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)backgroundColor;
+ (id)serviceViewControllerInterface;
+ (void)createHostView:(CDUnknownBlockType)arg1 forExtensionIdentifier:(id)arg2;
+ (id)loadExtension:(id)arg1;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)copy:(id)arg1;
- (long long)pageCount;
- (double)minimumZoomScale;
- (double)maximumZoomScale;
- (void)selectAll:(id)arg1;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (long long)currentPageIndex;
- (void)setup;
- (void)updatePDFViewLayout;
- (void)goToPageIndex:(long long)arg1;
- (void)cancelFindString;
- (void)findString:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)focusOnSearchResultAtIndex:(unsigned long long)arg1;
- (void)beginPDFViewRotation;
- (void)endPDFViewRotation;
- (void)snapshotViewRect:(struct CGRect)arg1 snapshotWidth:(id)arg2 afterScreenUpdates:(_Bool)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)cancelFindStringWithHighlightsCleared:(_Bool)arg1;
- (id)pageNumberIndicator;
- (void)setDocumentData:(id)arg1 withScrollView:(id)arg2;
- (void)clearSearchHighlights;
- (void)_gestureInit;
- (void)_setupExtensionInterruptionBlock;
- (void)_resetPDFHostViewControllerViews;
- (void)findStringUpdate:(unsigned long long)arg1 done:(_Bool)arg2;
- (struct UIEdgeInsets)_pdfViewSafeAreaInsets;
- (double)_hostScrollViewZoomScale;
- (struct CGRect)_insetBoundsInDocument;
- (void)_endPDFViewRotationAnimated:(_Bool)arg1 withUpdate:(_Bool)arg2;
- (void)handleGesture:(id)arg1;
- (_Bool)_isTouchingLollipopAtLocationOfFirstTouch:(struct CGPoint)arg1;
- (void)updateDocumentViewSize;
- (void)updateAutoScaleFactor;
- (struct CGSize)_documentViewSize;
- (struct UIEdgeInsets)_pdfViewInsets;
- (void)_setMinimumZoomScale:(double)arg1;
- (void)_setMaximumZoomScale:(double)arg1;
- (void)_appendPasswordUI;
- (unsigned long long)_typeForGestureRecognizer:(id)arg1;
- (void)goToPageIndex:(long long)arg1 withViewFrustum:(struct CGRect)arg2;
- (void)recievedSnapshotViewRect:(id)arg1;
- (void)setupDocumentViewSize:(struct CGSize)arg1;
- (void)documentIsLocked:(_Bool)arg1;
- (void)updateCurrentPageIndex:(long long)arg1;
- (void)updatePageCount:(long long)arg1;
- (void)showSelectionRect:(struct CGRect)arg1;
- (void)setHasSelection:(_Bool)arg1;
- (void)setTextSelectionPoints:(struct CGPoint)arg1 right:(struct CGPoint)arg2;
- (void)showTextSelectionMenu:(_Bool)arg1 selectionRect:(struct CGRect)arg2;
- (void)zoomToRect:(struct CGRect)arg1;
- (void)goToURL:(id)arg1 atLocation:(struct CGPoint)arg2;
- (void)goToPageIndex:(long long)arg1 pageFrame:(struct CGRect)arg2;
- (void)goToDestination:(long long)arg1 point:(struct CGPoint)arg2;
- (void)didCopyString:(id)arg1;
- (void)didCopyData:(id)arg1;
- (void)updateDocumentIsLocked:(_Bool)arg1;
- (void)didLongPressURL:(id)arg1 atLocation:(struct CGPoint)arg2 withAnnotationRect:(struct CGRect)arg3;
- (void)didLongPressPageIndex:(long long)arg1 atLocation:(struct CGPoint)arg2 withAnnotationRect:(struct CGRect)arg3;
- (void)endPDFViewRotationWithContentInset:(struct UIEdgeInsets)arg1;
- (void)killExtensionProcess;

@end
