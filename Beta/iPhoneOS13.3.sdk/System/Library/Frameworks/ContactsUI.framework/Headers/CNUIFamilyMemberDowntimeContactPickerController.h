/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContact, CNContactFormatter, CNContactViewController, CNUICoreContactEditingSession, CNUIFamilyMemberContactsEditingStrategy, CNUIFamilyMemberDowntimeContactDataSource, FAFamilyMember, NSArray, NSIndexPath, NSString, UISearchBar, UISearchController, UITableView;

@protocol CNUIFamilyMemberDowntimeContactPickerControllerDelegate;

@interface CNUIFamilyMemberDowntimeContactPickerController : UIViewController <Swift>

{
    _Bool _shouldPreselectFamilyMemberContacts;
    _Bool _initialSelectionPerformed;
    id <CNUIFamilyMemberDowntimeContactPickerControllerDelegate> _delegate;
    UITableView *_tableView;
    UISearchController *_searchController;
    UISearchBar *_searchBar;
    NSIndexPath *_presentedContactIndexPath;
    CNContactViewController *_contactViewController;
    CNContactFormatter *_contactCellLabelFormatter;
    CNContactFormatter *_contactCardWarningFormatter;
    CNUIFamilyMemberDowntimeContactDataSource *_dataSource;
    CNUIFamilyMemberContactsEditingStrategy *_editingStrategy;
    FAFamilyMember *_childFamilyMember;
    NSArray *_allFamilyMembers;
    CNContact *_preferredForNameMeContact;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) NSIndexPath *presentedContactIndexPath;
@property (retain, nonatomic) CNContactViewController *contactViewController;
@property (nonatomic, readonly) CNContactFormatter *contactCellLabelFormatter;
@property (nonatomic, readonly) CNContactFormatter *contactCardWarningFormatter;
@property (nonatomic, readonly) CNUIFamilyMemberDowntimeContactDataSource *dataSource;
@property (nonatomic, readonly) CNUICoreContactEditingSession *editingSessionFromContactViewController;
@property (nonatomic, readonly) CNUIFamilyMemberContactsEditingStrategy *editingStrategy;
@property (nonatomic, readonly) FAFamilyMember *childFamilyMember;
@property (nonatomic, readonly) NSArray *allFamilyMembers;
@property (nonatomic, readonly) CNContact *preferredForNameMeContact;
@property (nonatomic) _Bool initialSelectionPerformed;
@property (weak, nonatomic) id <CNUIFamilyMemberDowntimeContactPickerControllerDelegate> delegate;
@property (nonatomic) _Bool shouldPreselectFamilyMemberContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)familyCircle;
+ (id)descriptorForContactPropertiesSupportingPredicateEvaluation;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)done:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)initWithChildFamilyMember:(id)arg1 allFamilyMembers:(id)arg2 contactStore:(id)arg3;
- (id)initWithChildFamilyMember:(id)arg1 allFamilyMembers:(id)arg2 contactStore:(id)arg3 editingStrategy:(id)arg4;
- (void)setupUI;
- (void)setupTableView;
- (void)setupSearchController;
- (void)setupSearchBar;
- (void)configureNavigationItem;
- (void)startObservingKeyboardChanges;
- (void)keyboardWillChange:(id)arg1;
- (void)cancel:(id)arg1;
- (void)saveSanitizedSelectedContacts:(id)arg1;
- (id)warningMessageForContact:(id)arg1;

@end
