/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDBugSessionConfiguration, DEDExtensionIdentifierManager, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol DEDClientProtocol, DEDFinisher><DEDSecureArchiving, DEDNotifier><DEDSecureArchiving, DEDUploadStatusDelegate, DEDWorkerProtocol, OS_dispatch_queue, OS_os_log;

@interface DEDBugSession : NSObject

{
    DEDBugSessionConfiguration *_config;
    NSString *_identifier;
    NSString *_deviceIdentifier;
    long long _priorClientTransportType;
    long long _priorWorkerTransportType;
    id <DEDUploadStatusDelegate> _uploadDelegate;
    NSMutableSet *_filePromises;
    CDUnknownBlockType _pingHandler;
    NSMutableArray *_deListCompletions;
    NSMutableDictionary *_deCompletions;
    NSMutableArray *_adoptFilesCompletions;
    NSMutableDictionary *_ongoingCompletionHandlers;
    DEDExtensionIdentifierManager *_identifierManager;
    NSDate *_uploadStartTime;
    NSMutableDictionary *_pendingOperations;
    CDUnknownBlockType _statusCompletionBlock;
    CDUnknownBlockType _syncCompletionBlock;
    NSDictionary *_cachedExtensions;
    id <DEDClientProtocol> _client;
    id <DEDWorkerProtocol> _worker;
    id <DEDFinisher><DEDSecureArchiving> __finisher;
    id <DEDNotifier><DEDSecureArchiving> __notifier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) NSObject<OS_os_log> *log;
@property (copy) CDUnknownBlockType pingHandler;
@property (retain) NSMutableArray *deListCompletions;
@property (retain) NSMutableDictionary *deCompletions;
@property (retain) NSMutableArray *adoptFilesCompletions;
@property (retain) NSMutableDictionary *ongoingCompletionHandlers;
@property (retain) DEDExtensionIdentifierManager *identifierManager;
@property (retain) NSDate *uploadStartTime;
@property (retain) NSMutableDictionary *pendingOperations;
@property (copy) CDUnknownBlockType statusCompletionBlock;
@property (copy) CDUnknownBlockType syncCompletionBlock;
@property (retain) NSDictionary *cachedExtensions;
@property (retain) DEDBugSessionConfiguration *config;
@property (retain) NSString *identifier;
@property (retain) id <DEDClientProtocol> client;
@property (retain) id <DEDWorkerProtocol> worker;
@property (retain) NSString *deviceIdentifier;
@property (retain) id <DEDFinisher><DEDSecureArchiving> _finisher;
@property (retain) id <DEDNotifier><DEDSecureArchiving> _notifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property long long priorClientTransportType;
@property long long priorWorkerTransportType;
@property (retain) id <DEDUploadStatusDelegate> uploadDelegate;
@property (readonly) NSArray *allExtensionIdentifiers;
@property (retain) NSMutableSet *filePromises;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)archivedClasses;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)cancel;
- (long long)state;
- (void)ping;
- (void)save;
- (id)initWithConfiguration:(id)arg1;
- (void)commit;
- (void)cleanup;
- (id)configuration;
- (id)shortDescription;
- (void)didCancel;
- (void)_cancel;
- (id)notifier;
- (void)syncStatus;
- (void)removeAttachment:(id)arg1;
- (void)removeFromStore;
- (_Bool)hasCapability:(id)arg1;
- (void)didCommit;
- (id)prettyDescription;
- (void)getStatus;
- (void)pong;
- (void)didStart;
- (void)scheduleNotification;
- (void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)didFinishAllUploads;
- (void)_logOperationQueue;
- (_Bool)isTarget;
- (void)startDiagnosticExtensionWithDEDIdentifier:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)storeCollectionCompletion:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;
- (id)finisher;
- (void)willPerformOperationWithID:(id)arg1 type:(long long)arg2 options:(id)arg3;
- (id)startDiagnosticExtensionWithIdentifier:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startDiagnosticExtensionWithDEDIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)didFinishOperation:(long long)arg1 withIdentifier:(id)arg2;
- (void)terminateExtension:(id)arg1 withInfo:(id)arg2;
- (void)cancelDiagnosticExtensionWithIdentifier:(id)arg1;
- (void)cancelDiagnosticExtensionWithDEDExtensionIdentifier:(id)arg1;
- (void)adoptFiles:(id)arg1;
- (id)ongoingCollectOperationsWithOperations:(id)arg1;
- (id)hashExtensions:(id)arg1;
- (void)clearNotification;
- (_Bool)shouldCollectDiagnosticWithId:(id)arg1;
- (CDUnknownBlockType)nextCompletionBlockForIdentifier:(id)arg1;
- (void)_terminateExtensionWithIdentifier:(id)arg1 info:(id)arg2;
- (_Bool)readyToCancel;
- (_Bool)readyToNotify;
- (_Bool)readyToFinish;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 identifiers:(id)arg3;
- (id)scheduledDeferredExtensionCollectionOperations;
- (id)ongoingExtensionCollectionOperations;
- (id)attachmentHandler;
- (_Bool)hasDirectory;
- (_Bool)hasStaleDirectory;
- (void)notifyPromiseCancellationIfNeeded:(id)arg1;
- (void)_streamOperationQueue;
- (void)attachCompletionHandlerForOngoingOperation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)attachCompletionHandlerForDEDExtensionIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)knownExtensions;
- (void)pingWithCallback:(CDUnknownBlockType)arg1;
- (void)listDiagnosticExtensionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSessionStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)synchronizeSessionStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)startDiagnosticExtensionWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startDiagnosticExtension:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelDiagnosticExtension:(id)arg1;
- (void)cancelDiagnosticExtensionWithIdentifier:(id)arg1 invocationNumber:(long long)arg2;
- (void)adoptFiles:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resumePendingOperations;
- (void)listAvailableExtensions;
- (void)supportsDiagnostics:(id)arg1;
- (void)didAdoptFilesWithError:(id)arg1;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2;
- (void)beginSessionSubmission;
- (void)presentNotification;
- (void)_clearNotification;
- (_Bool)isRunningDE:(id)arg1;
- (void)didTerminateDiagnosticExtension:(id)arg1;
- (void)didAdoptGroup:(id)arg1;

@end
