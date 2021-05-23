/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIResponder.h>

@class AKAlignmentGuideController, AKAnnotation, AKAnnotationEventHandler, AKController, AKHighlightColorEditorController, AKPageController, NSString, UIEvent;

@interface AKMainEventHandler : UIResponder

{
    _Bool _mainEventHandlerIsInTrackingLoop;
    _Bool _mainEventHandlerIsInDoodleTrackingLoop;
    _Bool _mainEventHandlerIsInRotationLoop;
    _Bool _shouldEatNextLeftMouseUp;
    _Bool _shouldEatNextRightMouseUp;
    _Bool _dragDidCopySelectedAnnotations;
    _Bool _undoManagerWasGroupingByEvent;
    _Bool _wasSelectedByLongPressRecognizer;
    AKAnnotationEventHandler *_annotationEventHandler;
    unsigned long long _currentModifierFlags;
    AKPageController *_dragPageController;
    AKAlignmentGuideController *_dragAlignmentGuideController;
    double _draggedAnnotationsMaxLeftEdge;
    double _draggedAnnotationsMinRightEdge;
    double _draggedAnnotationsMaxBottomEdge;
    double _draggedAnnotationsMinTopEdge;
    UIEvent *_lastEventWithValidLocationForAutoscroll;
    UIEvent *_lastLeftMouseDownEvent;
    AKAnnotation *_annotationToBeginEditingOnDragEnd;
    AKHighlightColorEditorController *_highlightColorEditor;
    AKController *_controller;
    struct CGPoint _leftMouseDownPoint;
    struct CGPoint _lastDragPoint;
    struct CGPoint _lastDragActualLocation;
    struct CGPoint _lastDragActualLocationInWindow;
    struct CGPoint _firstDragPoint;
    struct CGPoint _panGestureStartPointInWindow;
}

@property _Bool shouldEatNextLeftMouseUp;
@property _Bool shouldEatNextRightMouseUp;
@property _Bool dragDidCopySelectedAnnotations;
@property _Bool undoManagerWasGroupingByEvent;
@property struct CGPoint leftMouseDownPoint;
@property (retain) AKPageController *dragPageController;
@property (retain) AKAlignmentGuideController *dragAlignmentGuideController;
@property struct CGPoint lastDragPoint;
@property struct CGPoint lastDragActualLocation;
@property struct CGPoint lastDragActualLocationInWindow;
@property double draggedAnnotationsMaxLeftEdge;
@property double draggedAnnotationsMinRightEdge;
@property double draggedAnnotationsMaxBottomEdge;
@property double draggedAnnotationsMinTopEdge;
@property (retain) UIEvent *lastEventWithValidLocationForAutoscroll;
@property (retain) UIEvent *lastLeftMouseDownEvent;
@property _Bool wasSelectedByLongPressRecognizer;
@property (weak) AKAnnotation *annotationToBeginEditingOnDragEnd;
@property (retain) AKHighlightColorEditorController *highlightColorEditor;
@property (weak) AKController *controller;
@property unsigned long long currentModifierFlags;
@property _Bool mainEventHandlerIsInTrackingLoop;
@property _Bool mainEventHandlerIsInDoodleTrackingLoop;
@property _Bool mainEventHandlerIsInRotationLoop;
@property struct CGPoint firstDragPoint;
@property struct CGPoint panGestureStartPointInWindow;
@property (retain) AKAnnotationEventHandler *annotationEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newMainEventHandlerForCurrentPlatformWithController:(id)arg1;

- (void)teardown;
- (id)initWithController:(id)arg1;
- (_Bool)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)hitTestAnnotationsIncludingPOI:(_Bool)arg1 ignoreIfDeselected:(_Bool)arg2 atPointInWindow:(struct CGPoint)arg3 outAnnotation:(id *)arg4;
- (_Bool)mainHandleEvent:(id)arg1 orRecognizer:(id)arg2;
- (struct CGPoint)windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)continueDragEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)continueRotateEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)handleRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (struct CGPoint)modelPointFromWindowPoint:(struct CGPoint)arg1 foundOnPageController:(id *)arg2;
- (struct CGPoint)modelPointFromEvent:(id)arg1 orRecognizer:(id)arg2 onPageController:(id *)arg3;
- (_Bool)handleDoubleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)_setCurrentPageBasedOnPageController:(id)arg1;
- (id)annotationsPassingBoundingBoxHitTestsWithPoint:(struct CGPoint)arg1 onPageController:(id)arg2;
- (_Bool)hitTestPointsOfInterestsAtPoint:(struct CGPoint)arg1 onPageController:(id)arg2 inAnnotations:(id)arg3 event:(id)arg4 recognizer:(id)arg5 cursorUpdateOnly:(_Bool)arg6;
- (id)topmostAnnotationForBorderAndInteriorHitTestAtPoint:(struct CGPoint)arg1 inAnnotations:(id)arg2 onPageController:(id)arg3 wasOnBorder:(_Bool *)arg4 wasOnText:(_Bool *)arg5;
- (void)_updateSelectionWithAnnotation:(id)arg1 onPageController:(id)arg2;
- (_Bool)enterDragEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint)arg1;
- (_Bool)_didNotHandleEventSoDeselect;
- (_Bool)enterRotateEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (struct CGPoint)_alignedAnnotationDragPointForPoint:(struct CGPoint)arg1 withEvent:(id)arg2 orRecognizer:(id)arg3;
- (struct CGPoint)_modelPointFromPointInWindow:(struct CGPoint)arg1 usingPageController:(id)arg2;
- (void)applyTranslationToAllSelectedAnnotations:(struct CGPoint)arg1;
- (void)finishTranslationOfAllSelectedAnnotations;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)handleRightDownEvent:(id)arg1;
- (_Bool)handleKeyboardEvent:(id)arg1;
- (void)updateCursorForEvent:(id)arg1;
- (_Bool)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint)arg1 withStartingPoint:(struct CGPoint)arg2;

@end
