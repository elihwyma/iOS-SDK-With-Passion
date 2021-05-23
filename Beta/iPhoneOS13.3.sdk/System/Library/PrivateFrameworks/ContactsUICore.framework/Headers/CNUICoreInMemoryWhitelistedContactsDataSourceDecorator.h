/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNUICoreContactEditingSession, CNUICoreContactTypeAssessor, NSArray, NSString;

@protocol CNCancelable, CNSchedulerProvider, CNUICoreContactStoreFacade, CNUICoreFamilyInfoFetching, CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberWhitelistedContactsDataSource;

@interface CNUICoreInMemoryWhitelistedContactsDataSourceDecorator : NSObject

{
    id <CNUICoreFamilyMemberContactsObserver> _observer;
    id <CNUICoreFamilyMemberWhitelistedContactsDataSource> _dataSource;
    id <CNUICoreContactStoreFacade> _mainContactStore;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNUICoreFamilyInfoFetching> _familyInfoRetriever;
    CNUICoreContactTypeAssessor *_contactTypeAssessor;
    CNUICoreContactEditingSession *_editingSession;
    NSArray *_familyMemberContactItemsSnapshot;
    id <CNCancelable> _endEditingNotificationToken;
}

@property (nonatomic, readonly) id <CNUICoreFamilyMemberWhitelistedContactsDataSource> dataSource;
@property (nonatomic, readonly) id <CNUICoreContactStoreFacade> mainContactStore;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) id <CNUICoreFamilyInfoFetching> familyInfoRetriever;
@property (nonatomic, readonly) CNUICoreContactTypeAssessor *contactTypeAssessor;
@property (retain, nonatomic) CNUICoreContactEditingSession *editingSession;
@property (retain, nonatomic) NSArray *familyMemberContactItemsSnapshot;
@property (retain, nonatomic) id <CNCancelable> endEditingNotificationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CNUICoreFamilyMemberContactsObserver> observer;
@property (nonatomic, readonly) long long fetchStatus;
@property (nonatomic, readonly) NSArray *familyMemberContactItems;
@property (nonatomic, readonly) _Bool familyMemberContainerIsEmpty;

+ (id)modelBuilderForAddedContacts:(id)arg1 withContactTypeAssessor:(id)arg2;
+ (id)modelBuilderForUpdatedContacts:(id)arg1 withContactTypeAssessor:(id)arg2;

- (void)dealloc;
- (void)familyMemberContactItemsDidChange;
- (void)updateWhitelistByAddingContacts:(id)arg1;
- (void)updateWhitelistByRemovingContacts:(id)arg1;
- (id)contactRepresentingItem:(id)arg1;
- (id)initWithDataSource:(id)arg1 familyInfoRetriever:(id)arg2 schedulerProvider:(id)arg3;
- (void)notifyObserverContactItemsChange;
- (void)executeBlockIfEditingSessionNotInProgress:(CDUnknownBlockType)arg1;
- (void)startEditingSessionIfNecessaryWithSnapshotOfItems:(id)arg1;
- (id)familyMemberContactItemsFromDataSource;
- (id)familyMemberContactItemsFromDataSourceAugmentedWithInMemoryEdits;
- (id)contactTypeAssesor;
- (void)startImplicitEditngSessionForAnyItemsNotPersistedInItems:(id)arg1;
- (void)startEditingSessionIfNecessary;
- (void)persistInMemoryContactsWhitelistState;
- (void)updateWhitelistByUpdatingContacts:(id)arg1;
- (void)finishPersistenceOfInMemoryContactsWhitelistState;
- (void)flushEditingSession;
- (void)finishWhitelistedContactsTasks;
- (id)initWithDataSource:(id)arg1 schedulerProvider:(id)arg2;

@end
