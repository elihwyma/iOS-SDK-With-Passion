/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFAttachmentLibraryDataProvider, NSString;

@interface MFMessageLibrary : NSObject

{
    NSString *_path;
    MFAttachmentLibraryDataProvider *_attachmentDataProvider;
}

- (id)initWithPath:(id)arg1;
- (void)commit;
- (_Bool)isBusy;
- (id)dataProvider;
- (_Bool)shouldCancel;
- (id)sequenceIdentifierForMailbox:(id)arg1;
- (void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2;
- (id)urlForMailboxID:(long long)arg1;
- (id)mailboxUidForMessage:(id)arg1;
- (void)setMessage:(id)arg1 isPartial:(_Bool)arg2;
- (_Bool)areMessageContentsLocallyAvailable:(id)arg1 fullContentsAvailble:(_Bool *)arg2;
- (void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2;
- (void)setSummary:(id)arg1 forMessage:(id)arg2;
- (id)dataPathForMessage:(id)arg1;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)accountForMessage:(id)arg1;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(_Bool)arg3;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2;
- (id)messageWithLibraryID:(long long)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)fileAttributesForMessage:(id)arg1;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(_Bool)arg2 includeThreadSearchResults:(_Bool)arg3;
- (unsigned int)allNonDeleteCountForMailbox:(id)arg1 includeServerSearchResults:(_Bool)arg2 includeThreadSearchResults:(_Bool)arg3;
- (id)messagesWithSummariesForMailbox:(id)arg1 range:(struct _NSRange)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(long long)arg2 limit:(unsigned int)arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inRemoteMailbox:(id)arg3;
- (id)serverSearchResultMessagesForMailbox:(id)arg1;
- (id)dateOfOldestNonIndexedNonSearchResultMessageInMailbox:(id)arg1;
- (id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1;
- (id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned int)arg3;
- (id)messageWithMessageID:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)headerDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
- (id)dataForMimePart:(id)arg1 isComplete:(_Bool *)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(_Bool)arg3;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(_Bool *)arg3;
- (void)deleteDataForMessage:(id)arg1;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2;
- (void)compactMessages:(id)arg1;
- (void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3 forMessage:(id)arg4;
- (void)compactMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1;
- (_Bool)hasCompleteDataForMimePart:(id)arg1;
- (void)invalidateAccount:(id)arg1;
- (void)deleteMailboxes:(id)arg1 account:(id)arg2;
- (void)deleteAccount:(id)arg1;
- (_Bool)renameMailboxes:(id)arg1 to:(id)arg2;
- (long long)libraryIDForAccount:(id)arg1;
- (long long)createLibraryIDForAccount:(id)arg1;
- (unsigned long long)serverUnreadOnlyOnServerCountForMailbox:(id)arg1;
- (unsigned int)unreadCountForMailbox:(id)arg1;
- (unsigned int)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2;
- (long long)statusCountDeltaForMailbox:(id)arg1;
- (unsigned long long)mostRecentStatusCountForMailbox:(id)arg1;
- (void)setMostRecentStatusCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (long long)mailboxIDForURLString:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (void)closeDatabaseConnections;
- (void)postOldFlags:(unsigned long long)arg1 newFlags:(unsigned long long)arg2 forMessage:(id)arg3;
- (void)postFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)arg1 matchingCriterion:(id)arg2;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg1 includeServerSearchResults:(_Bool)arg2 includeThreadSearchResults:(_Bool)arg3;
- (id)getDetailsForMessagesWithRemoteIDInRange:(struct _NSRange)arg1 fromMailbox:(id)arg2;
- (id)remoteStoreForMessage:(id)arg1;
- (id)getDetailsForAllMessagesFromMailbox:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1 isPartial:(_Bool)arg2;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3;
- (void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2;
- (void)updateFlagsForMessagesInPlace:(id)arg1 success:(_Bool *)arg2;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 newMessagesByOldMessage:(id)arg3 remoteIDs:(id)arg4 setFlags:(unsigned long long)arg5 addPOPUIDs:(_Bool)arg6 dataSectionsByMessage:(id)arg7 generationWindow:(id)arg8;
- (void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg1 externalConversationID:(long long)arg2;
- (id)messagesForMailbox:(id)arg1 limit:(unsigned long long)arg2;
- (id)messagesWithoutSummariesForMailbox:(id)arg1;
- (id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(long long)arg2 limit:(unsigned int)arg3;
- (id)orderedBatchOfMessagesEndingAtRowId:(long long)arg1 limit:(unsigned int)arg2 success:(_Bool *)arg3;
- (unsigned int)deletedCountForMailbox:(id)arg1;
- (unsigned int)attachmentCountForMailboxes:(id)arg1;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)totalCountForMailbox:(id)arg1;
- (unsigned long long)unseenCountForMailbox:(id)arg1;
- (void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (void)setLastSyncAndMostRecentStatusCount:(long long)arg1 forMailbox:(id)arg2;
- (id)oldestMessageInMailbox:(id)arg1;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (unsigned int)maximumRemoteIDForMailbox:(id)arg1;
- (_Bool)canProvideMinimumRemoteID;
- (unsigned int)minimumRemoteIDForMailbox:(id)arg1;
- (id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(long long)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3;
- (id)getDetailsForMessages:(unsigned long long)arg1 absoluteBottom:(unsigned long long)arg2 topOfDesiredRange:(unsigned long long)arg3 range:(struct _NSRange *)arg4 fromMailbox:(id)arg5;
- (id)messagesWithMessageIDHeader:(id)arg1;
- (id)messageWithLibraryID:(long long)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3 temporarilyUnavailable:(_Bool *)arg4;
- (id)storedIntegerPropertyWithName:(id)arg1;
- (void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2;
- (void)compactMessages:(id)arg1 permanently:(_Bool)arg2;
- (void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(_Bool)arg2 andNotify:(_Bool)arg3;
- (id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (id)dataConsumerForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 success:(_Bool *)arg4;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 success:(_Bool *)arg3;
- (void)deletePOPUID:(id)arg1 inMailbox:(id)arg2;
- (id)UIDsToDeleteInMailbox:(id)arg1;
- (id)allUIDsInMailbox:(id)arg1;
- (id)hiddenPOPUIDsInMailbox:(id)arg1;
- (id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 forMailbox:(id)arg3 setFlags:(unsigned long long)arg4 createNewCacheFiles:(_Bool)arg5;
- (void)flagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 forMailbox:(id)arg3 setFlags:(unsigned long long)arg4 clearFlags:(unsigned long long)arg5 messageFlagsForMessages:(id)arg6 createNewCacheFiles:(_Bool)arg7;
- (_Bool)libraryExists;
- (void)lockDBForWriting;

@end
