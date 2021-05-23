/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITextSelectionForceGesture.h>

@class NSString, UIKeyboardTaskQueue, _UIKeyboardTextSelectionController, _UIKeyboardTextSelectionGestureController;

@protocol _UINonEditableTextSelectionForceGestureDelegate;

@interface _UINonEditableTextSelectionForceGesture : _UITextSelectionForceGesture

{
    id <_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate;
    _UIKeyboardTextSelectionController *_textSelectionController;
    _UIKeyboardTextSelectionGestureController *_gestureController;
}

@property (retain, nonatomic) _UIKeyboardTextSelectionController *textSelectionController;
@property (retain, nonatomic) _UIKeyboardTextSelectionGestureController *gestureController;
@property (nonatomic) id <_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;

- (void)dealloc;
- (_Bool)_shouldDelayUntilForceLevelRequirementIsMet;
- (void)willBeginGesture;
- (id)initWithTextInput:(id)arg1;

@end
