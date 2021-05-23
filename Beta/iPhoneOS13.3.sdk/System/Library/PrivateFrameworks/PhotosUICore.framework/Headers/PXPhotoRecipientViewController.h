/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class CNContactPickerViewController, NSArray, NSLayoutConstraint, NSString, PXComposeRecipientView, PXRecipientSearchDataSourceManager, PXSearchRecipientController, UIBarButtonItem;

@protocol PXPhotoRecipientViewControllerDelegate;

@interface PXPhotoRecipientViewController : UIViewController

{
    NSLayoutConstraint *_recipientViewHeightConstraint;
    UIBarButtonItem *_addButton;
    id <PXPhotoRecipientViewControllerDelegate> _delegate;
    NSString *_fieldLabel;
    long long _maxRecipients;
    NSString *_initialLocalizedNameToQuery;
    CNContactPickerViewController *_contactPickerViewController;
    PXSearchRecipientController *_searchRecipientController;
    PXRecipientSearchDataSourceManager *_searchDataSourceManager;
    PXComposeRecipientView *_composeRecipientView;
    NSArray *_layoutConstraints;
}

@property (retain, nonatomic) NSString *initialLocalizedNameToQuery;
@property (retain, nonatomic) CNContactPickerViewController *contactPickerViewController;
@property (retain, nonatomic) PXSearchRecipientController *searchRecipientController;
@property (nonatomic, readonly) PXRecipientSearchDataSourceManager *searchDataSourceManager;
@property (retain, nonatomic) PXComposeRecipientView *composeRecipientView;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (weak, nonatomic) id <PXPhotoRecipientViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *fieldLabel;
@property (nonatomic) long long maxRecipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)_commonInitialization;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)updateViewConstraints;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)searchRecipientController:(id)arg1 didSelectRecipient:(id)arg2;
- (id)initWithInitialLocalizedNameToQuery:(id)arg1;
- (void)_presentContactPickerViewController:(id)arg1;
- (void)_dismissContactPickerViewController;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_updateAddButton;
- (void)_contactPicker:(id)arg1 didSelectContact:(id)arg2;

@end
