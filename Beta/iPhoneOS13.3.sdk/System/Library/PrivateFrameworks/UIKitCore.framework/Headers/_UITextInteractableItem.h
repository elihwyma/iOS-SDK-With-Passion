/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UINotificationFeedbackGenerator, UIView, _UIHighlightView;

@protocol _UITextContent, _UITextItemInteracting, _UITextItemInteractionHandler;

__attribute__((visibility("hidden")))
@interface _UITextInteractableItem : NSObject

{
    UINotificationFeedbackGenerator *_feedbackGenerator;
    _UIHighlightView *_highlightView;
    id <_UITextItemInteractionHandler> _handler;
    UIView<_UITextItemInteracting> *_textItemInteractingView;
    id <_UITextContent> _textContent;
    struct _NSRange _range;
    struct CGPoint _location;
}

@property (nonatomic) struct _NSRange range;
@property (nonatomic) struct CGPoint location;
@property (weak, nonatomic) id <_UITextContent> textContent;
@property (retain, nonatomic) id <_UITextItemInteractionHandler> handler;
@property (weak, nonatomic) UIView<_UITextItemInteracting> *textItemInteractingView;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) unsigned long long _preferredContextMenuLayout;

+ (id)_sharedHighlightView;
+ (void)_removeHighlight;
+ (id)interactableAttachment:(id)arg1 range:(struct _NSRange)arg2 inTextItemInteractingView:(id)arg3 atLocation:(struct CGPoint)arg4;
+ (id)interactableLink:(id)arg1 range:(struct _NSRange)arg2 inTextItemInteractingView:(id)arg3 atLocation:(struct CGPoint)arg4;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)contextMenuConfiguration;
- (void)unhighlight;
- (_Bool)_allowInteraction:(long long)arg1;
- (_Bool)_allowHighlight;
- (void)highlight;
- (void)_warnForInvalidAction;
- (_Bool)isLink;
- (_Bool)isAttachment;
- (_Bool)canInvokeDefaultAction;
- (void)invokeDefaultAction;

@end
