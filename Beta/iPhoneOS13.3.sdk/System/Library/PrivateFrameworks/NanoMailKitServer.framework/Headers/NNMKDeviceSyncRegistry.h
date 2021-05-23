/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NNMKSQLiteConnection, NSDate, NSNumber, NSString;

@interface NNMKDeviceSyncRegistry : NSObject

{
    _Bool _isMessagesSyncSuspendedByConnectivity;
    _Bool _organizeByThread;
    _Bool _protectedContentChannelSupported;
    _Bool _recreatedFromScratch;
    NSString *_path;
    unsigned long long _fullSyncVersion;
    NSNumber *_supportsWebKit;
    double _deviceScreenWidth;
    double _deviceScreenScale;
    NSDate *_disconnectedSince;
    unsigned long long _currentDatabaseSchemaVersion;
    NNMKSQLiteConnection *_database;
}

@property (retain, nonatomic) NNMKSQLiteConnection *database;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic) unsigned long long fullSyncVersion;
@property (nonatomic) NSNumber *supportsWebKit;
@property (nonatomic) _Bool isMessagesSyncSuspendedByConnectivity;
@property (nonatomic) _Bool organizeByThread;
@property (nonatomic) double deviceScreenWidth;
@property (nonatomic) double deviceScreenScale;
@property (nonatomic) _Bool protectedContentChannelSupported;
@property (retain, nonatomic) NSDate *disconnectedSince;
@property (nonatomic) unsigned long long currentDatabaseSchemaVersion;
@property (nonatomic, readonly) _Bool recreatedFromScratch;

- (id)initWithPath:(id)arg1;
- (void)beginUpdates;
- (void)endUpdates;
- (id)mailboxes;
- (id)datesForIDSIdentifiersScheduledToBeResent;
- (id)mailboxWithId:(id)arg1;
- (id)oldestDateReceivedForMailboxId:(id)arg1;
- (id)syncedMessagesKeyedByMessageIdAfterDateReceived:(id)arg1 mailboxId:(id)arg2;
- (void)removeSyncedMessagesBeforeDateReceived:(id)arg1 mailbox:(id)arg2;
- (void)incrementSyncVersionForMailboxId:(id)arg1;
- (unsigned long long)syncVersionForMailboxId:(id)arg1;
- (void)_loadAllControlValues;
- (void)_setControlValueForKey:(id)arg1 withBlockForBinding:(CDUnknownBlockType)arg2;
- (void)_removeControlValueForKey:(id)arg1;
- (void)updateSyncActiveForMailbox:(id)arg1;
- (void)_deleteAllObjectsFromTable:(id)arg1 mailboxId:(id)arg2;
- (void)_insureTransactionFor:(CDUnknownBlockType)arg1;
- (void)updateSyncVersion:(unsigned long long)arg1 forMailboxId:(id)arg2;
- (void)_deleteAllObjectsFromTable:(id)arg1;
- (id)_selectSyncedMessagesWhere:(id)arg1 blockForBinding:(CDUnknownBlockType)arg2;
- (id)_selectSyncedMessagesIdsWhere:(id)arg1 count:(unsigned long long)arg2 blockForBinding:(CDUnknownBlockType)arg3;
- (unsigned long long)syncedMessagesCountForMailboxId:(id)arg1;
- (id)_selectSyncedAccountsWhere:(id)arg1 blockForBinding:(CDUnknownBlockType)arg2;
- (id)_selectMailboxesWhere:(id)arg1 blockForBinding:(CDUnknownBlockType)arg2;
- (void)deleteMailboxWithId:(id)arg1 startTransaction:(_Bool)arg2;
- (void)addOrUpdateMailbox:(id)arg1;
- (id)_mailboxFromCurrentRowInStatement:(struct sqlite3_stmt *)arg1;
- (id)_idsIdentifiersForObjectId:(id)arg1 type:(id)arg2;
- (id)_ungroupGroupedValue:(id)arg1;
- (void)cleanUpForFullSyncWithMailbox:(id)arg1;
- (void)cleanUpForInitialSync;
- (_Bool)containsSyncedMessageForMessageWithId:(id)arg1;
- (id)syncedMessageForMessageWithId:(id)arg1;
- (void)addOrUpdateSyncedMessage:(id)arg1;
- (void)removeSyncedMessageForMessageWithId:(id)arg1;
- (id)syncedMessagesForConversationWithId:(id)arg1;
- (id)syncedMessageIdsResendRequested;
- (id)syncedMessageIdsContentRequestedByUser;
- (id)firstSyncedMessageIdsContentNotSyncedOrRequestedByUser:(unsigned long long)arg1;
- (unsigned long long)syncedMessagesCount;
- (id)messageIdForSanitizedMessageId:(id)arg1;
- (id)allSyncedAccountsKeyedByAccountId;
- (id)syncedAccountForAccountWithId:(id)arg1;
- (void)addOrUpdateSyncedAccount:(id)arg1;
- (void)removeSyncedAccountForAccountWithId:(id)arg1;
- (id)syncedAccountIdsResendRequested;
- (unsigned long long)accountSourceTypeForMessageId:(id)arg1;
- (unsigned long long)accountSourceTypeForMailboxId:(id)arg1;
- (unsigned long long)accountSourceTypeForAccountId:(id)arg1;
- (id)accountIdForUsername:(id)arg1;
- (void)updateSourceType:(unsigned long long)arg1 forAccountId:(id)arg2;
- (id)syncEnabledMailboxes;
- (id)activeMailboxes;
- (void)deleteMailboxWithId:(id)arg1;
- (void)resetSyncRequestedFromMailboxes;
- (id)mailboxesForAccountId:(id)arg1;
- (void)insertDeletedMessageId:(id)arg1 mailboxId:(id)arg2;
- (id)mailboxIdForDeletedMessageId:(id)arg1;
- (void)deleteAllMailboxes;
- (void)updateSyncEnabledForMailbox:(id)arg1;
- (void)updateSyncRequestedForMailbox:(id)arg1;
- (void)setProgress:(long long)arg1 forComposedMessageWithId:(id)arg2;
- (long long)progressForComposedMessageWithId:(id)arg1;
- (id)pendingComposedMessageIds;
- (void)removePendingComposedMessages;
- (void)removeProgressForComposedMessageWithId:(id)arg1;
- (void)addObjectIds:(id)arg1 type:(id)arg2 resendInterval:(unsigned long long)arg3 forIDSIdentifierNotYetAckd:(id)arg4;
- (id)objectIdsForIDSIdentifierNotYetAckd:(id)arg1 type:(id *)arg2 resendInterval:(unsigned long long *)arg3;
- (id)objectIdsForType:(id)arg1;
- (id)typeForIDSIdentifierNotYetAckd:(id)arg1;
- (void)markIDSIdentifierAsAckd:(id)arg1;
- (void)rescheduleIDSIdentifier:(id)arg1 resendInterval:(unsigned long long)arg2 withDateToResend:(id)arg3 errorCode:(long long)arg4;
- (void)prepareIDSIdentifiersForResendForErrorCode:(long long)arg1;
- (void)deleteObjectId:(id)arg1 fromIDSIdentifiersNotYetAckdOfType:(id)arg2;
- (_Bool)hasMailboxSyncedActive;

@end
