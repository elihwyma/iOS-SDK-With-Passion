/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL, PLJournalFile;

@interface PLJournal : NSObject

{
    PLJournalFile *_snapshotJournal;
    PLJournalFile *_changeJournal;
    unsigned char _prepareMode;
    NSURL *_baseURL;
    Class _payloadClass;
    PLJournalFile *_pendingJournal;
    PLJournalFile *_prepareMarker;
}

@property (nonatomic, readonly) PLJournalFile *pendingJournal;
@property (nonatomic, readonly) PLJournalFile *prepareMarker;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) PLJournalFile *snapshotJournal;
@property (nonatomic, readonly) PLJournalFile *changeJournal;
@property (nonatomic, readonly) Class payloadClass;

+ (_Bool)snapshotFinishMarkerExistsForBaseURL:(id)arg1;
+ (id)metadataURLForBaseURL:(id)arg1 payloadClassId:(id)arg2 pending:(_Bool)arg3;
+ (id)journalURLForBaseURL:(id)arg1 payloadClassId:(id)arg2 journalType:(id)arg3;
+ (id)snapshotFinishMarkerURLForBaseURL:(id)arg1;
+ (_Bool)createSnapshotFinishMarkerForBaseURL:(id)arg1 error:(id *)arg2;
+ (_Bool)removeSnapshotFinishMarkerForBaseURL:(id)arg1 error:(id *)arg2;
+ (_Bool)finishSnapshotForBaseURL:(id)arg1 snapshotSucceeded:(_Bool)arg2 journals:(id)arg3 error:(id *)arg4;
+ (_Bool)recoverJournalsIfNecessaryForBaseURL:(id)arg1 payloadClasses:(id)arg2 error:(id *)arg3;

- (_Bool)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1 decodePayload:(_Bool)arg2 error:(id *)arg3;
- (id)initWithBaseURL:(id)arg1 payloadClass:(Class)arg2;
- (void)removeMetadata;
- (id)metadataURLPending:(_Bool)arg1;
- (_Bool)_removeMetadataPending:(_Bool)arg1 error:(id *)arg2;
- (_Bool)_replaceMetadataWithPendingMetadataError:(id *)arg1;
- (id)_readMetadataPending:(_Bool)arg1;
- (_Bool)_updateMetadataWithMetadata:(id)arg1 replace:(_Bool)arg2 pending:(_Bool)arg3 error:(id *)arg4;
- (_Bool)removeJournalFilesWithError:(id *)arg1;
- (_Bool)_isPendingJournalAuthoritative;
- (_Bool)_recoverJournalWithError:(id *)arg1;
- (_Bool)_finishSnapshot:(_Bool)arg1 error:(id *)arg2;
- (_Bool)prepareForSnapshotWithError:(id *)arg1;
- (_Bool)finishSnapshot:(_Bool)arg1 error:(id *)arg2;
- (_Bool)createSnapshotUsingNextPayloadBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)coalesceChangesToSnapshotWithError:(id *)arg1;
- (_Bool)appendChangeEntries:(id)arg1 error:(id *)arg2;
- (_Bool)enumeratePayloadsUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (unsigned long long)countOfInsertEntriesWithError:(id *)arg1;
- (unsigned long long)currentPayloadVersionWithError:(id *)arg1;

@end
