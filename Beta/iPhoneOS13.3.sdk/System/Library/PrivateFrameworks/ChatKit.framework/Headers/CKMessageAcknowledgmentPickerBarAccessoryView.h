/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/_UIContextMenuAccessoryView.h>

@class CKMessageAcknowledgmentPickerBarViewController, CKMessagePartChatItem;

__attribute__((visibility("hidden")))
@interface CKMessageAcknowledgmentPickerBarAccessoryView : _UIContextMenuAccessoryView

{
    _Bool _visible;
    CKMessageAcknowledgmentPickerBarViewController *_pickerViewController;
    CKMessagePartChatItem *_chatItem;
    struct CGRect _layoutBounds;
}

@property (nonatomic) _Bool visible;
@property (nonatomic) struct CGRect layoutBounds;
@property (retain, nonatomic) CKMessageAcknowledgmentPickerBarViewController *pickerViewController;
@property (retain, nonatomic) CKMessagePartChatItem *chatItem;

- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGPoint)attachmentOffsetWithReferenceFrame:(struct CGRect)arg1;
- (id)initWithChatItem:(id)arg1 layoutBounds:(struct CGRect)arg2;

@end
