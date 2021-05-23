/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSTextContainer, UITapGestureRecognizer, UIView;

@protocol WFTextAttachmentInteractionDelegate;

@interface WFTextAttachmentInteraction : NSObject

{
    UIView *_view;
    id <WFTextAttachmentInteractionDelegate> _delegate;
    NSTextContainer *_textContainer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct UIEdgeInsets _textContainerInset;
}

@property (weak, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id <WFTextAttachmentInteractionDelegate> delegate;
@property (retain, nonatomic) NSTextContainer *textContainer;
@property (nonatomic) struct UIEdgeInsets textContainerInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIView *view;

- (void)dealloc;
- (id)layoutManager;
- (id)textStorage;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (id)attachmentAtPoint:(struct CGPoint)arg1 characterRange:(out struct _NSRange *)arg2;
- (void)handleTextTap:(id)arg1;

@end
