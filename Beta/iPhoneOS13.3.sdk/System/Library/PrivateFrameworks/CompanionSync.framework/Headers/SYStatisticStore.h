/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSOperationQueue, NSSet, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface SYStatisticStore : NSObject

{
    NSString *_path;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_insertIncoming;
    struct sqlite3_stmt *_addProcessingTimeIncoming;
    struct sqlite3_stmt *_addErrorIncoming;
    struct sqlite3_stmt *_markCompleteIncoming;
    struct sqlite3_stmt *_insertOutgoing;
    struct sqlite3_stmt *_updateOutgoingIdentifier;
    struct sqlite3_stmt *_updateOutgoing;
    struct sqlite3_stmt *_timestampForID;
    struct sqlite3_stmt *_reserveRowID;
    struct sqlite3_stmt *_responseReceived;
    struct sqlite3_stmt *_requestAcked;
    struct sqlite3_stmt *_logFileActivity;
    struct sqlite3_stmt *_updateFileOutgoing;
    long long _lastIncomingRowID;
    NSObject<OS_dispatch_queue> *_preemption_queue;
    NSObject<OS_dispatch_queue> *_operations_queue;
    NSOperationQueue *_presenterOperationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *presentedItemURL;
@property (retain, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

+ (id)sharedInstance;
+ (id)unpackMessageData:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (int)_closeDB;
- (void)_openDB;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;
- (void)_onQueueSync:(CDUnknownBlockType)arg1;
- (void)recordIncomingMessage:(id)arg1 forService:(id)arg2;
- (void)recordOutgoingMessage:(id)arg1 forService:(id)arg2;
- (void)updateOutgoingMessageWithIdentifier:(id)arg1 forService:(id)arg2 sentSuccessfully:(_Bool)arg3 sendError:(id)arg4;
- (void)updateOutgoingMessageWithIdentifier:(id)arg1 didReceiveResponse:(_Bool)arg2 error:(id)arg3;
- (void)updateLastIncomingMessageWithError:(id)arg1;
- (void)updateLastIncomingMessageWithProcessingTime:(double)arg1;
- (void)assignIdentifier:(id)arg1 toOutgoingMessage:(id)arg2;
- (void)confirmDeliveryOfOutgoingMessage:(id)arg1;
- (int)_getSchemaVersion;
- (struct sqlite3 *)dbRef;
- (void)recordOutgoingFileTransferAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 error:(id)arg4 forService:(id)arg5;
- (void)setFileTransferIdentifier:(id)arg1 forOutgoingMessagesWithRowIDs:(id)arg2;
- (unsigned long long)rowIDForPartialMessage:(id)arg1;
- (void)recordIncomingFileTransferAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 forService:(id)arg4;
- (void)updateOutgoingFileTransferWithIdentifier:(id)arg1 sentSuccessfully:(_Bool)arg2 error:(id)arg3;
- (void)_initializeFilePresentation;
- (void)_letGoForUnitTests:(id)arg1;
- (void)_ensureCorrectFileOwnership:(id)arg1;
- (_Bool)_openDBFile:(_Bool)arg1;
- (id)_unpackMetadata:(id)arg1;
- (id)_keySetForMessageLogTable;
- (void)_unpackPBRequest:(id)arg1 forMessageID:(unsigned short)arg2 intoDictionary:(id)arg3;
- (void)_unpackPBResponse:(id)arg1 forMessageID:(unsigned short)arg2 intoDictionary:(id)arg3;
- (id)_unpackMessageData:(id)arg1;
- (double)_getMachTimestamp;
- (_Bool)_tableEmpty:(id)arg1;
- (id)_openDBIfNecessary;
- (void)markLastIncomingMessageComplete;
- (void)confirmDeliveryOfOutgoingFileTransfer:(id)arg1;
- (id)operationQ;
- (id)_LOCKED_allServiceNames;
- (_Bool)_LOCKED_pruneMessageLogForServices:(id)arg1;
- (_Bool)_LOCKED_pruneFileTransferLogForServices:(id)arg1;
- (void)_pruneOldData;

@end
