/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXComposeRecipientView.h>

@class MFComposeRecipientTextView, NSMutableArray, NSString;

@interface PXMFComposeRecipientView : PXComposeRecipientView

{
    MFComposeRecipientTextView *_recipientTextView;
    struct CGSize _preferredSize;
    NSMutableArray *_internalRecipients;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)text;
- (void)setText:(id)arg1;
- (id)recipients;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)addRecipient:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)addRecipients:(id)arg1;
- (void)setSeparatorHidden:(_Bool)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)removeRecipients:(id)arg1;
- (id)addButton;
- (long long)maxRecipients;
- (void)setMaxRecipients:(long long)arg1;

@end
