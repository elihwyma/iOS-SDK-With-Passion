/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class ASTAuthInfoResult, ASTContext, ASTProfileResult, ASTRequest, NSError, NSMutableDictionary, NSString;

@protocol ASTConnectionManager, ASTSessionDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ASTSession : NSObject

{
    _Bool _shouldContinueRequestLoop;
    _Bool _shouldUnenroll;
    _Bool _shouldAbort;
    id <ASTSessionDelegate> _delegate;
    unsigned long long _allowCellularSizeThreshold;
    ASTContext *_context;
    NSString *_sessionId;
    id <ASTConnectionManager> _connectionManager;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_clientStatusQueue;
    long long _retryCounter;
    long long _backoffCounter;
    NSObject<OS_dispatch_semaphore> *_backoffTimer;
    NSMutableDictionary *_runningTests;
    NSMutableDictionary *_pendingTestResults;
    ASTProfileResult *_pendingProfileResult;
    NSObject<OS_dispatch_semaphore> *_pendingProfileSemaphore;
    ASTRequest *_pendingPropertiesResult;
    NSObject<OS_dispatch_semaphore> *_pendingPropertiesSemaphore;
    ASTAuthInfoResult *_pendingAuthInfoResult;
    NSObject<OS_dispatch_semaphore> *_pendingAuthInfoSemaphore;
    long long _phase;
    CDUnknownBlockType _sessionTeardownCompletion;
    NSError *_clientStatusLoopError;
    CDUnknownBlockType _payloadSigner;
    CDUnknownBlockType _fileSigner;
}

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) id <ASTConnectionManager> connectionManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientStatusQueue;
@property (nonatomic) long long retryCounter;
@property (nonatomic) long long backoffCounter;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *backoffTimer;
@property (retain, nonatomic) NSMutableDictionary *runningTests;
@property (retain, nonatomic) NSMutableDictionary *pendingTestResults;
@property (retain, nonatomic) ASTProfileResult *pendingProfileResult;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pendingProfileSemaphore;
@property (retain, nonatomic) ASTRequest *pendingPropertiesResult;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pendingPropertiesSemaphore;
@property (retain, nonatomic) ASTAuthInfoResult *pendingAuthInfoResult;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pendingAuthInfoSemaphore;
@property (nonatomic) long long phase;
@property (nonatomic) _Bool shouldContinueRequestLoop;
@property (nonatomic) _Bool shouldUnenroll;
@property (nonatomic) _Bool shouldAbort;
@property (copy, nonatomic) CDUnknownBlockType sessionTeardownCompletion;
@property (retain, nonatomic) NSError *clientStatusLoopError;
@property (nonatomic, readonly) CDUnknownBlockType payloadSigner;
@property (nonatomic, readonly) CDUnknownBlockType fileSigner;
@property (weak, nonatomic) id <ASTSessionDelegate> delegate;
@property (nonatomic) unsigned long long allowCellularSizeThreshold;
@property (copy, nonatomic, readonly) ASTContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)auditToken:(CDStruct_6ad76789 *)arg1 hasEntitlement:(id)arg2;
+ (void)sessionExistsForSerialNumbers:(id)arg1 ticketNumber:(id)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)sessionExistsForIdentities:(id)arg1 ticketNumber:(id)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (_Bool)currentProcessHasEntitlement;
+ (void)requestAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_fetchAsset:(id)arg1 sessionId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)_destinationURLForAsset:(id)arg1 sessionId:(id)arg2;
+ (_Bool)shouldEvictCachedAssetForName:(id)arg1;
+ (id)_readContentsOfFileHandle:(id)arg1 error:(id *)arg2;
+ (void)_downloadAsset:(id)arg1 sessionId:(id)arg2 fileHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_destinationAssetDirectoryForSessionId:(id)arg1;
+ (id)sessionWithSerialNumber:(id)arg1;
+ (id)sessionWithIdentity:(id)arg1;
+ (id)sessionWithContext:(id)arg1;
+ (void)sessionExistsForSerialNumbers:(id)arg1 ticketNumber:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)sessionExistsForIdentities:(id)arg1 ticketNumber:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (void)invalidate;
- (void)start;
- (void)end;
- (id)initWithIdentity:(id)arg1;
- (id)initWithContext:(id)arg1;
- (_Bool)_profile;
- (void)_setup;
- (id)_sendRequest:(id)arg1;
- (void)_teardown;
- (void)_updateProgress:(id)arg1;
- (id)_abort;
- (void)_archive;
- (id)_idle;
- (void)updateAction:(id)arg1;
- (id)initWithSerialNumber:(id)arg1;
- (id)_signPayload:(id)arg1 error:(id *)arg2;
- (id)_signFile:(id)arg1 error:(id *)arg2;
- (_Bool)_authInfoIfNecessary;
- (void)_startClientStatusLoop;
- (void)_endAndUnenrollIfNecessary:(_Bool)arg1;
- (void)_cancelRunningTests;
- (id)_clientAbort;
- (id)_retryRequest;
- (_Bool)_validateCommand:(long long)arg1 clientStatus:(long long)arg2;
- (id)_updateUIWithData:(id)arg1;
- (id)_startNewTest:(id)arg1 data:(id)arg2;
- (id)_sendTestResults:(id)arg1;
- (id)_updateSessionSettingsWithData:(id)arg1;
- (id)_sendPropertiesWithData:(id)arg1;
- (id)_continueWithLastRequest:(id)arg1;
- (void)_protocolError;
- (_Bool)_shouldAllowCellularForSealedSealablePayload:(id)arg1;
- (void)_cancelControlExecution;
- (void)_removeDownloadedAssets;
- (void)_backoff;
- (void)requestAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_shouldAllowCellularForSealedTestResult:(id)arg1;
- (void)_abortRunningProcedures;
- (void)_cancelSendingTestResults;
- (void)connectionManagerRequestPaused:(id)arg1;
- (void)connectionManagerRequestResumed:(id)arg1;
- (void)connectionManager:(id)arg1 pausedSendingResultForTest:(id)arg2 reason:(long long)arg3;
- (void)connectionManager:(id)arg1 resumedSendingResultForTest:(id)arg2;
- (void)idle;
- (_Bool)sendAuthInfoResult:(id)arg1 error:(id *)arg2;
- (_Bool)sendProfileResult:(id)arg1 error:(id *)arg2;
- (_Bool)sendTestResult:(id)arg1 error:(id *)arg2;

@end
