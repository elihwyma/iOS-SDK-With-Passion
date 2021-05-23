/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewCell.h>

@class CNContactPickerViewController, CNContactStore, MFComposeRecipientView, NSArray, NSAttributedString, NSString, SKUIGiftContactSearchController, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIGiftRecipientTableViewCell : UITableViewCell

{
    CNContactStore *_contactStore;
    CNContactPickerViewController *_contactPickerController;
    UILabel *_placeholderLabel;
    MFComposeRecipientView *_recipientView;
    SKUIGiftContactSearchController *_searchController;
    UIView *_topBorderView;
    _Bool _didLayoutSubviews;
    _Bool _leftToRight;
}

@property (nonatomic) _Bool didLayoutSubviews;
@property (nonatomic) _Bool leftToRight;
@property (copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *recipientAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_contactStore;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)presentSearchResultsPopover:(id)arg1 animated:(_Bool)arg2;
- (void)presentPeoplePickerPopover:(id)arg1 animated:(_Bool)arg2;
- (void)_sendDismissContactPicker;
- (void)_resetSearchController;
- (void)_sendDidChangeRecipients;
- (void)_sendDidUpdateSearchController;
- (void)searchController:(id)arg1 didSelectRecipient:(id)arg2;
- (void)searchControllerDidFinishSearch:(id)arg1;

@end
