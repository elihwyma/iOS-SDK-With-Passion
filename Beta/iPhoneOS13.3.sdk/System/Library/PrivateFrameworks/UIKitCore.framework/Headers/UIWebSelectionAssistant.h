/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIKeyboardTaskQueue, UILongPressGestureRecognizer, UITapAndAHalfRecognizer, UITextInteraction, UIView, UIWebSelection, UIWebSelectionView, _UIKeyboardBasedNonEditableTextSelectionGestureController, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UIWebSelectionAssistant : NSObject <Swift>

{
    UIView *_view;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;
    UILongPressGestureRecognizer *_forcePressGestureRecognizer;
    UITextInteraction *_textInteractions;
    _UIKeyboardTextSelectionController *_textSelectionController;
    _UIKeyboardBasedNonEditableTextSelectionGestureController *_textSelectionGestureController;
    _Bool _enabled;
    UIWebSelectionView *_selectionView;
}

@property (nonatomic, readonly) UIWebSelection *selection;
@property (nonatomic, readonly) UIView *view;
@property (retain, nonatomic) UIWebSelectionView *selectionView;
@property (nonatomic, readonly) struct CGRect selectionFrame;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *forcePressGestureRecognizer;
@property (nonatomic) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, readonly) _UIKeyboardTextSelectionController *textSelectionController;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)selectionChanged;
- (id)initWithView:(id)arg1;
- (void)showSelectionCommands;
- (id)scrollView;
- (_Bool)hasSelectablePositionAtPoint:(struct CGPoint)arg1;
- (void)clearSelection;
- (void)willRotate:(id)arg1;
- (void)didRotate:(id)arg1;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (void)configureForSelectionMode;
- (void)configureForHighlightMode;
- (void)addGestureRecognizersToView:(id)arg1;
- (void)willBeginGesture;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (void)updateSelectionRects:(_Bool)arg1;
- (void)setGestureRecognizers;
- (void)rangedMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint)arg2;
- (void)resignedFirstResponder;
- (void)layoutChangedByScrolling:(_Bool)arg1;
- (void)willStartScrollingOverflow;
- (void)didEndScrollingOverflow;
- (void)initializeSelectionView;
- (void)_addOneFingerForceGestures:(id)arg1 toView:(id)arg2;
- (void)makeWebSelection:(id)arg1;
- (void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)arg1;
- (void)addSelectionViewIfNeeded;
- (void)scaleChanged;
- (void)willStartScrollingOrZoomingPage;
- (void)didEndScrollingOrZoomingPage;
- (void)hideCallout;
- (_Bool)isSelectionGestureRecognizer:(id)arg1;
- (void)tap:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 fromView:(id)arg3;

@end
