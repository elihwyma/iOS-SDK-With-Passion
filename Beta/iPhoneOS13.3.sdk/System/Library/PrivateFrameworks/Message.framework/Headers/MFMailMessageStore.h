/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <MIME/MFMessageStore.h>

@class MFActivityMonitor, MFMailboxUid, MailAccount;

@interface MFMailMessageStore : MFMessageStore

{
    unsigned long long _state;
    struct {
        unsigned int isReadOnly:1;
        unsigned int hasUnsavedChangesToMessageData:1;
        unsigned int haveOpenLockFile:1;
        unsigned int compacting:1;
        unsigned int cancelInvalidation:1;
        unsigned int forceInvalidation:1;
        unsigned int isWritingChangesToDisk:1;
        unsigned int isTryingToClose:1;
        unsigned int compactOnClose:1;
        unsigned int reserved:23;
    } _flags;
    MFMailboxUid *_mailboxUid;
    MailAccount *_account;
    unsigned long long _deletedMessagesSize;
    unsigned long long _deletedMessageCount;
    unsigned long long _unreadMessageCount;
    unsigned long long _generationNumber;
    unsigned long long _lastFetchCount;
    MFActivityMonitor *_openMonitor;
}

+ (_Bool)createEmptyStoreForPath:(id)arg1;
+ (_Bool)storeAtPathIsWritable:(id)arg1;
+ (Class)classForMimePart;
+ (_Bool)createEmptyStoreIfNeededForPath:(id)arg1;
+ (Class)headersClass;

- (id)description;
- (void)close;
- (id)status;
- (id)displayName;
- (id)account;
- (unsigned long long)totalCount;
- (_Bool)isReadOnly;
- (void)setLibrary:(id)arg1;
- (id)mailboxUid;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)initWithMailboxUid:(id)arg1 readOnly:(_Bool)arg2;
- (void)invalidateFetchWindow;
- (void)didOpen;
- (void)messagesWereAdded:(id)arg1;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyOfAllMessages;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (unsigned long long)allNonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;
- (unsigned long long)fetchWindowCap;
- (unsigned long long)fetchWindow;
- (_Bool)shouldGrowFetchWindow;
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (void)allMessageFlagsDidChange:(id)arg1;
- (void)messagesWereCompacted:(id)arg1;
- (void)messagesWillBeCompacted:(id)arg1;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3 forMessage:(id)arg4;
- (_Bool)canCompact;
- (_Bool)isOpened;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (unsigned long long)unreadCount;
- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;
- (_Bool)hasMessageForAccount:(id)arg1;
- (void)openSynchronously;
- (unsigned long long)nonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(long long)arg1 limit:(unsigned int)arg2;
- (id)mutableCopyOfAllMessages;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (unsigned long long)growFetchWindow;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(_Bool)arg3;
- (unsigned long long)indexOfMessage:(id)arg1;
- (void)deleteMessages:(id)arg1 moveToTrash:(_Bool)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(_Bool)arg2;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (_Bool)allowsAppend;
- (void)doCompact;
- (void)writeUpdatedMessageDataToDisk;
- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2;
- (_Bool)supportsArchiving;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (_Bool)canFetchMessageIDs;
- (long long)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (unsigned long long)serverMessageCount;
- (_Bool)hasMoreFetchableMessages;
- (id)storeSearchResultMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 offset:(id)arg3 error:(id *)arg4;
- (_Bool)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(id)arg3;
- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (long long)fetchMobileSynchronously:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (void)_flushAllMessageData;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(_Bool)arg3;
- (_Bool)_shouldChangeComponentMessageFlagsForMessage:(id)arg1;
- (_Bool)_shouldChangeComponentMessageFlags;
- (void)openAsynchronously;
- (void)cancelOpen;
- (id)storePathRelativeToAccount;
- (_Bool)isDrafts;
- (void)structureDidChange;
- (void)deletedCount:(unsigned long long *)arg1 andSize:(unsigned long long *)arg2;
- (unsigned long long)serverUnreadCount;
- (unsigned long long)serverNonDeletedCount;
- (id)copyOfMessagesInRange:(struct _NSRange)arg1;
- (id)copyMessagesMatchingText:(id)arg1;
- (_Bool)canFetchSearchResults;
- (long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (id)storeSearchResultMatchingSearchText:(id)arg1 criterion:(id)arg2 limit:(unsigned int)arg3 offset:(id)arg4 error:(id *)arg5;
- (id)remoteIDsFromUniqueRemoteIDs:(id)arg1;
- (long long)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (void)undeleteMessages:(id)arg1;
- (void)messagesWereDeleted:(id)arg1;
- (id)messageForRemoteID:(id)arg1;
- (id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2;
- (id)uniqueRemoteIDsForMessages:(id)arg1;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;
- (_Bool)hasCachedDataForMimePart:(id)arg1;
- (void)setFlag:(id)arg1 state:(_Bool)arg2 forMessages:(id)arg3;
- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;
- (void)updateServerUnreadCountClosingConnection:(_Bool)arg1;
- (long long)fetchMobileSynchronously:(unsigned long long)arg1;
- (_Bool)setPreferredEncoding:(unsigned int)arg1 forMessage:(id)arg2;
- (_Bool)shouldDownloadBodyDataForMessage:(id)arg1;
- (_Bool)shouldDeleteInPlace;
- (_Bool)shouldArchive;
- (int)archiveDestination;
- (void)_rebuildTableOfContentsSynchronously;
- (id)messageIdRollCall:(id)arg1;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2;

@end
