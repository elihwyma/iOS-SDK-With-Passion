/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFMailMessageStore.h>

@class MFMailMessageLibrary, MFMessageCriterion, NSDate;

@interface MFLibraryStore : MFMailMessageStore

{
    MFMailMessageLibrary *_library;
    NSDate *_earliestReceivedDate;
    MFMessageCriterion *_criterion;
    unsigned long long _fetchWindow;
}

@property (retain, nonatomic) NSDate *earliestReceivedDate;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (unsigned int)defaultLoadOptions;
+ (id)storeWithCriterion:(id)arg1;
+ (id)storeWithMailbox:(id)arg1;
+ (_Bool)createEmptyStoreForPath:(id)arg1;
+ (_Bool)storeAtPathIsWritable:(id)arg1;

- (void)dealloc;
- (unsigned long long)totalCount;
- (id)URLString;
- (id)library;
- (void)setLibrary:(id)arg1;
- (_Bool)shouldCancel;
- (id)mailbox;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(_Bool)arg3;
- (id)criterion;
- (id)initWithMailboxUid:(id)arg1 readOnly:(_Bool)arg2;
- (id)initWithCriterion:(id)arg1;
- (id)initWithMailbox:(id)arg1;
- (void)_queueMessagesAdded:(id)arg1;
- (void)_queueMessageFlagsChanged:(id)arg1;
- (void)_queueMessagesWillBeCompacted:(id)arg1;
- (void)_queueMessagesWereCompacted:(id)arg1;
- (void)invalidateFetchWindow;
- (id)copyOfMessageInfos;
- (id)copyOfMessagesInRange:(struct _NSRange)arg1 options:(unsigned int)arg2 generation:(unsigned long long *)arg3;
- (id)copyOfMessagesInRange:(struct _NSRange)arg1 options:(unsigned int)arg2;
- (void)addCountsForMessages:(id)arg1 shouldUpdateUnreadCount:(_Bool)arg2;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyOfAllMessages;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (unsigned long long)_fetchWindowMultiple;
- (unsigned long long)_fetchWindowMinimum;
- (unsigned long long)allNonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;
- (unsigned long long)fetchWindowCap;
- (unsigned long long)fetchWindow;
- (_Bool)shouldGrowFetchWindow;
- (unsigned long long)_calculateFetchWindowWithAdditionalMultiple:(_Bool)arg1;
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (id)filterMessagesByMembership:(id)arg1;
- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (id)_memberMessagesWithCompactionNotification:(id)arg1;
- (_Bool)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 withConsumer:(id)arg4 downloadIfNecessary:(_Bool)arg5 didDownload:(_Bool *)arg6;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 usePartDatas:(_Bool)arg5 didDownload:(_Bool *)arg6;
- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (_Bool)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 consumer:(id)arg4;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 didDownload:(_Bool *)arg5;
- (id)_copyDataFromMimePart:(id)arg1 threshold:(unsigned int)arg2 downloadIfNecessary:(_Bool)arg3;
- (id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3 didDownload:(_Bool *)arg4;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3 partial:(_Bool *)arg4;
- (void)deleteBodyDataForMessage:(id)arg1;
- (void)compactMessages:(id)arg1;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3 forMessage:(id)arg4;
- (_Bool)canCompact;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (unsigned long long)unreadCount;
- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (void)purgeMessages:(id)arg1;
- (_Bool)hasMessageForAccount:(id)arg1;
- (void)handleMessagesAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)_addInvocationToQueue:(id)arg1;
- (void)handleMessageFlagsChanged:(id)arg1;
- (void)handleMessagesWillBeCompacted:(id)arg1;
- (void)handleMessagesCompacted:(id)arg1;
- (_Bool)hasCompleteDataForMimePart:(id)arg1;
- (void)openSynchronously;
- (unsigned long long)nonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;
- (id)messageWithLibraryID:(long long)arg1 options:(unsigned int)arg2;
- (id)copyOfMessageInfosMatchingCriterion:(id)arg1;
- (id)copyOfMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(long long)arg1 limit:(unsigned int)arg2;
- (id)mutableCopyOfAllMessages;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (id)sendersByLibraryIDForConversation:(long long)arg1 limit:(long long)arg2;
- (long long)oldestKnownConversation;
- (id)oldestKnownMessage;
- (id)serverSearchResults;
- (id)dateOfOldestNonIndexedNonSearchResultMessage;
- (void)willFetchMessages;
- (unsigned long long)growFetchWindow;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (_Bool)bodyFetchRequiresNetworkActivity;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(_Bool)arg3;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 didDownload:(_Bool *)arg5;
- (id)bodyDataForMessage:(id)arg1 isComplete:(_Bool *)arg2 isPartial:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (unsigned long long)indexOfMessage:(id)arg1;
- (void)deleteMessages:(id)arg1 moveToTrash:(_Bool)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(_Bool)arg2;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (_Bool)allowsAppend;
- (void)doCompact;
- (void)writeUpdatedMessageDataToDisk;
- (void)updateMetadata;
- (void)updateUserInfoToLatestValues;
- (void)_setNeedsAutosave;
- (id)newObjectCache;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2;

@end
