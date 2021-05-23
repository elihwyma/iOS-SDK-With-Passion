/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContact, CNContactContentViewController, CNContactFormatter, CNContactRecentsReference, CNContactStore, CNContainer, CNGroup, CNPolicy, NSArray, NSAttributedString, NSString, UIView, _UIAccessDeniedView, _UIRemoteViewController;

@protocol CNContactContentViewController, CNContactViewControllerDelegate, CNContactViewControllerPPTDelegate, CNContactViewControllerPrivateDelegate;

@interface CNContactViewController : UIViewController <Swift>

{
    long long _mode;
    _Bool _ignoreViewWillBePresented;
    _Bool _shouldShowLinkedContacts;
    _Bool _highlightedPropertyImportant;
    _Bool _requiresSetup;
    _Bool _showingMeContact;
    _Bool _shouldDrawNavigationBar;
    _Bool _editingProposedInformation;
    _Bool _allowsDisplayModePickerActions;
    _Bool _allowsEditPhoto;
    _Bool _ignoresParentalRestrictions;
    CNContact *_contact;
    NSArray *_displayedPropertyKeys;
    id <CNContactViewControllerDelegate> _delegate;
    CNContactStore *_contactStore;
    CNGroup *_parentGroup;
    CNContainer *_parentContainer;
    NSString *_alternateName;
    NSString *_message;
    CNContact *_contentContact;
    CNContactContentViewController *_contentViewController;
    _UIAccessDeniedView *_accessDeniedView;
    NSString *_highlightedPropertyKey;
    NSString *_highlightedPropertyIdentifier;
    NSArray *_extraBarButtonItems;
    NSArray *_preEditLeftBarButtonItems;
    UIViewController<CNContactContentViewController> *_viewController;
    CNPolicy *_policy;
    CNContact *_additionalContact;
    id <CNContactViewControllerPPTDelegate> _pptDelegate;
    NSArray *_prohibitedPropertyKeys;
    NSString *_initialPrompt;
    long long _displayMode;
    long long _editMode;
    long long _actions;
    CNContactFormatter *_contactFormatter;
    CNContactRecentsReference *_recentsData;
    NSString *_primaryPropertyKey;
    NSString *_importantMessage;
    NSString *_warningMessage;
    NSAttributedString *_verifiedInfoMessage;
    UIView *_contactHeaderView;
    UIViewController *_contactHeaderViewController;
}

@property (retain, nonatomic) CNContact *contentContact;
@property (retain, nonatomic) CNContactContentViewController *contentViewController;
@property (nonatomic, readonly) _UIAccessDeniedView *accessDeniedView;
@property (retain, nonatomic) NSString *highlightedPropertyKey;
@property (retain, nonatomic) NSString *highlightedPropertyIdentifier;
@property (nonatomic) _Bool highlightedPropertyImportant;
@property (retain, nonatomic) NSArray *extraBarButtonItems;
@property (nonatomic) _Bool requiresSetup;
@property (retain, nonatomic) NSArray *preEditLeftBarButtonItems;
@property (retain, nonatomic) UIViewController<CNContactContentViewController> *viewController;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) CNPolicy *policy;
@property (retain, nonatomic) CNContact *additionalContact;
@property (nonatomic) _Bool showingMeContact;
@property (weak, nonatomic) id <CNContactViewControllerPPTDelegate> pptDelegate;
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (retain, nonatomic) NSString *initialPrompt;
@property (nonatomic) _Bool shouldDrawNavigationBar;
@property (nonatomic) _Bool editingProposedInformation;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) long long displayMode;
@property (nonatomic) long long editMode;
@property (nonatomic) long long actions;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) CNContactRecentsReference *recentsData;
@property (nonatomic, readonly) id <CNContactViewControllerPrivateDelegate> privateDelegate;
@property (retain, nonatomic) NSString *primaryPropertyKey;
@property (nonatomic) _Bool allowsDisplayModePickerActions;
@property (nonatomic) _Bool allowsEditPhoto;
@property (nonatomic) _Bool ignoresParentalRestrictions;
@property (copy, nonatomic) NSString *importantMessage;
@property (copy, nonatomic) NSString *warningMessage;
@property (copy, nonatomic) NSAttributedString *verifiedInfoMessage;
@property (retain, nonatomic) UIView *contactHeaderView;
@property (retain, nonatomic) UIViewController *contactHeaderViewController;
@property (copy, nonatomic) NSArray *displayedPropertyKeys;
@property (weak, nonatomic) id <CNContactViewControllerDelegate> delegate;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNGroup *parentGroup;
@property (retain, nonatomic) CNContainer *parentContainer;
@property (copy, nonatomic) NSString *alternateName;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) _Bool allowsEditing;
@property (nonatomic) _Bool allowsActions;
@property (nonatomic) _Bool shouldShowLinkedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

+ (id)descriptorForRequiredKeys;
+ (id)viewControllerForContact:(id)arg1;
+ (id)viewControllerForUnknownContact:(id)arg1;
+ (id)viewControllerForNewContact:(id)arg1;
+ (id)viewControllerForUpdatingContact:(id)arg1 withPropertiesFromContact:(id)arg2;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)presentationControllerShouldDismiss:(id)arg1;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)_isDelayingPresentation;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isModalInPresentation;
- (void)_endDelayingPresentation;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)initWithMode:(long long)arg1;
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;
- (void)didCompleteWithContact:(id)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)isPresentingFullscreen:(_Bool)arg1;
- (void)isPresentingEditingController:(_Bool)arg1;
- (void)didChangePreferredContentSize:(struct CGSize)arg1;
- (void)viewDidAppear;
- (void)didExecuteClearRecentsDataAction;
- (void)didExecuteDeleteFromDowntimeWhitelistAction;
- (void)presentCancelConfirmationAlert;
- (void)_viewWillBePresented;
- (void)_setViewController:(id)arg1;
- (void)_setupViewController;
- (_Bool)_shouldBeOutOfProcess;
- (void)_prepareViewController;
- (id)navigationItemController;
- (void)editCancel:(id)arg1;
- (void)toggleEditing:(id)arg1;
- (id)_contactPresentedViewController;
- (id)_primaryPropertyStringForContact:(id)arg1;
- (void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2 important:(_Bool)arg3;
- (void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2;
- (void)presentConfirmCancelAlertControllerAnchoredAtButtonItem:(id)arg1;
- (id)confirmCancelAlertControllerAnchoredAtButtonItem:(id)arg1;
- (void)setContact:(id)arg1 additionalContact:(id)arg2 mode:(long long)arg3;
- (void)setDoneButtonText:(id)arg1 enabled:(_Bool)arg2;
- (void)updateEditNavigationItemsAnimated:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;
- (void)configureNavigationItem:(id)arg1;
- (void)enableSaveKeyboardShortcut;
- (void)enableCancelKeyboardShortcut;

@end
