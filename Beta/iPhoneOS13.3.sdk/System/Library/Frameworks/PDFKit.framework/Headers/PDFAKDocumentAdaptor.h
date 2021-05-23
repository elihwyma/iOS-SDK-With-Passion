/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class AKController, AKModelController, NSString, PDFAKDocumentAdaptorPrivate, PDFDocument, PDFView, UIView;

@protocol PDFAKControllerDelegateProtocol;

__attribute__((visibility("hidden")))
@interface PDFAKDocumentAdaptor : NSObject

{
    PDFAKDocumentAdaptorPrivate *_private;
}

@property (weak, nonatomic) PDFView *pdfView;
@property (weak, nonatomic, readonly) PDFDocument *pdfDocument;
@property (nonatomic, readonly) AKController *akMainController;
@property (nonatomic, readonly) AKModelController *akDocumentModelController;
@property (nonatomic, readonly) UIView *akToolbarView;
@property (weak, nonatomic) id <PDFAKControllerDelegateProtocol> PDFAKControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isHandlingEditDetected;
+ (void)setIsHandlingEditDetected:(_Bool)arg1;

- (void)dealloc;
- (void)teardown;
- (void)_teardown;
- (void)_pdfDocumentDidUnlock:(id)arg1;
- (void)_pdfViewDidLayout:(id)arg1;
- (void)_pdfViewDidChangeScale:(id)arg1;
- (id)undoManagerForAnnotationController:(id)arg1;
- (struct CGAffineTransform)_compensatingAffineTransformForPage:(id)arg1;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGRect)positioningRectForCandidatePicker;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillEnterToolMode:(id)arg1;
- (void)controllerDidEnterToolMode:(id)arg1;
- (void)controllerWillExitToolMode:(id)arg1;
- (void)controllerDidExitToolMode:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)_scheduleDelayedModelBaseScaleFactorCalculation;
- (void)_delayedModelBaseScaleFactorCalculation;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(_Bool)arg3 forAnnotationController:(id)arg4;
- (_Bool)controllerShouldDetectFormElements:(id)arg1;
- (_Bool)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (_Bool)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (void)rotateRight:(id)arg1;
- (void)rotateLeft:(id)arg1;
- (_Bool)hasHighlightableSelectionForAnnotationController:(id)arg1;
- (id)rulerHostingView;
- (_Bool)rulerHostWantsSharedRuler;
- (id)initWithPDFDocument:(id)arg1 andView:(id)arg2;
- (void)pdfDocument:(id)arg1 didInsertPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)pdfDocument:(id)arg1 didRemovePage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)pdfDocumentDidRemoveAllPagesOrPlaceholders:(id)arg1;
- (void)pdfDocument:(id)arg1 didExchangePage:(id)arg2 atIndex:(unsigned long long)arg3 withPage:(id)arg4 atIndex:(unsigned long long)arg5;
- (void)pdfDocument:(id)arg1 didReplacePagePlaceholder:(id)arg2 atIndex:(unsigned long long)arg3 withPage:(id)arg4;

@end
