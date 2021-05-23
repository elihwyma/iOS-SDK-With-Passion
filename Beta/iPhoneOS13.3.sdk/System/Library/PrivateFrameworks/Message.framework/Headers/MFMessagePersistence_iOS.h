/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDMessagePersistence.h>

@class EDMailDropMetadataGeneratorFactory, EFLazyCache, MFMailMessageLibrary, MFMailMessageLibraryQueryTransformer, MFMessageTransformer, NSMutableDictionary, NSObject, NSString;

@protocol EFScheduler, MFMessageSummaryLoaderProvider, OS_dispatch_queue;

@interface MFMessagePersistence_iOS : EDMessagePersistence

{
    struct os_unfair_lock_s _summaryLock;
    NSMutableDictionary *_summaryLoaders;
    EFLazyCache *_obsoleteMessageIDHeaderHashToDatabaseIDMap;
    EDMailDropMetadataGeneratorFactory *_maildropContentItemGeneratorFactory;
    id <MFMessageSummaryLoaderProvider> _summaryLoaderProvider;
    MFMailMessageLibrary *_library;
    MFMailMessageLibraryQueryTransformer *_queryTransformer;
    MFMessageTransformer *_libraryMessageTransformer;
    id <EFScheduler> _networkContentLoadScheduler;
    id <EFScheduler> _offlineContentLoadScheduler;
    NSObject<OS_dispatch_queue> *_requestSummaryQueue;
}

@property (weak, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) MFMailMessageLibraryQueryTransformer *queryTransformer;
@property (retain, nonatomic) MFMessageTransformer *libraryMessageTransformer;
@property (retain, nonatomic) id <EFScheduler> networkContentLoadScheduler;
@property (retain, nonatomic) id <EFScheduler> offlineContentLoadScheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestSummaryQueue;
@property (retain, nonatomic) EDMailDropMetadataGeneratorFactory *maildropContentItemGeneratorFactory;
@property (retain, nonatomic) id <MFMessageSummaryLoaderProvider> summaryLoaderProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)enabledAccountMailboxesExpression;
- (unsigned long long)_countOfMessagesMatchingCriteria:(id)arg1 includingDuplicates:(_Bool)arg2;
- (void)_iterateMessagesMatchingQuery:(id)arg1 cancelationToken:(id)arg2 resultHandler:(id)arg3 monitor:(id)arg4;
- (id)libraryMessageForMessageObjectID:(id)arg1;
- (id)_requestSummaryForLibraryMessage:(id)arg1;
- (id)initWithMailboxPersistence:(id)arg1 database:(id)arg2 hookRegistry:(id)arg3 library:(id)arg4;
- (long long)countOfMessagesWithMessageIDHeaderHash:(id)arg1 matchingQuery:(id)arg2;
- (long long)countOfMessagesMatchingQuery:(id)arg1;
- (void)iterateMessagesMatchingQuery:(id)arg1 batchSize:(long long)arg2 firstBatchSize:(long long)arg3 limit:(long long)arg4 cancelationToken:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)iteratePersistedMessagesMatchingQuery:(id)arg1 limit:(long long)arg2 cancelationToken:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)messagesForPersistedMessages:(id)arg1 mailboxScope:(id)arg2;
- (id)persistedMessagesForDatabaseIDs:(id)arg1 requireProtectedData:(_Bool)arg2 temporarilyUnavailableDatabaseIDs:(id *)arg3;
- (id)persistedMessageForOutgoingMessage:(id)arg1 isDraft:(_Bool)arg2;
- (id)requestContentForMessageObjectID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)requestSummaryForMessageObjectID:(id)arg1;
- (id)cachedDatabaseIDsDictionaryForMessageIDHashes:(id)arg1;

@end
