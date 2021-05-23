/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextItemInteractionInteraction.h>

@class UILongPressGestureRecognizer, UITapGestureRecognizer, _UITextInteractableItem;

__attribute__((visibility("hidden")))
@interface _UITextSimpleLinkInteraction : UITextItemInteractionInteraction

{
    UITapGestureRecognizer *_linkTap;
    UILongPressGestureRecognizer *_highlighter;
    _UITextInteractableItem *_highlightedItem;
}

- (id)init;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)gesturesForFailureRequirements;
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_allowItemInteractions;
- (void)linkTapped:(id)arg1;
- (id)itemInteractableView;
- (_Bool)_beginInteractionSessionForLinkAtPoint:(struct CGPoint)arg1 asTap:(_Bool)arg2;
- (_Bool)_canBeginInteractionSessionForLinkAtPoint:(struct CGPoint)arg1 asTap:(_Bool)arg2;
- (id)textLinkInteractableView;
- (void)highlight:(id)arg1;

@end
