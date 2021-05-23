/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class CKMessagePartChatItem;

@protocol CKMessageAcknowledgmentPickerBarDelegate;

@interface CKMessageAcknowledgmentPickerBarViewController : UIViewController

{
    id <CKMessageAcknowledgmentPickerBarDelegate> _delegate;
    CKMessagePartChatItem *_chatItem;
}

@property (weak, nonatomic) id <CKMessageAcknowledgmentPickerBarDelegate> delegate;
@property (retain, nonatomic) CKMessagePartChatItem *chatItem;

- (void)loadView;
- (id)pickerView;
- (void)pickerBarItemViewSelectionDidChange:(id)arg1;
- (id)initWithChatItem:(id)arg1;
- (void)adjustTailRelativeSiblingViewFrame:(struct CGRect)arg1 pickerFrame:(struct CGRect)arg2;
- (void)performShowAnimation:(CDUnknownBlockType)arg1;
- (void)performSendAnimation:(CDUnknownBlockType)arg1;
- (void)performCancelAnimation:(CDUnknownBlockType)arg1;
- (void)adjustTailRelativeSiblingViewFrame:(struct CGRect)arg1;
- (struct CGRect)calculateFrameRelativeToSiblingViewFrame:(struct CGRect)arg1 withinBounds:(struct CGRect)arg2;

@end
