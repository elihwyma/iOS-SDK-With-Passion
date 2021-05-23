/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNFuture, NSArray, NSString;

@protocol CNCancelable, CNSchedulerProvider, CNUICoreContactStoreFacade, CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberContactsUpdating;

@interface CNUICoreFamilyMemberWhitelistedContactsController : NSObject

{
    NSArray *_familyMemberContactItems;
    id <CNUICoreFamilyMemberContactsObserver> _observer;
    id <CNUICoreFamilyMemberContactsModelFetching> _modelFetcher;
    id <CNUICoreFamilyMemberContactsUpdating> _familyMemberContactsUpdator;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNUICoreContactStoreFacade> _familyMemberScopedContactStore;
    id <CNUICoreContactStoreFacade> _mainContactStoreFacade;
    CNFuture *_familyMemberContactItemsFuture;
    CNFuture *_addContactsToWhitelistFuture;
    CNFuture *_updateContactsInWhitelistFuture;
    CNFuture *_deleteContactsFromWhitelistFuture;
    id <CNCancelable> _contactStoreDidChangeToken;
}

@property (nonatomic, readonly) id <CNUICoreFamilyMemberContactsModelFetching> modelFetcher;
@property (nonatomic, readonly) id <CNUICoreFamilyMemberContactsUpdating> familyMemberContactsUpdator;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) id <CNUICoreContactStoreFacade> familyMemberScopedContactStore;
@property (nonatomic, readonly) id <CNUICoreContactStoreFacade> mainContactStoreFacade;
@property (retain, nonatomic) NSArray *familyMemberContactItems;
@property (retain, nonatomic) CNFuture *familyMemberContactItemsFuture;
@property (retain, nonatomic) CNFuture *addContactsToWhitelistFuture;
@property (retain, nonatomic) CNFuture *updateContactsInWhitelistFuture;
@property (retain, nonatomic) CNFuture *deleteContactsFromWhitelistFuture;
@property (nonatomic, readonly) id <CNCancelable> contactStoreDidChangeToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CNUICoreFamilyMemberContactsObserver> observer;
@property (nonatomic, readonly) long long fetchStatus;
@property (nonatomic, readonly) _Bool familyMemberContainerIsEmpty;

+ (id)contactByRemovingSensitiveDataFromContact:(id)arg1;
+ (id)propertyKeysContainingSenstiveData;
+ (id)controllerWithFamilyMember:(id)arg1 options:(id)arg2 schedulerProvider:(id)arg3;

- (id)init;
- (void)dealloc;
- (void)updateWhitelistByAddingContacts:(id)arg1;
- (void)updateWhitelistByRemovingContacts:(id)arg1;
- (id)contactRepresentingItem:(id)arg1;
- (void)updateWhitelistByUpdatingContacts:(id)arg1;
- (void)finishWhitelistedContactsTasks;
- (id)initWithFamilyMember:(id)arg1 options:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithModelFetcher:(id)arg1 familyMemberContactsUpdator:(id)arg2 familyMemberScopedContactStoreFacade:(id)arg3 mainContactStoreFacade:(id)arg4 schedulerProvider:(id)arg5;
- (void)setupChangeNotificationResponse;
- (void)triggerContactItemsFetch;
- (void)cancelContactItemsFetch;
- (id)contactItemFutureFromFetcher;

@end
