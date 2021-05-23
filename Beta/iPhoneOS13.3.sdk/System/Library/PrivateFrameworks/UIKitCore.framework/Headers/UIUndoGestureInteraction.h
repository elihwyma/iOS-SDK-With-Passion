/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSLayoutConstraint, NSString, UIDelayedAction, UIKBTextEditingTraits, UIKBUndoInteractionHUD, UIKBUndoStateHUD, UILayoutGuide, UITapGestureRecognizer, UIUndoGestureObserver, UIUndoGestureRecognizer, UIUndoLongPressGestureRecognizer, UIUndoPinchGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface UIUndoGestureInteraction : NSObject <Swift>

{
    _Bool _interactiveHUDIsVisible;
    _Bool _undoStateHUDIsAnimating;
    _Bool _multiPinchTimerOn;
    UIView *_view;
    UIUndoGestureObserver *_observerGesture;
    UITapGestureRecognizer *_threeFingerSingleTap;
    UITapGestureRecognizer *_threeFingerDoubleTap;
    UIUndoGestureRecognizer *_threeFingerSlide;
    UIUndoLongPressGestureRecognizer *_threeFingerLongPress;
    UIUndoPinchGestureRecognizer *_threeFingerPinch;
    UIKBUndoInteractionHUD *_undoInteractiveHUD;
    UIKBUndoStateHUD *_undoStateHUD;
    NSLayoutConstraint *_undoStateHUDTopConstraint;
    NSLayoutConstraint *_undoStateHUDCenterConstraint;
    NSLayoutConstraint *_undoHUDContainerWidthConstraint;
    NSLayoutConstraint *_undoHUDContainerHeightConstraint;
    UIDelayedAction *_undoStateHUDDismissTimer;
    long long _currentAppearance;
    UILayoutGuide *_layoutGuide;
    long long _previousRecognizedPanDirection;
    UIDelayedAction *_multiPansTimer;
    double _remainingDistanceToTravel;
    long long _beginPanDirection;
    unsigned long long _panDownStateChangedCounter;
    double _lastTapTimestamp;
    double _initPinchableDistance;
    double _previousPinchPerimeter;
    long long _potentialPinchDirection;
    UIKBTextEditingTraits *_editingTraits;
    struct CGPoint _previousPanLocation;
    struct CGPoint _beginPanLocation;
    struct CGRect _currentActuallSceneBounds;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UIUndoGestureObserver *observerGesture;
@property (retain, nonatomic) UITapGestureRecognizer *threeFingerSingleTap;
@property (retain, nonatomic) UITapGestureRecognizer *threeFingerDoubleTap;
@property (retain, nonatomic) UIUndoGestureRecognizer *threeFingerSlide;
@property (retain, nonatomic) UIUndoLongPressGestureRecognizer *threeFingerLongPress;
@property (retain, nonatomic) UIUndoPinchGestureRecognizer *threeFingerPinch;
@property (retain, nonatomic) UIKBUndoInteractionHUD *undoInteractiveHUD;
@property (retain, nonatomic) UIKBUndoStateHUD *undoStateHUD;
@property (retain, nonatomic) NSLayoutConstraint *undoStateHUDTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *undoStateHUDCenterConstraint;
@property (retain, nonatomic) NSLayoutConstraint *undoHUDContainerWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *undoHUDContainerHeightConstraint;
@property (retain, nonatomic) UIDelayedAction *undoStateHUDDismissTimer;
@property (nonatomic) long long currentAppearance;
@property (nonatomic) struct CGRect currentActuallSceneBounds;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (nonatomic) _Bool interactiveHUDIsVisible;
@property (nonatomic) long long previousRecognizedPanDirection;
@property (retain, nonatomic) UIDelayedAction *multiPansTimer;
@property (nonatomic) double remainingDistanceToTravel;
@property (nonatomic) struct CGPoint previousPanLocation;
@property (nonatomic) struct CGPoint beginPanLocation;
@property (nonatomic) long long beginPanDirection;
@property (nonatomic) unsigned long long panDownStateChangedCounter;
@property (nonatomic) _Bool undoStateHUDIsAnimating;
@property (nonatomic) double lastTapTimestamp;
@property (nonatomic) _Bool multiPinchTimerOn;
@property (nonatomic) double initPinchableDistance;
@property (nonatomic) double previousPinchPerimeter;
@property (nonatomic) long long potentialPinchDirection;
@property (retain, nonatomic) UIKBTextEditingTraits *editingTraits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)presentProductivityGestureTutorialInlineWithCompletion:(CDUnknownBlockType)arg1;
+ (id)iWorkFamily;
+ (void)presentProductivityGestureTutorialIfNeededWithCompletion:(CDUnknownBlockType)arg1;

- (_Bool)canRedo;
- (_Bool)canUndo;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (long long)keyboardAppearance;
- (void)undo:(_Bool)arg1;
- (void)redo:(_Bool)arg1;
- (void)applicationWillSuspend;
- (id)_undoManager;
- (double)currentTime;
- (void)_addGestureRecognizers;
- (void)_removeGestureRecognizers;
- (void)tooSlow:(id)arg1;
- (struct CGRect)actualSceneBounds;
- (_Bool)canCut;
- (_Bool)canCopy;
- (_Bool)canPaste;
- (void)cutOperation;
- (void)copyOperation;
- (void)pasteOperation;
- (void)disableEnclosingScrollViewScrolling;
- (void)clearHUDViews;
- (void)removeAllHUDOnContainerChange;
- (_Bool)currentInteractiveHUDVisible;
- (void)setUndoInteractiveHUDVisibility:(_Bool)arg1;
- (_Bool)currentStateHUDVisible;
- (void)setUndoStateHUDVisibility:(_Bool)arg1 withType:(long long)arg2 available:(_Bool)arg3;
- (void)clearUndoStateHUDDismissTimer;
- (void)clearMultiPinchTimer;
- (_Bool)isRTLMode;
- (_Bool)needUpdateHUDForContainerChange;
- (void)layoutUndoInteractiveHUD;
- (void)layoutUndoStateHUD;
- (void)touchUndoStateHUDDismissTimer;
- (void)animateDisplayingStateHUD;
- (void)animateInStateHUD;
- (void)_createAndUpdateUndoInteractiveHUDIfNecessary;
- (void)setUndoHUDType:(long long)arg1 visibility:(_Bool)arg2;
- (void)_createAndUpdateUndoStateHUDIfNecessary;
- (void)undoStateHUDDismissTimerElaspsed:(id)arg1;
- (void)observerGestureHandler:(id)arg1;
- (void)threeFingerSingleTap:(id)arg1;
- (void)threeFingerDoubleTap:(id)arg1;
- (void)threeFingerSlide:(id)arg1;
- (void)threeFingerLongPress:(id)arg1;
- (void)threeFingerPinch:(id)arg1;
- (void)_createGestureRecognizersIfNecessary;
- (id)currentResponder;
- (unsigned long long)privateEditingInteractionOptions;
- (_Bool)editingInteractionOptionsAllowGestureRecognizerToBegin:(id)arg1;
- (_Bool)undoManagerOperationsUndoRedoAvailable;
- (_Bool)undoManagerOperationsCutCopyPasteAvailable;
- (_Bool)textEditingOperationsAvailableWithGestureRecognizer:(id)arg1;
- (_Bool)bundleIniWorkFamily:(id)arg1;
- (void)multiPansTimerElaspsed:(id)arg1;
- (void)deactiveActiveKeysIfNeeded:(id)arg1;
- (void)threeFingerDoubleTapUndoAction;
- (void)_startUndoPan:(id)arg1;
- (void)_updateUndoPan:(id)arg1;
- (void)_endPan:(id)arg1;
- (void)_startPinch:(id)arg1;
- (void)_updatePinch:(id)arg1;
- (void)_endPinch:(id)arg1;
- (void)_cancelPinch:(id)arg1;
- (id)interactiveHUDButtonForDirection:(long long)arg1;
- (void)fullyCloseCoverWithComplete:(CDUnknownBlockType)arg1;
- (_Bool)performActionWithDirection:(long long)arg1;
- (long long)undoControlTypeWithDirection:(long long)arg1;
- (void)startMultiPinchTimer:(double)arg1;
- (void)fullyOpenAndCloseCoverWithBeginDirection:(long long)arg1;
- (id)scrollViewForInputDelegate;
- (_Bool)undoGestureIsMoving:(id)arg1;
- (long long)slideDirectionWithGesture:(id)arg1;
- (void)animateSpringCoverWithSuccess:(_Bool)arg1 direction:(long long)arg2 remainingDistanceToTravel:(double)arg3;
- (id)responderForOperation:(SEL)arg1 withSender:(id)arg2;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect)arg1;
- (void)layoutUndoHUDSliderDetails;
- (id)_undoManagerFlattenedGroupingInfo;
- (void)touchMultiPansTimer;
- (void)clearMultiPansTimer;

@end
