/*
 Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

#import <MarkupUI/MUContentViewController.h>

@class AKPageController, AKRectAnnotation, NSArray, NSString, UIImage, UIImageView, UIScrollView, UITapGestureRecognizer, UIView;

@interface MUImageContentViewController : MUContentViewController

{
    struct CGPoint _pointToCenterAfterRotation;
    _Bool _wasZoomToFit;
    _Bool _centersIgnoringContentInsets;
    _Bool _usePlaceholderAsDisplayImageIfPossible;
    _Bool _inDoubleTapZoom;
    _Bool _didSetup;
    _Bool _firstLoadZoomToFit;
    _Bool _zoomToFitRestoreValue;
    UIImage *_tentativePlaceholderImage;
    double _maxImageDimension;
    unsigned long long _inkStyle;
    id _sourceContent;
    UIScrollView *_scrollView;
    UIView *_combinedContentView;
    UIImageView *_imageView;
    double _downsampledImageScale;
    CDUnknownBlockType _loadCompletionBlock;
    UITapGestureRecognizer *_localDoubleTapRecognizer;
    AKRectAnnotation *_editingAnnotaiton;
    AKPageController *_pageController;
    struct CGSize _sourceImagePixelSize;
    struct UIEdgeInsets _edgeInsets;
}

@property (retain) id sourceContent;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *combinedContentView;
@property (retain, nonatomic) UIImageView *imageView;
@property struct CGSize sourceImagePixelSize;
@property double downsampledImageScale;
@property (nonatomic) _Bool usePlaceholderAsDisplayImageIfPossible;
@property (nonatomic) _Bool inDoubleTapZoom;
@property (copy) CDUnknownBlockType loadCompletionBlock;
@property (retain) UITapGestureRecognizer *localDoubleTapRecognizer;
@property _Bool didSetup;
@property (weak, nonatomic) AKRectAnnotation *editingAnnotaiton;
@property (weak, nonatomic) AKPageController *pageController;
@property (nonatomic) _Bool firstLoadZoomToFit;
@property (nonatomic) _Bool zoomToFitRestoreValue;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (nonatomic) _Bool centersIgnoringContentInsets;
@property (retain, nonatomic) UIImage *tentativePlaceholderImage;
@property double maxImageDimension;
@property (nonatomic) unsigned long long inkStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long defaultToolTag;
@property (nonatomic, readonly) UIScrollView *contentViewScrollView;
@property (retain) NSArray *sourceContentReplacedAnnotationMaps;
@property (nonatomic) _Bool showsThumbnailView;
@property (readonly) unsigned long long pageCount;
@property (nonatomic) _Bool navigationModeHorizontal;

- (void)dealloc;
- (struct CGSize)contentSize;
- (void)teardown;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (struct CGPoint)_minimumContentOffset;
- (struct CGPoint)_maximumContentOffset;
- (void)didReceiveMemoryWarning;
- (struct CGRect)visibleContentRect;
- (void)setup;
- (id)undoManagerForAnnotationController:(id)arg1;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerDidEnterToolMode:(id)arg1;
- (void)controllerDidExitToolMode:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
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
- (void)_doubleTap:(id)arg1;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)loadContentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)idealContentSizeForScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGRect)visibleContentRectInCoordinateSpace:(id)arg1;
- (id)initWithSourceContent:(id)arg1 archivedDataModel:(id)arg2 delegate:(id)arg3;
- (void)_annotationWillBeginEditing:(id)arg1;
- (void)_annotationDidEndEditing:(id)arg1;
- (void)_setImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_updateMinMaxZoomFactor;
- (void)_uninstallOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)_installOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)_downsampleImageForDisplay:(struct CGImage *)arg1 fromImageSource:(struct CGImageSource *)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_imageIsSmallerThanView;
- (double)_zoomToFitZoomFactor;
- (_Bool)_placeholderCanBeUsedForBaseImageOfSize:(struct CGSize)arg1;
- (void)_setupScrollViewForImageOfScaledSize:(struct CGSize)arg1;
- (double)_zoomToFitZoomFactorIncludingScrollViewEdgeInsets;
- (double)_zoomToFitZoomFactorInBounds:(struct CGRect)arg1;
- (struct CGRect)_zoomRectForScale:(double)arg1 withCenter:(struct CGPoint)arg2;
- (_Bool)_imageIsSize:(struct CGSize)arg1 isSmallerThanSize:(struct CGSize)arg2;
- (void)_prepareToRotate;
- (void)_recoverFromRotation;
- (void)_adjustScrollViewForKeyboardNotification:(id)arg1;
- (unsigned long long)_pageIndexForAnnotation:(id)arg1;
- (struct CGRect)_annotationRectInOverlay:(id)arg1 pageIndex:(unsigned long long)arg2;
- (void)adjustScrollViewToAccomodateKeyboardStartingFrame:(struct CGRect)arg1 endingFrame:(struct CGRect)arg2 annotationFrame:(struct CGRect)arg3 inOverlayView:(id)arg4 withAnimationDuration:(double)arg5 curve:(long long)arg6;
- (id)contentSnapshot;

@end
