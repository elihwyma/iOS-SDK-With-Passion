/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection;

@protocol MLMediaLibraryServiceProtocol, OS_dispatch_queue;

@interface MLMediaLibraryService : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSXPCConnection *_serviceConnection;
    id <MLMediaLibraryServiceProtocol> _serviceProxy;
    NSMutableDictionary *_progressBlocksByUUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedMediaLibraryService;
+ (void)_setDaemonProcessInfo:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_serviceConnection;
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withProgressBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)mediaLibraryResourcesServiceListenerEndpointWithError:(id *)arg1;
- (void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)checkIntegrityOfDatabaseAtPath:(id)arg1 repairFaults:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)performDiagnosticWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setOptions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)lockDatabaseForReason:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unlockDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)getLanguageResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)performBackupOfDatabaseAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performRestoreOfLatestBackupForDatabaseAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)serviceTerminatedTransactionWithIdentifier:(id)arg1 error:(id)arg2;
- (void)importOperationWithIdentifier:(id)arg1 didUpdateWithProgress:(float)arg2;
- (_Bool)validateDatabaseAtPath:(id)arg1 error:(id *)arg2;

@end
