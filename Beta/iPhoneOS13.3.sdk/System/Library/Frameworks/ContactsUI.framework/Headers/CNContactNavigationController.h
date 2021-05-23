/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UINavigationController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNAccountsAndGroupsDataSource, CNAccountsAndGroupsViewController, CNContactListStyleApplier, CNContactListViewController, CNContactStore, CNContactStoreDataSource, CNContactStyle, CNContactViewController, CNUIUserActivityManager, NSArray, NSString, UIAlertController, UIBarButtonItem, UIKeyCommand;

@protocol CNContactDataSource, CNContactNavigationControllerDelegate, CNScheduler;

@interface CNContactNavigationController : UINavigationController <Swift>

{
    CNContactListViewController *_contactListViewController;
    _Bool _allowsCardEditing;
    _Bool _allowsCardDeletion;
    _Bool _allowsCanceling;
    _Bool _allowsDone;
    _Bool _allowsContactBlocking;
    _Bool _hasPendingShowCard;
    _Bool _ignoresMapsData;
    _Bool _hideGroupsButton;
    CNContactStyle *_contactStyle;
    CNContactStore *_contactStore;
    CNContactViewController *_reusableContactViewController;
    CNAccountsAndGroupsViewController *_accountsAndGroupsViewController;
    CNAccountsAndGroupsDataSource *_accountsAndGroupsDataSource;
    long long _leftButtonBehavior;
    long long _rightButtonBehavior;
    CNContactStoreDataSource *_nonServerDataSource;
    CNContactViewController *_presentedContactViewController;
    UIKeyCommand *_addKeyCommand;
    UIAlertController *_facebookContactsAlertController;
    id <CNScheduler> _backgroundScheduler;
    id <CNScheduler> _mainThreadScheduler;
    CNUIUserActivityManager *_activityManager;
    CNContactListStyleApplier *_contactListStyleApplier;
    NSArray *_prohibitedPropertyKeys;
    UIBarButtonItem *_addContactBarButtonItem;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContactViewController *reusableContactViewController;
@property (weak, nonatomic) CNAccountsAndGroupsViewController *accountsAndGroupsViewController;
@property (retain, nonatomic) CNAccountsAndGroupsDataSource *accountsAndGroupsDataSource;
@property (nonatomic) long long leftButtonBehavior;
@property (nonatomic) long long rightButtonBehavior;
@property (retain, nonatomic) CNContactStoreDataSource *nonServerDataSource;
@property (weak, nonatomic) CNContactViewController *presentedContactViewController;
@property (retain, nonatomic) UIKeyCommand *addKeyCommand;
@property (weak, nonatomic) UIAlertController *facebookContactsAlertController;
@property (nonatomic, readonly) id <CNScheduler> backgroundScheduler;
@property (nonatomic, readonly) id <CNScheduler> mainThreadScheduler;
@property (nonatomic) _Bool hasPendingShowCard;
@property (retain, nonatomic) CNUIUserActivityManager *activityManager;
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier;
@property (nonatomic) _Bool ignoresMapsData;
@property (nonatomic) _Bool hideGroupsButton;
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (retain, nonatomic) UIBarButtonItem *addContactBarButtonItem;
@property (nonatomic) id <CNContactNavigationControllerDelegate> delegate;
@property (nonatomic, readonly) id <CNContactDataSource> dataSource;
@property (retain, nonatomic) CNContactStyle *contactStyle;
@property (nonatomic) _Bool allowsCardEditing;
@property (nonatomic) _Bool allowsCardDeletion;
@property (nonatomic) _Bool allowsCanceling;
@property (nonatomic) _Bool allowsDone;
@property (nonatomic) _Bool allowsContactBlocking;
@property (nonatomic) _Bool hidesSearchableSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newContactFormatter;

- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)applicationDidResume;
- (void)done:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)cancel:(id)arg1;
- (_Bool)contactListViewController:(id)arg1 canSelectContact:(id)arg2;
- (_Bool)contactListViewController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
- (void)contactListViewController:(id)arg1 didSelectContact:(id)arg2;
- (void)contactListViewController:(id)arg1 shouldPresentContact:(id)arg2 shouldScrollToContact:(_Bool)arg3;
- (void)presentAddContactViewController:(id)arg1 animated:(_Bool)arg2;
- (void)accountsAndGroupsViewControllerDidFinish:(id)arg1;
- (id)nextResponderForContactListViewController:(id)arg1;
- (id)initWithDataSource:(id)arg1 allowsLargeTitles:(_Bool)arg2;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 allowsLargeTitles:(_Bool)arg3;
- (id)initWithDataSource:(id)arg1 contactFormatter:(id)arg2 applyGroupFilterFromPreferences:(_Bool)arg3 environment:(id)arg4 allowsLargeTitles:(_Bool)arg5;
- (void)updateContactStyle:(id)arg1;
- (id)contactListViewController;
- (void)setShouldDisplayMeContactBanner:(_Bool)arg1;
- (_Bool)shouldDisplayMeContactBanner;
- (void)updateNavigationButtonsInSearchMode:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldShowGroupsButton;
- (_Bool)shouldShowLeftCancelAndRightDoneButton;
- (_Bool)shouldShowLeftCancelAndRightAddButton;
- (_Bool)shouldShowRightAddAndCancelButton;
- (_Bool)shouldShowRightCancelButton;
- (_Bool)shouldShowRightAddButton;
- (_Bool)canAddContacts;
- (void)updateLeftNavigationButtonAnimated:(_Bool)arg1;
- (void)updateNavigationButtonsInSearchMode:(_Bool)arg1;
- (void)updateNavigationButtonsAnimated:(_Bool)arg1;
- (void)presentGroupsViewController:(id)arg1;
- (id)addContactPresenter;
- (void)addContact:(id)arg1 animated:(_Bool)arg2;
- (void)showCardForContact:(id)arg1 resetFilter:(_Bool)arg2 resetSearch:(_Bool)arg3 fallbackToFirstContact:(_Bool)arg4 scrollToContact:(_Bool)arg5 animated:(_Bool)arg6;
- (id)reuseableContactViewControllerConfiguredForContact:(id)arg1 mode:(long long)arg2;
- (void)showCardForContact:(id)arg1 animated:(_Bool)arg2;
- (void)_cnui_presentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)showCardForContactAfterIndexPath:(id)arg1;
- (void)showCardForContactBeforeIndexPath:(id)arg1;
- (_Bool)isPresentedContactViewControllerVisible;
- (void)showCardForContactIfPossible:(id)arg1;
- (void)checkForInfoContentWithContext:(id)arg1;
- (void)popToContactListAndSaveChanges:(_Bool)arg1;
- (void)searchForString:(id)arg1;
- (void)beginSearch:(id)arg1;
- (void)cancelSearch:(id)arg1;
- (void)addContact:(id)arg1;
- (void)executeAddContact;
- (void)selectNextContact:(id)arg1;
- (void)selectPreviousContact:(id)arg1;
- (void)checkForFacebookContactsWithDelay:(double)arg1 allowAlert:(_Bool)arg2;
- (void)observeOtherFacebookContactsAlert;
- (void)otherFacebookContactsAlertDidSelectActionWithNotification:(id)arg1;
- (void)notifyOtherFacebookContactsAlertDidSelectAction;
- (id)userActivityRepresentingCurrentlyDisplayedContact;

@end
