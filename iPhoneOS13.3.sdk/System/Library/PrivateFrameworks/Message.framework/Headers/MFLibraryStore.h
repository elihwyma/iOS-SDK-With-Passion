//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFMailMessageStore.h>

@class MFMailMessageLibrary, MFMessageCriterion, NSDate;

@interface MFLibraryStore : MFMailMessageStore
{
    MFMailMessageLibrary *_library;
    NSDate *_earliestReceivedDate;
    MFMessageCriterion *_criterion;
    NSUInteger _fetchWindow;
}

+ (BOOL)storeAtPathIsWritable:(id)arg1;
+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)storeWithMailbox:(id)arg1;
+ (id)storeWithCriterion:(id)arg1;
+ (unsigned int)defaultLoadOptions;
@property(retain, nonatomic) NSDate *earliestReceivedDate; // @synthesize earliestReceivedDate=_earliestReceivedDate;
// - (void).cxx_destruct;
- (BOOL)hasCompleteDataForMimePart:(id)arg1;
- (void)_queueMessagesWereCompacted:(id)arg1;
- (void)_queueMessagesWillBeCompacted:(id)arg1;
- (void)_queueMessageFlagsChanged:(id)arg1;
- (void)_queueMessagesAdded:(id)arg1;
- (BOOL)hasMessageForAccount:(id)arg1;
- (void)purgeMessagesBeyondLimit:(NSUInteger)arg1 keepingMessage:(id)arg2;
- (void)purgeMessages:(id)arg1;
- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)newObjectCache;
- (NSUInteger)unreadCountMatchingCriterion:(id)arg1;
- (NSUInteger)unreadCount;
- (NSUInteger)serverUnreadOnlyOnServerCount;
- (id)URLString;
- (id)criterion;
- (void)_setNeedsAutosave;
- (void)updateUserInfoToLatestValues;
- (void)updateMetadata;
- (void)writeUpdatedMessageDataToDisk;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (void)compactMessages:(id)arg1;
- (void)doCompact;
- (BOOL)canCompact;
- (BOOL)allowsAppend;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (NSUInteger)indexOfMessage:(id)arg1;
- (void)deleteBodyDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL )arg2 isPartial:(BOOL )arg3 downloadIfNecessary:(BOOL)arg4;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id )arg2 isComplete:(BOOL )arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL )arg5;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id )arg2 isComplete:(BOOL )arg3 downloadIfNecessary:(BOOL)arg4 usePartDatas:(BOOL)arg5 didDownload:(BOOL )arg6;
- (id)_copyDataFromMimePart:(id)arg1 threshold:(unsigned int)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL )arg3 withConsumer:(id)arg4 downloadIfNecessary:(BOOL)arg5 didDownload:(BOOL )arg6;
- (id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL )arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL )arg5;
- (BOOL)_fetchDataForMimePart:(id)arg1 range:(NSRange)arg2 isComplete:(BOOL )arg3 consumer:(id)arg4;
- (id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id )arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(BOOL )arg4;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id )arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL )arg4;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (void)dealloc;
- (void)handleMessagesWillBeCompacted:(id)arg1;
- (void)handleMessagesCompacted:(id)arg1;
- (id)_memberMessagesWithCompactionNotification:(id)arg1;
- (void)handleMessageFlagsChanged:(id)arg1;
- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)handleMessagesAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (id)filterMessagesByMembership:(id)arg1;
- (NSUInteger)fetchWindowCap;
- (NSUInteger)fetchWindow;
- (NSUInteger)growFetchWindow;
- (BOOL)shouldGrowFetchWindow;
- (void)invalidateFetchWindow;
- (NSUInteger)_calculateFetchWindowWithAdditionalMultiple:(BOOL)arg1;
- (NSUInteger)_fetchWindowMinimum;
- (NSUInteger)_fetchWindowMultiple;
- (void)willFetchMessages;
- (id)dateOfOldestNonIndexedNonSearchResultMessage;
- (id)serverSearchResults;
- (id)oldestKnownMessage;
- (long long)oldestKnownConversation;
- (id)sendersByLibraryIDForConversation:(long long)arg1 limit:(long long)arg2;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)mutableCopyOfAllMessages;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(long long)arg1 limit:(unsigned int)arg2;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyOfMessagesInRange:(NSRange)arg1 options:(unsigned int)arg2;
- (id)copyOfMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1;
- (id)copyOfMessageInfosMatchingCriterion:(id)arg1;
- (id)copyOfMessageInfos;
- (id)copyOfMessagesInRange:(NSRange)arg1 options:(unsigned int)arg2 generation:(NSUInteger )arg3;
- (id)messageWithLibraryID:(long long)arg1 options:(unsigned int)arg2;
- (NSUInteger)allNonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2;
- (NSUInteger)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2;
- (NSUInteger)totalCount;
- (void)openSynchronously;
- (void)_addInvocationToQueue:(id)arg1;
- (BOOL)shouldCancel;
- (void)addCountsForMessages:(id)arg1 shouldUpdateUnreadCount:(BOOL)arg2;
- (id)mailbox;
- (id)library;
- (void)setLibrary:(id)arg1;
- (id)initWithMailbox:(id)arg1;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (id)initWithCriterion:(id)arg1;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;

@end

