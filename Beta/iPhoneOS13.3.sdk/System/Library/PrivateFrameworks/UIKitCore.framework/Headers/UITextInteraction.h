/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UILongPressGestureRecognizer, UIResponder, UITextInteractionInputDelegate, UIView, _UIStatesFeedbackGenerator;

@protocol UITextInput, UITextInteractionDelegate, UITextInteraction_AssistantDelegate;

@interface UITextInteraction : NSObject <Swift>

{
    UITextInteraction *_parent;
    NSMutableArray *_children;
    NSMutableArray *_gestures;
    NSMutableDictionary *_gestureMap;
    _Bool _inGesture;
    long long _textInteractionMode;
    UILongPressGestureRecognizer *_customHighlighterGesture;
    _UIStatesFeedbackGenerator *_feedbackBehaviour;
    id <UITextInteractionDelegate> _delegate;
    UIResponder<UITextInput> *_textInput;
    UIView *_view;
    UITextInteractionInputDelegate *_interactionInputDelegate;
    id <UITextInteraction_AssistantDelegate> _assistantDelegate;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UITextInteractionInputDelegate *interactionInputDelegate;
@property (weak, nonatomic) id <UITextInteraction_AssistantDelegate> assistantDelegate;
@property (weak, readonly) UITextInteraction *parent;
@property (weak, readonly) UITextInteraction *root;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) NSArray *gestures;
@property (nonatomic, readonly) NSDictionary *gestureMap;
@property (nonatomic, setter=setInGesture:) _Bool inGesture;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackBehaviour;
@property (nonatomic, readonly) long long textInteractionSet;
@property (retain, nonatomic) UILongPressGestureRecognizer *_customHighlighterGesture;
@property (weak, nonatomic) id <UITextInteractionDelegate> delegate;
@property (weak, nonatomic) UIResponder<UITextInput> *textInput;
@property (nonatomic, readonly) long long textInteractionMode;
@property (nonatomic, readonly) NSArray *gesturesForFailureRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)textInteractionForMode:(long long)arg1;
+ (id)textInteractionsForSet:(long long)arg1;

- (id)init;
- (void)addChild:(id)arg1;
- (void)removeChild:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (id)_textInput;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)addGestureRecognizer:(id)arg1 withName:(id)arg2;
- (id)recognizerForName:(id)arg1;
- (void)_playFeedbackForCursorMovement;
- (_Bool)currentSelectionContainsPoint:(struct CGPoint)arg1;
- (void)_createFeedbackIfNecessary;
- (void)_prepareFeedbackForGesture;
- (void)_cleanUpFeedbackForGesture;
- (_Bool)doesControlDelegate;
- (_Bool)shouldHandleFormGestureAtLocation:(struct CGPoint)arg1;
- (id)defaultDoubleTapRecognizerWithAction:(SEL)arg1;
- (id)defaultTapRecognizerWithAction:(SEL)arg1;
- (_Bool)containerChangesSelectionOnOneFingerTap;
- (void)disableClearsOnInsertion;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;
- (_Bool)_shouldObscureTextInput;
- (id)interactionWithClass:(Class)arg1;
- (void)finishSetup;
- (_Bool)shouldAllowWithTouchTypes:(id)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (id)interactionWithGestureForName:(id)arg1;
- (id)_transientState;
- (void)_applyTransientState:(id)arg1;
- (void)cancelLinkInteractionSession;
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4;
- (void)_setLinkInteractionSession:(id)arg1;
- (_Bool)selection:(id)arg1 containsPoint:(struct CGPoint)arg2;
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)removeGestureRecognizerWithName:(id)arg1;
- (void)_cancelRecognizerWithName:(id)arg1;
- (void)_callDelegateWillMoveTextRangeExtentAtPoint:(struct CGPoint)arg1;
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3;
- (id)linkInteractionSession;
- (void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting:(id)arg1;
- (double)distanceBetweenPoint:(struct CGPoint)arg1 andRects:(id)arg2;
- (id)defaultTripleTapRecognizerWithAction:(SEL)arg1;

@end
