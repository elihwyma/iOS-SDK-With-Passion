/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNFuture, NSArray, NSString;

@protocol CNCancelable, CNScheduler, CNSchedulerProvider, CNUICoreContactStoreFacade, CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyMemberContactsObserver;

@interface CNUICoreMainWhitelistedContactsController : NSObject

{
    NSArray *_familyMemberContactItems;
    id <CNUICoreFamilyMemberContactsObserver> _observer;
    id <CNUICoreFamilyMemberContactsModelFetching> _modelFetcher;
    id <CNUICoreContactStoreFacade> _mainContactStoreFacade;
    id <CNSchedulerProvider> _schedulerProvider;
    CNFuture *_familyMemberContactItemsFuture;
    CNFuture *_addContactsToWhitelistFuture;
    CNFuture *_updateContactsInWhitelistFuture;
    CNFuture *_deleteContactsFromWhitelistFuture;
    id <CNCancelable> _contactStoreDidChangeToken;
}

@property (nonatomic, readonly) id <CNUICoreFamilyMemberContactsModelFetching> modelFetcher;
@property (nonatomic, readonly) id <CNUICoreContactStoreFacade> mainContactStoreFacade;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) id <CNScheduler> backgroundOrImmediateScheduler;
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

+ (id)controllerWithOptions:(id)arg1 schedulerProvider:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)updateWhitelistByAddingContacts:(id)arg1;
- (void)updateWhitelistByRemovingContacts:(id)arg1;
- (id)contactRepresentingItem:(id)arg1;
- (void)updateWhitelistByUpdatingContacts:(id)arg1;
- (void)finishWhitelistedContactsTasks;
- (void)setupChangeNotificationResponse;
- (void)triggerContactItemsFetch;
- (void)cancelContactItemsFetch;
- (id)contactItemFutureFromFetcher;
- (id)initWiththOptions:(id)arg1 mainContactStoreFacade:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithModelFetcher:(id)arg1 mainContactStoreFacade:(id)arg2 schedulerProvider:(id)arg3;

@end
