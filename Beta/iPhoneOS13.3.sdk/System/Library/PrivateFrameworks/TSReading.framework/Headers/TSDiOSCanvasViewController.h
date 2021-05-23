/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIViewController.h>

#import <TSReading/Swift-Protocol.h>

@class CALayer, NSArray, NSMutableArray, NSSet, NSString, TSDAllTouchesDoneGestureRecognizer, TSDCanvasLayer, TSDCanvasSubviewsController, TSDCanvasView, TSDCanvasZoomPinchGestureRecognizer, TSDCanvasZoomTracker, TSDEditMenuTapGestureRecognizer, TSDGuidedPanController, TSDInteractiveCanvasController, TSDKnobDragGestureRecognizer, TSDMultiSelectGestureRecognizer, TSDNudgeGestureRecognizer, TSDPreventScrollGestureRecognizer, TSDRepDragGestureRecognizer, TSDRepRotateGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView;

@protocol TSDiOSCanvasViewControllerDelegate;

@interface TSDiOSCanvasViewController : UIViewController <Swift>

{
    TSDInteractiveCanvasController *mICC;
    id <TSDiOSCanvasViewControllerDelegate> mDelegate;
    _Bool mContextMenuMightBeDisplayed;
    UITapGestureRecognizer *mSingleTapGestureRecognizer;
    UITapGestureRecognizer *mDoubleTapGestureRecognizer;
    TSDEditMenuTapGestureRecognizer *mEditMenuTapGestureRecognizer;
    TSDKnobDragGestureRecognizer *mKnobDragGestureRecognizer;
    TSDMultiSelectGestureRecognizer *mMultiSelectGestureRecognizer;
    TSDRepDragGestureRecognizer *mRepDragGestureRecognizer;
    TSDRepRotateGestureRecognizer *mRepRotateGestureRecognizer;
    TSDCanvasZoomPinchGestureRecognizer *mZoomGestureRecognizer;
    TSDNudgeGestureRecognizer *mNudgeGestureRecognizer;
    TSDAllTouchesDoneGestureRecognizer *mAllTouchesDoneGestureRecognizer;
    TSDPreventScrollGestureRecognizer *mPreventScrollGestureRecognizer;
    UIPanGestureRecognizer *mGuidedPanGestureRecognizer;
    TSDGuidedPanController *mGuidedPanController;
    _Bool mHasBeenTornDown;
    _Bool mIsPopoverGestureInFlight;
    _Bool mInspectorModeEnabled;
    NSMutableArray *mInspectorGestureRecognizersToReenable;
    CDUnknownBlockType mInspectorSingleTapBlock;
    _Bool mCurrentlyScrolling;
    _Bool mRotating;
    TSDCanvasZoomTracker *mCanvasZoomTracker;
    struct CGPoint mLastZoomHUDLocation;
    _Bool _isRotating;
    TSDCanvasSubviewsController *mSubviewsController;
}

@property (nonatomic, readonly) CDStruct_499be82c touchContentPlacement;
@property (nonatomic, readonly) CDStruct_499be82c centerPlusMovementContentPlacement;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (retain, nonatomic) TSDEditMenuTapGestureRecognizer *editMenuTapGestureRecognizer;
@property (retain, nonatomic) TSDKnobDragGestureRecognizer *knobDragGestureRecognizer;
@property (retain, nonatomic) TSDMultiSelectGestureRecognizer *multiSelectGestureRecognizer;
@property (retain, nonatomic) TSDRepDragGestureRecognizer *repDragGestureRecognizer;
@property (retain, nonatomic) TSDRepRotateGestureRecognizer *repRotateGestureRecognizer;
@property (retain, nonatomic) UIPinchGestureRecognizer *zoomGestureRecognizer;
@property (retain, nonatomic) TSDNudgeGestureRecognizer *nudgeGestureRecognizer;
@property (retain, nonatomic) TSDAllTouchesDoneGestureRecognizer *allTouchesDoneGestureRecognizer;
@property (nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic) id <TSDiOSCanvasViewControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *commonGestureRecognizers;
@property (nonatomic, readonly) NSSet *panGestureRecognizers;
@property (retain, nonatomic, readonly) TSDPreventScrollGestureRecognizer *preventScrollGestureRecognizer;
@property (retain, nonatomic, readonly) UIPanGestureRecognizer *guidedPanGestureRecognizer;
@property (nonatomic, readonly) _Bool isPopoverGestureInFlight;
@property (nonatomic) _Bool contextMenuMightBeDisplayed;
@property (nonatomic, readonly) _Bool isRotating;
@property (nonatomic, readonly) _Bool isDraggingViaGuidedPan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) CALayer *topLevelTilingLayer;
@property (retain, nonatomic, readonly) CALayer *containerLayer;
@property (retain, nonatomic, readonly) UIView *containerView;
@property (retain, nonatomic, readonly) UIViewController *containerViewController;
@property (retain, nonatomic, readonly) TSDCanvasSubviewsController *subviewsController;
@property (nonatomic, readonly) TSDCanvasView *canvasView;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) TSDCanvasLayer *canvasLayer;
@property (nonatomic, readonly) CALayer *clippingLayer;

- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)teardown;
- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)becomeFirstResponder;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)viewController;
- (_Bool)canBecomeFirstResponder;
- (void)cut:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)stopScrolling;
- (id)topLevelReps;
- (id)viewForGestureRecognizer:(id)arg1;
- (_Bool)allowTouchOutsideCanvasView:(id)arg1 forGesture:(id)arg2;
- (_Bool)shouldIgnoreTextGestures;
- (id)asiOSCVC;
- (void)canvasDidUpdateRepsFromLayouts;
- (void)presentError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentErrors:(id)arg1 withLocalizedDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)extraMenuItems;
- (void)resetGesturesForContextSwitch;
- (void)hideEditMenu;
- (void)showEditMenu:(id)arg1;
- (void)forceStopScrolling;
- (void)showEditMenuForSelection:(id)arg1;
- (id)hitRepWithTouch:(id)arg1;
- (void)toggleEditMenuForCurrentSelection;
- (_Bool)shouldSelectAndShowEditMenuOnFirstTapForRep:(id)arg1;
- (void)i_updateZoomGestureRecognizer;
- (_Bool)p_shouldUseWideGamut;
- (void)setUpGestureRecognizers;
- (void)p_updateWideGamut;
- (void)p_handleSingleTapGesture:(id)arg1;
- (void)p_handleTapForEditMenu:(id)arg1;
- (void)p_allTouchesDone:(id)arg1;
- (void)p_zoomWithGesture:(id)arg1;
- (void)p_guidedPanWithGesture:(id)arg1;
- (_Bool)handleDoubleTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (struct CGRect)targetRectForEditMenu:(id)arg1;
- (void)p_buildMenuItems:(id)arg1 forSelection:(id)arg2;
- (void)unlock:(id)arg1;
- (id)itemsToAddToEditMenuForRep:(id)arg1;
- (void)addInspectorPanZoomModeGRsToArray:(id)arg1;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (id)p_willPresentError:(id)arg1;
- (void)p_didPresentErrorWithRecovery:(_Bool)arg1 completionHandler:(void *)arg2;
- (void)presentMovieCompatibilityAlertForUnplayableMovieURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentMovieCompatibilityAlertForUnplayableMoviePasteboardDrawableProviders:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isInFocusedContainer;
- (void)canvasZoomTracker:(id)arg1 willBeginViewScaleFeedbackWithFastPinch:(_Bool)arg2;
- (void)canvasZoomTracker:(id)arg1 willUpdateViewScaleFeedbackWithScale:(double)arg2;
- (void)canvasZoomTrackerDidEndViewScaleFeedback:(id)arg1;
- (void)canvasZoomTrackerWillBeginFinalZoomAnimation:(id)arg1;
- (void)canvasZoomTrackerDidEndFinalZoomAnimation:(id)arg1;
- (void)canvasZoomTrackerDidFinish:(id)arg1;
- (id)hitKnobWithTouch:(id)arg1 returningRep:(id *)arg2;
- (_Bool)repDragGestureRecognizer:(id)arg1 shouldBeginTapHoldTrackingAtScaledPoint:(struct CGPoint)arg2;
- (void)beginInspectorPanZoomModeWithSingleTapBlock:(CDUnknownBlockType)arg1;
- (void)endInspectorPanZoomMode;
- (void)p_editMenuDidHide:(id)arg1;
- (void)beginModalOperationWithLocalizedMessage:(id)arg1 progress:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void)endModalOperation;
- (id)newMoviePlaybackHUDWithFrame:(struct CGRect)arg1 playerController:(id)arg2 movieRep:(id)arg3;
- (void)showMoviePlaybackHUD:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)hideMoviePlaybackHUD;
- (id)newAudioPlaybackHUDWithFrame:(struct CGRect)arg1 audioRep:(id)arg2 delegate:(id)arg3;
- (Class)movieInspectorPaneClass;
- (Class)audioInspectorPaneClass;

@end
