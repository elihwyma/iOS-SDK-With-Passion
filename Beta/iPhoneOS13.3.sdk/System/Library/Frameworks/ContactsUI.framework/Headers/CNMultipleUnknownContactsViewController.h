/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContactFormatter, CNContactStore, NSArray, NSMutableSet, NSString;

@protocol CNMultipleUnknownContactsViewControllerDelegate;

@interface CNMultipleUnknownContactsViewController : UITableViewController <Swift>

{
    CNContactStore *_contactStore;
    id <CNMultipleUnknownContactsViewControllerDelegate> _delegate;
    NSArray *_contacts;
    NSMutableSet *_createdContactIdentifiers;
    CNContactFormatter *_formatter;
}

@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSMutableSet *createdContactIdentifiers;
@property (retain, nonatomic) CNContactFormatter *formatter;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (weak, nonatomic) id <CNMultipleUnknownContactsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)contactFormatter;

- (void)_didComplete;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)initWithContacts:(id)arg1;
- (void)_showAddAllToContactsConfirmation;
- (void)_save:(id)arg1;
- (void)_createNewContacts:(id)arg1;
- (void)_addToExistingContacts:(id)arg1;
- (void)_presentUnknownContact:(id)arg1;
- (id)_existingMatchForUnknownContact:(id)arg1;
- (id)_updatedContact:(id)arg1 withPropertiesFromContact:(id)arg2;

@end
