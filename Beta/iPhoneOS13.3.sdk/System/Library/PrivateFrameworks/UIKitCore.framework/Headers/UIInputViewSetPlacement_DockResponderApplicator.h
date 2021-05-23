/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputViewSetPlacement_FloatingApplicator.h>

@class UIKeyboardPopoverContainer;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacement_DockResponderApplicator : UIInputViewSetPlacement_FloatingApplicator

{
    UIKeyboardPopoverContainer *_popover;
}

@property (retain, nonatomic) UIKeyboardPopoverContainer *popover;

- (_Bool)isEqual:(id)arg1;
- (void)invalidate;
- (struct UIEdgeInsets)contentInsets;
- (void)prepare;
- (id)draggableView;
- (_Bool)preBeginGesture:(id)arg1 shouldBegin:(_Bool *)arg2;
- (_Bool)isGesture:(id)arg1 inDraggableView:(struct CGPoint)arg2;
- (void)applyChanges:(id)arg1;
- (id)twoFingerDraggableView;
- (struct CGRect)popoverFrame;

@end
