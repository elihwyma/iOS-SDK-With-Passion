/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ContactsAutocompleteUI/CNComposeRecipientTextView.h>

@protocol CKComposeRecipientViewDelegate;

@interface CKComposeRecipientView : CNComposeRecipientTextView

{
    id <CKComposeRecipientViewDelegate> layoutDelegate;
}

@property (weak, nonatomic) id <CKComposeRecipientViewDelegate> layoutDelegate;

- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (struct UIEdgeInsets)layoutMargins;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;

@end
