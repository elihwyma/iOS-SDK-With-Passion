/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CNContactNavigationController, CNContactStoreDataSource, CNManagedConfiguration, FAFamilyMember, NSArray, NSMutableArray, NSPredicate, NSString, UIBarButtonItem, UINavigationController;

@protocol CNContactPickerContentDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPickerContentViewController : UIViewController

{
    _Bool _clientWantsSingleContact;
    _Bool _clientWantsSingleProperty;
    _Bool _clientWantsMultipleContacts;
    _Bool _clientWantsMultipleProperties;
    _Bool _clientHasContactsAccess;
    _Bool _hidesSearchableSources;
    _Bool _onlyRealContacts;
    _Bool _ignoresParentalRestrictions;
    _Bool _allowsEditing;
    _Bool _allowsCancel;
    _Bool _allowsDeletion;
    _Bool _hidesPromptInLandscape;
    id <CNContactPickerContentDelegate> _delegate;
    CNContactNavigationController *_contactNavigationController;
    CNContactStoreDataSource *_dataSource;
    NSMutableArray *_contactProperties;
    NSArray *_displayedPropertyKeys;
    long long _cardActions;
    NSString *_prompt;
    NSString *_bannerTitle;
    NSString *_bannerValue;
    NSPredicate *_predicateForEnablingContact;
    NSPredicate *_predicateForSelectionOfContact;
    NSPredicate *_predicateForSelectionOfProperty;
    CNManagedConfiguration *_managedConfiguration;
    FAFamilyMember *_familyMember;
    NSArray *_prohibitedPropertyKeys;
}

@property (retain, nonatomic) CNContactNavigationController *contactNavigationController;
@property (retain, nonatomic) CNContactStoreDataSource *dataSource;
@property (retain, nonatomic) NSMutableArray *contactProperties;
@property (copy, nonatomic) NSArray *displayedPropertyKeys;
@property (nonatomic) long long cardActions;
@property (nonatomic) _Bool hidesSearchableSources;
@property (nonatomic) _Bool onlyRealContacts;
@property (nonatomic) _Bool ignoresParentalRestrictions;
@property (nonatomic) _Bool allowsEditing;
@property (nonatomic) _Bool allowsCancel;
@property (nonatomic) _Bool allowsDeletion;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) _Bool hidesPromptInLandscape;
@property (copy, nonatomic) NSString *bannerTitle;
@property (copy, nonatomic) NSString *bannerValue;
@property (copy, nonatomic) NSPredicate *predicateForEnablingContact;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfContact;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfProperty;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (retain, nonatomic) FAFamilyMember *familyMember;
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (nonatomic) _Bool clientWantsSingleContact;
@property (nonatomic) _Bool clientWantsSingleProperty;
@property (nonatomic) _Bool clientWantsMultipleContacts;
@property (nonatomic) _Bool clientWantsMultipleProperties;
@property (nonatomic) _Bool clientHasContactsAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CNContactPickerContentDelegate> delegate;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) UIBarButtonItem *addContactBarButtonItem;

+ (id)descriptorForContactPropertiesSupportingPredicateEvaluation;

- (id)init;
- (void)invalidate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (void)invalidateSelectionAnimated:(_Bool)arg1;
- (void)contactNavigationControllerDidCancel:(id)arg1;
- (void)contactNavigationControllerDidComplete:(id)arg1;
- (_Bool)contactNavigationControllerShouldAddNewContact:(id)arg1;
- (_Bool)contactNavigationController:(id)arg1 canSelectContact:(id)arg2;
- (_Bool)contactNavigationController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2;
- (_Bool)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (_Bool)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)arg1;
- (_Bool)contactNavigationController:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3;
- (id)_validatePredicatesWithError:(id *)arg1;
- (void)_updatePromptWithViewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (id)descriptorsForKeysRequiredByDelegate;
- (void)_selectedContact:(id)arg1;
- (void)_selectedProperty:(id)arg1;
- (void)_selectedContacts:(id)arg1;
- (void)_selectedProperties:(id)arg1;

@end
