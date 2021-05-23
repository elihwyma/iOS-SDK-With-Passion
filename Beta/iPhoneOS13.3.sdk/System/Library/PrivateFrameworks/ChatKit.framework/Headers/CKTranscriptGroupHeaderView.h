/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CKConversation, CNComposeRecipientTextView, UIButton, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface CKTranscriptGroupHeaderView : UIView

{
    CKConversation *_conversation;
    CNComposeRecipientTextView *_textView;
    UIView *_separator;
    UIButton *_actionButton;
    _UIBackdropView *_backdropView;
}

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) CNComposeRecipientTextView *textView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) _UIBackdropView *backdropView;

- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 conversation:(id)arg2;

@end
