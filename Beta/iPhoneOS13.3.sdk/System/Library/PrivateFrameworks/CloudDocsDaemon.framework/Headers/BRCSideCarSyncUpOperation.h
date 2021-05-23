/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCAccountSession, NSString;

__attribute__((visibility("hidden")))
@interface BRCSideCarSyncUpOperation : _BRCOperation

{
    BRCAccountSession *_session;
    _Bool _shouldPerformAnotherBatch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (id)initWithSession:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (void)_markItemsFailedSync;
- (void)_syncUpRecordBatchWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 recordIDToZoneMap:(id)arg3 requestID:(unsigned long long)arg4;
- (struct PQLResultSet *)_itemsNeedingSyncUpEnumerator;
- (_Bool)shouldPerformAnotherBatch;

@end
