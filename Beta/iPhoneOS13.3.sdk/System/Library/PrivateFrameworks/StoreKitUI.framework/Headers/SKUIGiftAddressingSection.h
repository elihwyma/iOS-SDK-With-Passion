/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSString, SKUIGift, SKUIGiftRecipientTableViewCell, SKUIGiftTextTableViewCell, UITextView;

@protocol UITextFieldDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGiftAddressingSection : SKUIGiftTableViewSection

{
    double _footerHeight;
    NSString *_footerString;
    SKUIGift *_gift;
    UITextView *_messagingTextView;
    SKUIGiftRecipientTableViewCell *_recipientTableViewCell;
    id <UITextFieldDelegate> _textFieldDelegate;
    double _textViewCellHeight;
    SKUIGiftTextTableViewCell *_messageCell;
}

@property (retain, nonatomic) SKUIGiftTextTableViewCell *messageCell;
@property (retain, nonatomic) SKUIGift *gift;
@property (nonatomic) id <UITextFieldDelegate> textFieldDelegate;

- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (void)beginEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;
- (void)endEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithGiftConfiguration:(id)arg1;
- (id)_recipientTableViewCell;
- (id)_footerString;
- (id)_textFieldTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_attributedPlaceholderWithString:(id)arg1;

@end
