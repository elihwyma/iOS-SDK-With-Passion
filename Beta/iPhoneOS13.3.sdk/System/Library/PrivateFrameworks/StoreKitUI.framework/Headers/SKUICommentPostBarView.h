/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUICommentPostBarTextField, UIButton, UILabel;

@protocol SKUICommentDelegate;

__attribute__((visibility("hidden")))
@interface SKUICommentPostBarView : UIView

{
    UIButton *_postButton;
    SKUICommentPostBarTextField *_postTextField;
    NSString *_commenter;
    UILabel *_asLabel;
    UIButton *_asNameButton;
    NSString *_asText;
    id <SKUICommentDelegate> _delegate;
}

@property (weak, nonatomic) id <SKUICommentDelegate> delegate;
@property (copy, nonatomic) NSString *commenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (void)tintColorDidChange;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setPlaceholderText:(id)arg1;
- (void)_post:(id)arg1;
- (void)_postComment;
- (id)_asLabel;
- (id)_asNameButton;
- (void)_changeCommenter:(id)arg1;
- (void)setAsText:(id)arg1;
- (void)setPostButtonText:(id)arg1;
- (void)setPostButtonVisible:(_Bool)arg1;

@end
