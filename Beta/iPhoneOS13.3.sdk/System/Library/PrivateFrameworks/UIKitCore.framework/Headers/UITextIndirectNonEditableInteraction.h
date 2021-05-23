/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextIndirectEditableInteraction.h>

@class NSString, UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextIndirectNonEditableInteraction : UITextIndirectEditableInteraction

{
    _UIKeyboardTextSelectionController *_textSelectionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, readonly) _UIKeyboardTextSelectionController *textSelectionController;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;

- (void)dealloc;
- (id)initWithView:(id)arg1;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (void)willBeginGesture;
- (void)didEndGesture;
- (void)_setupControllersIfNecessaryWithView:(id)arg1;
- (void)finishSetup;
- (_Bool)shouldAllowWithTouchTypes:(id)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;

@end
