/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString, SXDragManager, SXFullscreenCanvasViewController, SXFullscreenCaptionView, SXFullscreenNavigationBarView, SXItemizedScrollView, UIColor, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, UIView;

@protocol SXFullscreenCanvasShowable, SXFullscreenCaptionViewFactory;

@interface SXFullscreenCanvasController : NSObject <Swift>

{
    _Bool _isFullscreen;
    _Bool _isTransitioning;
    _Bool _rotationIsActive;
    _Bool _panIsActive;
    _Bool _pinchIsActive;
    _Bool _verticalSwipingIsActive;
    _Bool _isStoppingVerticalSwiping;
    _Bool _orientationChangeIsInterupting;
    _Bool _lessTouchesAreInterupting;
    _Bool _isSupressingColorSettings;
    int _previousExpansionMode;
    id <SXFullscreenCanvasShowable> _showable;
    unsigned long long _sharingPolicy;
    id <SXFullscreenCaptionViewFactory> _captionViewFactory;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    UITapGestureRecognizer *_openTapGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_backgroundView;
    UIView *_gestureView;
    unsigned long long _totalActiveGestureRecognizers;
    double _currentRotation;
    double _currentScale;
    unsigned long long _currentViewIndex;
    UIView *_currentView;
    SXFullscreenCanvasViewController *_canvasViewController;
    SXItemizedScrollView *_itemizedScrollView;
    SXFullscreenNavigationBarView *_navigationBarView;
    SXFullscreenCaptionView *_captionView;
    SXDragManager *_dragManager;
    struct CGPoint _currentTranslation;
    struct CGPoint _startingAnchorPoint;
    struct CGRect _currentOriginFrame;
    struct CGRect _currentDestinationFrame;
}

@property (nonatomic, readonly) unsigned long long sharingPolicy;
@property (nonatomic, readonly) id <SXFullscreenCaptionViewFactory> captionViewFactory;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, readonly) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *openTapGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UIView *gestureView;
@property (nonatomic, readonly) _Bool rotationIsActive;
@property (nonatomic, readonly) _Bool panIsActive;
@property (nonatomic, readonly) _Bool pinchIsActive;
@property (nonatomic, readonly) _Bool verticalSwipingIsActive;
@property (nonatomic, readonly) _Bool isStoppingVerticalSwiping;
@property (nonatomic, readonly) unsigned long long totalActiveGestureRecognizers;
@property (nonatomic, readonly) double currentRotation;
@property (nonatomic, readonly) double currentScale;
@property (nonatomic, readonly) struct CGPoint currentTranslation;
@property (nonatomic, readonly) struct CGPoint startingAnchorPoint;
@property (nonatomic) _Bool isFullscreen;
@property (nonatomic) _Bool orientationChangeIsInterupting;
@property (nonatomic) _Bool lessTouchesAreInterupting;
@property (nonatomic) unsigned long long currentViewIndex;
@property (retain, nonatomic) UIView *currentView;
@property (nonatomic) struct CGRect currentOriginFrame;
@property (nonatomic) struct CGRect currentDestinationFrame;
@property (retain, nonatomic) SXFullscreenCanvasViewController *canvasViewController;
@property (retain, nonatomic) SXItemizedScrollView *itemizedScrollView;
@property (retain, nonatomic) SXFullscreenNavigationBarView *navigationBarView;
@property (retain, nonatomic) SXFullscreenCaptionView *captionView;
@property (nonatomic) int previousExpansionMode;
@property (nonatomic) _Bool isSupressingColorSettings;
@property (retain, nonatomic) SXDragManager *dragManager;
@property (weak, nonatomic, readonly) id <SXFullscreenCanvasShowable> showable;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic, readonly) unsigned long long activeViewIndex;
@property (nonatomic, readonly) _Bool isTransitioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dismiss;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateTransform;
- (void)handleTap:(id)arg1;
- (void)setup;
- (void)fullscreenCanvasViewController:(id)arg1 willTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id)arg3;
- (void)fullScreenCanvasViewControllerWantsToDismiss:(id)arg1;
- (id)initWithShowable:(id)arg1 captionViewFactory:(id)arg2 sharingPolicy:(unsigned long long)arg3;
- (_Bool)captionView:(id)arg1 tapGestureRecognizerShouldBegin:(id)arg2;
- (id)viewForDragManager:(id)arg1;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint)arg2;
- (void)fullScreenImageViewDidStartZooming:(id)arg1;
- (void)fullScreenImageViewDidStopZooming:(id)arg1;
- (struct CGSize)fitSizeForRect:(struct CGRect)arg1;
- (void)presentFullscreenWithIndex:(unsigned long long)arg1;
- (void)fullscreenNavigationBarViewDoneButtonPressed:(id)arg1;
- (_Bool)otherInteractivityGestureShouldBegin:(id)arg1;
- (void)stopSupressingColorSettings;
- (void)startTransitionToFullScreen:(_Bool)arg1 controllable:(_Bool)arg2;
- (void)didEndTransitionFromFullScreen:(_Bool)arg1 toFullScreen:(_Bool)arg2;
- (void)goToOriginalFromFullScreenAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)willStartTransformingWithGestureRecognizer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setupScrollViewIfNeededWithActiveIndex:(unsigned long long)arg1;
- (void)transferGestureViewToView:(id)arg1;
- (void)changeCaptionViewForViewWithIndex:(unsigned long long)arg1 expanded:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setupGestureRecognizersInView:(id)arg1;
- (void)handleOpenTapGesture:(id)arg1;
- (void)handlePinchGestureRecognizer:(id)arg1;
- (void)handleRotationGestureRecognizer:(id)arg1;
- (void)handlePanGestureRecognizer:(id)arg1;
- (void)stopTransformingCancelled:(_Bool)arg1;
- (void)startVerticalSwiping;
- (void)stopVerticalSwipingDismissed:(_Bool)arg1 lastVelocity:(struct CGPoint)arg2;
- (void)handleGestureRecognizer:(id)arg1;
- (void)goToFullScreenFromOriginalAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (long long)viewIndexForPoint:(struct CGPoint)arg1;
- (struct CGPoint)calculateAnchorPointFromBounds:(struct CGRect)arg1 andPoint:(struct CGPoint)arg2;
- (void)transferCurrentViewToCanvas;
- (void)setupKeyCommandsForCanvasViewController:(id)arg1;
- (void)removeScaleAndTranslationFromCurrentView;
- (void)goToFullScreenFromFullScreenAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)goToOriginalFromOriginalAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didFinishFullscreenActiveIndex:(unsigned long long)arg1;
- (void)transferCurrentViewToOriginalView;
- (void)goToOriginalFromVerticalSwipingWithVelocity:(struct CGPoint)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)startSupressingColorSettings;
- (void)transformViewToSize:(struct CGSize)arg1;
- (unsigned long long)numberOfViewsInItemizedScrollView:(id)arg1;
- (struct CGRect)itemizedScrollView:(id)arg1 frameForViewAtIndex:(unsigned long long)arg2;
- (id)itemizedScrollView:(id)arg1 viewAtIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(id)arg1 didChangeToActiveViewIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(id)arg1 willShowViewWithIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(id)arg1 didHideViewWithIndex:(unsigned long long)arg2;
- (_Bool)comparePoint:(struct CGPoint)arg1 withPoint:(struct CGPoint)arg2 maxDelta:(double)arg3;

@end
