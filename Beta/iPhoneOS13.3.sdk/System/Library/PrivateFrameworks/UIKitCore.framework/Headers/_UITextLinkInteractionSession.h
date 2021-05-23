/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITextItemInteractionInteraction, UIView;

@protocol UITextLinkInteraction;

__attribute__((visibility("hidden")))
@interface _UITextLinkInteractionSession : NSObject

{
    UITextItemInteractionInteraction *_interaction;
    UIView<UITextLinkInteraction> *_linkInteractionView;
}

- (void)dealloc;
- (_Bool)tapOnLinkWithGesture:(id)arg1;
- (_Bool)_allowItemInteractions;
- (id)initWithTextItemInteraction:(id)arg1;
- (_Bool)canInteractWithLinkAtPoint:(struct CGPoint)arg1;

@end
