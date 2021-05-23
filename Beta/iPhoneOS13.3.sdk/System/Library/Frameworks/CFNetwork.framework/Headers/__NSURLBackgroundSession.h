/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFURLSession.h>

@class NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSURL, NSXPCConnection;

@protocol NDBackgroundSessionProtocol, OS_dispatch_queue;

@interface __NSURLBackgroundSession : __NSCFURLSession

{
    unsigned long long _identSeed;
    id <NDBackgroundSessionProtocol> _remoteSession;
    NSXPCConnection *_xpcConn;
    NSMutableDictionary *_tasks;
    NSMutableArray *_taskIDsToFailOnReconnection;
    NSMutableSet *_taskIDsGettingAuthHeaders;
    NSObject<OS_dispatch_queue> *_invalidateQueue;
    CDUnknownBlockType _invalidateCallback;
    SmartBlockWithArgs_7064a8fd _backgroundSessionDidFinishAppWakeBlock;
    NSString *_appWakeUUID;
    NSURL *_downloadDirectory;
    NSURL *_assetDownloadDirectory;
    _Bool _isPrivileged;
    _Bool _isInvalid;
    _Bool _companionAvailable;
    unsigned long long _wifiRetainCount;
    NSError *_invalidationError;
    _Bool _tryToReconnect;
    _Bool _appWasLaunchedForBackgroundSessionSeen;
    int _notifyToken;
}

@property (copy) NSString *appWakeUUID;
@property (getter=isCompanionAvailable) _Bool companionAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (id)_dataTaskWithTaskForClass:(id)arg1;
- (id)_uploadTaskWithTaskForClass:(id)arg1;
- (id)_downloadTaskWithTaskForClass:(id)arg1;
- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4;
- (id)AVAggregateAssetDownloadTaskForURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;
- (id)webSocketTaskForRequest:(id)arg1;
- (id)webSocketTaskForURL:(id)arg1 protocols:(id)arg2;
- (void)_onqueue_flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onqueue_completeInvalidation:(_Bool)arg1;
- (void)_onqueue_resetStorageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onqueue_getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)copyTasks;
- (void)_onqueue_invokeInvalidateCallback;
- (void)_onqueue_invalidateSession:(_Bool)arg1 withQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_useTLSSessionCacheFromSession:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)backgroundTaskDidResume:(unsigned long long)arg1;
- (void)backgroundTaskDidSuspend:(unsigned long long)arg1;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveChallenge:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)backgroundTask:(unsigned long long)arg1 willBeginDelayedRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)backgroundTask:(unsigned long long)arg1 willPerformHTTPRedirection:(id)arg2 withNewRequest:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)backgroundTask:(unsigned long long)arg1 _willSendRequestForEstablishedConnection:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)backgroundTaskHasConnectionWaiting:(unsigned long long)arg1;
- (void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithReason:(long long)arg2;
- (void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithError:(id)arg2;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 transactionMetrics:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 transactionMetrics:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(unsigned long long)arg1 needNewBodyStream:(_Bool)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didCompleteWithError:(id)arg2 taskMetrics:(id)arg3 info:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)backgroundDataTask:(unsigned long long)arg1 didReceiveData:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)backgroundTask:(unsigned long long)arg1 getAuthHeadersForResponse:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)backgroundDataTaskDidBecomeDownloadTask:(unsigned long long)arg1;
- (void)willRetryBackgroundDataTask:(unsigned long long)arg1 withError:(id)arg2 transactionMetrics:(id)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didFinishDownloadingToURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)openFileAtPath:(id)arg1 mode:(int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)backgroundAVAssetDownloadTaskDidUpdateProgress:(unsigned long long)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didResolveMediaSelectionProperyList:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 willDownloadToURL:(id)arg2;
- (void)backgroundSessionDidStartAppWake:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)credStorage_getInitialCredentialDictionariesWithReply:(CDUnknownBlockType)arg1;
- (void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)credStorage_allCredentialsWithReply:(CDUnknownBlockType)arg1;
- (void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)moveFileForResumeData:(id)arg1 fromDirectory:(id)arg2 toDirectory:(id)arg3;
- (void)moveFileToTempForBackgroundResumeData:(id)arg1;
- (void)moveFileToBackgroundDownloadsDirectoryForLocalResumeData:(id)arg1;
- (id)backgroundResumeDataFromLegacyClientResumeData:(id)arg1;
- (id)backgroundResumeDataFromClientResumeData:(id)arg1;
- (id)backgroundDownloadsDirectory;
- (void)setupXPCConnection;
- (void)cleanupConfig;
- (void)sendInvalidationRequest;
- (id)cachesDirectory;
- (id)ensureRemoteSession;
- (void)setupBackgroundSession;
- (void)recreateExistingTasks:(id)arg1;
- (void)failDisconnectedTasks;
- (void)wentToBackground:(id)arg1;
- (void)cameIntoForeground:(id)arg1;
- (void)appWasLaunchedForBackgroundSession:(id)arg1;
- (id)taskForIdentifier:(unsigned long long)arg1;
- (void)_onqueue_disavowTask:(id)arg1;
- (void)setCookiesFromResponse:(id)arg1 forOriginalRequest:(id)arg2 partitionIdentifier:(id)arg3;
- (id)requestWithCookiesApplied:(id)arg1;
- (id)_onqueue_dummyTaskForClass:(Class)arg1 withRequest:(id)arg2 error:(id)arg3;
- (void)validateSerializabilityForRequest:(id)arg1 completion:(id)arg2;
- (void)validateUploadFile:(id)arg1;
- (id)placeholderErrorWithURL:(id)arg1;
- (id)disconnectedErrorWithURL:(id)arg1;
- (id)connectionLostErrorWithURL:(id)arg1;
- (void)performBlockOnQueueAndRethrowExceptions:(CDUnknownBlockType)arg1;
- (id)_onqueue_dataTaskWithTaskForClass:(id)arg1;
- (id)_onqueue_uploadTaskForClass:(id)arg1;
- (id)_onqueue_downloadTaskForResumeData:(id)arg1;
- (id)_onqueue_downloadTaskForRequest:(id)arg1;
- (id)_onqueue_downloadTaskWithTaskForClass:(id)arg1;
- (id)serializableAVAssetDownloadTaskOptionsFromOptions:(id)arg1;
- (id)_onqueue_AVAssetDownloadTaskForURLAsset:(id)arg1 URL:(id)arg2 destinationURL:(id)arg3 assetTitle:(id)arg4 assetArtworkData:(id)arg5 options:(id)arg6;
- (id)_onqueue_AVAggregateAssetDownloadTaskForURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;
- (void)_onqueue_retryDataTaskWithIdentifier:(unsigned long long)arg1;
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(id)arg2 propKey:(id)arg3;

@end
