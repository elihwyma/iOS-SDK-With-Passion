/*
 Image: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, REMAccount, REMAccountChangeItem, REMObjectID, REMSaveRequest, REMStore;

@protocol CalReminderKitDatabaseMigrationContext, CalReminderKitProvider;

__attribute__((visibility("hidden")))
@interface CalReminderMigrationContext : NSObject

{
    id <CalReminderKitDatabaseMigrationContext> _remDatabaseMigrationContext;
    REMStore *_reminderStore;
    REMSaveRequest *_saveRequest;
    REMAccountChangeItem *_localAccountChangeItem;
    REMObjectID *_defaultListMigratedIdentifier;
    NSMutableArray *_orderedListChangeItemsStack;
    _Bool _accountsLoaded;
    NSDictionary *_accountsForAccountIdentifiers;
    REMAccount *_localAccount;
    NSMutableDictionary *_accountChangeItemsForAccountIdentifiers;
    _Bool _recordedAnyFatalFailures;
    id <CalReminderKitProvider> _reminderKitProvider;
    NSString *_defaultListOriginalIdentifier;
}

@property (nonatomic, readonly) id <CalReminderKitProvider> reminderKitProvider;
@property (nonatomic, readonly) _Bool shouldPerformMigration;
@property (nonatomic, readonly) _Bool shouldDeleteMigratedData;
@property (nonatomic, readonly) REMSaveRequest *saveRequest;
@property (nonatomic, readonly) REMAccountChangeItem *localAccountChangeItem;
@property (retain, nonatomic) NSString *defaultListOriginalIdentifier;
@property (nonatomic, readonly) REMObjectID *defaultListMigratedIdentifier;
@property (nonatomic, readonly) _Bool isCurrentOrderedListItemsContextEmpty;

- (_Bool)_setup;
- (_Bool)ensureAccountsExist:(id)arg1;
- (id)reminderStore;
- (void)_loadAccountsIfNeeded;
- (_Bool)finishMigrationWithSave:(_Bool)arg1;
- (void)_willBeginMigration;
- (void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3;
- (id)accountsForAccountIdentifiers;
- (void)_verifyAccountHasNoLists:(id)arg1 withAccountIdentifier:(id)arg2;
- (void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedTo:(id)arg4;
- (void)_sortAddedReminderListsInAccountChangeItem:(id)arg1;
- (id)_sortedAddedListChangeItems;
- (void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedTo:(id)arg4 isFatal:(_Bool)arg5;
- (void)_didEndMigrationWithSuccess:(_Bool)arg1;
- (_Bool)_tryBeginMigration;
- (id)_initWithReminderKitProvider:(id)arg1;
- (id)existingAccountChangeItemWithAccountIdentifier:(id)arg1;
- (void)recordAddedListChangeItem:(id)arg1 withOriginalIdentifier:(id)arg2 order:(id)arg3;
- (void)pushOrderedListItemsContext;
- (void)popOrderedListItemsContextAndSortListsInAccountChangeItem:(id)arg1;

@end
