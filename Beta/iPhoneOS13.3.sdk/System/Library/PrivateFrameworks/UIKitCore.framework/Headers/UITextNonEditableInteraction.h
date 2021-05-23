/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextInteraction.h>

__attribute__((visibility("hidden")))
@interface UITextNonEditableInteraction : UITextInteraction

- (void)oneFingerTapInUneditable:(id)arg1;
- (void)doubleTapInUneditable:(id)arg1;
- (void)toggleSelectionCommands;
- (id)initWithMode:(long long)arg1;
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4;
- (void)_oneFingerTapInUneditableActionAtLocation:(struct CGPoint)arg1 textInput:(id)arg2;

@end
