/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNFuture, FAFamilyMember, NSNumber, NSString;

@protocol CNCancelable, CNSchedulerProvider, CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberContactsUpdating;

@interface CNUICoreFamilyMemberContactsController : NSObject

{
    NSNumber *_countOfFamilyMemberContacts;
    id <CNUICoreFamilyMemberContactsObserver> _observer;
    FAFamilyMember *_familyMember;
    id <CNUICoreFamilyMemberContactsModelFetching> _modelFetcher;
    id <CNUICoreFamilyMemberContactsUpdating> _familyMemberContactsUpdator;
    id <CNSchedulerProvider> _schedulerProvider;
    CNFuture *_countOfFamilyMemberContactsFuture;
    CNFuture *_updateContactListByAddingContactsFuture;
    CNFuture *_updateContactListByRemovingContactsFuture;
    id <CNCancelable> _contactStoreDidChangeToken;
}

@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) id <CNUICoreFamilyMemberContactsModelFetching> modelFetcher;
@property (nonatomic, readonly) id <CNUICoreFamilyMemberContactsUpdating> familyMemberContactsUpdator;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (retain, nonatomic) NSNumber *countOfFamilyMemberContacts;
@property (retain, nonatomic) CNFuture *countOfFamilyMemberContactsFuture;
@property (retain, nonatomic) CNFuture *updateContactListByAddingContactsFuture;
@property (retain, nonatomic) CNFuture *updateContactListByRemovingContactsFuture;
@property (retain, nonatomic) id <CNCancelable> contactStoreDidChangeToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CNUICoreFamilyMemberContactsObserver> observer;
@property (nonatomic, readonly) long long fetchStatus;

+ (id)contactByRemovingSensitiveDataFromContact:(id)arg1;
+ (id)propertyKeysContainingSenstiveData;

- (id)init;
- (void)dealloc;
- (void)updateListByAddingContacts:(id)arg1;
- (id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2;
- (void)setupChangeNotificationResponse;
- (id)initWithFamilyMember:(id)arg1 modelFetcher:(id)arg2 familyMemberContactsUpdator:(id)arg3 schedulerProvider:(id)arg4;
- (void)triggerCountOfFamilyMemberContactsFetch;
- (void)cancelCountOfFamilyMemberContactsFetch;
- (id)countOfFamilyMemberContactsFutureFromFetcher;
- (void)updateListByRemovingContacts:(id)arg1;

@end
