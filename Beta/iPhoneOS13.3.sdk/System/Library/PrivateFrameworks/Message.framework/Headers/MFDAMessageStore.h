/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFLibraryStore.h>

@class DAFolder;

@interface MFDAMessageStore : MFLibraryStore

{
    DAFolder *_DAFolder;
    _Bool _backedByVirtualAllSearchMailbox;
}

@property (nonatomic) _Bool backedByVirtualAllSearchMailbox;

- (id)folderIDForFetching;
- (_Bool)replayFlagChange:(id)arg1 forRemoteIDs:(id)arg2 error:(id *)arg3 completed:(_Bool *)arg4;
- (id)initWithMailboxUid:(id)arg1 readOnly:(_Bool)arg2;
- (unsigned long long)fetchWindow;
- (_Bool)shouldGrowFetchWindow;
- (_Bool)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 consumer:(id)arg4;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3 partial:(_Bool *)arg4;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(long long)arg1 limit:(unsigned int)arg2;
- (unsigned long long)growFetchWindow;
- (_Bool)bodyFetchRequiresNetworkActivity;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(_Bool)arg3;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(_Bool)arg2;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (_Bool)allowsAppend;
- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (_Bool)hasMoreFetchableMessages;
- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (_Bool)canFetchSearchResults;
- (long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (id)storeSearchResultMatchingSearchText:(id)arg1 criterion:(id)arg2 limit:(unsigned int)arg3 offset:(id)arg4 error:(id *)arg5;
- (id)messageForRemoteID:(id)arg1;
- (id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2;
- (_Bool)shouldDownloadBodyDataForMessage:(id)arg1;
- (void)_remoteIDsMatchingSearchText:(id)arg1 predicate:(id)arg2 limit:(unsigned int)arg3 offset:(id)arg4 filterByDate:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
- (id)_fetchBodyDataForSearchResult:(id)arg1 folderID:(id)arg2 format:(int)arg3 streamConsumer:(id)arg4;
- (id)_fetchBodyDataForNormalMessage:(id)arg1 format:(int)arg2 part:(id)arg3 streamConsumer:(id)arg4;
- (id)defaultAlternativeForPart:(id)arg1;
- (id)bestAlternativeForPart:(id)arg1;
- (_Bool)wantsLineEndingConversionForMIMEPart:(id)arg1;
- (id)fetchBodyDataForRemoteID:(id)arg1;
- (id)_downloadHeadersForMessages:(id)arg1;
- (_Bool)messageCanBeTriaged:(id)arg1;

@end
