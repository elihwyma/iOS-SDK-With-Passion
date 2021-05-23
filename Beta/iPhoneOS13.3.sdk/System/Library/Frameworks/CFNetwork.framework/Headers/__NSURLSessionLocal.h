/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFURLSession.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSURLSession, NSURLSessionConfiguration;

@protocol OS_dispatch_queue;

@interface __NSURLSessionLocal : __NSCFURLSession <Swift>

{
    unsigned long long _identSeed;
    struct XTubeManager *_tubeManager;
    NSMutableDictionary *_connectionsToTasks;
    NSMutableArray *_outstandingTasks;
    NSObject<OS_dispatch_queue> *_invalidateQueue;
    CDUnknownBlockType _invalidateCallback;
    const struct XCookieStorage *_xCookies;
    const struct XCredentialStorage *_xCreds;
    _Bool _xCookiesInitComplete;
    _Bool _xCredsInitComplete;
    struct mutex _xCookieStorageInitLock;
    struct mutex _xCredStorageInitLock;
    NSArray *_localProtocolClassesForDefaultSession;
    _Bool _isInvalid;
    NSURLSessionConfiguration *_proxyConfig;
    NSURLSession *_proxySession;
    NSMutableDictionary *_proxyDelegates;
    _Bool _shouldRecreateProxySession;
    NSURLSession *_sessionForCacheLookups;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, readonly) NSURLSessionConfiguration *_groupConfiguration;
@property (weak, readonly) NSURLSession *_groupSession;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
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
- (void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (id)connToTask:(id)arg1;
- (Class)sessionConnectionClass:(id)arg1 task:(id)arg2;
- (void)replaceTask:(id)arg1 withTask:(id)arg2;
- (id)copyTasks;
- (void)addConnectionlessTask:(id)arg1;
- (void)removeConnectionlessTask:(id)arg1;
- (void)_onqueue_connectUploadTask:(id)arg1 strippedRequest:(id)arg2 bodyStream:(id)arg3 bodyParts:(id)arg4;
- (void)_onqueue_canonicalizeTaskAndCreateConnection:(id)arg1;
- (void)_onqueue_configureAndCreateConnection:(id)arg1 task:(id)arg2;
- (unsigned long long)nextSeed;
- (id)taskForClassInfo:(id)arg1;
- (void)_onqueue_invokeInvalidateCallback;
- (void)_onqueue_checkForCompletion;
- (void)_onqueue_invalidateSession:(_Bool)arg1 withQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_flushOrResetStorage:(CDUnknownBlockType)arg1 reset:(unsigned char)arg2;
- (void)_useTLSSessionCacheFromSession:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)task:(id)arg1 terminatedConnection:(id)arg2;
- (struct XTubeManager *)_actualTubeManager;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (void)_withXURLCache:(CDUnknownBlockType)arg1;
- (const struct XCookieStorage *)_createXCookieStorage0;
- (const struct XCookieStorage *)_createXCookieStorage;
- (const struct XCredentialStorage *)_createXCredentialStorage0;
- (const struct XCredentialStorage *)_createXCredentialStorage;
- (void)_invalidateAllConnections;
- (void)_purgeIdleConnections;
- (void)invalidateUnpurgeableConnectionsForConnectionCacheKey:(struct HTTPConnectionCacheKey *)arg1;
- (id)_createTaskFromOriginalCFURLRequest:(id)arg1 updatedCFURLRequest:(id)arg2 connProps:(struct __CFDictionary *)arg3 sockProps:(struct __CFDictionary *)arg4;
- (const struct XCookieStorage *)copyBaseStorageForRequest:(id)arg1;
- (void)_getCookieHeadersForTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct __CFString *)_withConnectionCache_getCurrentSSLMethodForKey:(const struct HTTPConnectionCacheKey *)arg1 scheduling:(const struct CoreSchedulingSet *)arg2;
- (void)_withConnectionCache_setCurrentSSLMethod:(struct __CFString *)arg1 forKey:(const struct HTTPConnectionCacheKey *)arg2 scheduling:(const struct CoreSchedulingSet *)arg3;
- (_Bool)_withConnectionCache_enqueueRequest:(const struct HTTPRequestMessage *)arg1 forProtocol:(struct MetaConnectionCacheClient *)arg2 scheduling:(const struct CoreSchedulingSet *)arg3 options:(struct MetaConnectionOptions)arg4;
- (struct GlueTube *)_withConnectionCache_getPendingTubeForProtocol:(struct MetaConnectionCacheClient *)arg1 withKey:(const struct HTTPConnectionCacheKey *)arg2 scheduling:(const struct CoreSchedulingSet *)arg3;
- (id)_protocolClassesForTask:(id)arg1;
- (Class)_protocolClassForTask:(id)arg1;
- (Class)_protocolClassForTask:(id)arg1 skipAppSSO:(_Bool)arg2;
- (Class)_protocolClassForRequest:(id)arg1;
- (id)_createCanonicalRequest:(id)arg1 task:(id)arg2;
- (id)_createCanonicalRequestForTask:(id)arg1;
- (_Bool)_request:(id)arg1 isCacheEquivalentTo:(id)arg2;
- (_Bool)_cfurlRequest:(id)arg1 isCacheEquivalentTo:(id)arg2;
- (struct URLProtocol *)_newURLProtocolForTask:(id)arg1 client:(struct URLProtocolClient *)arg2 protocolClass:(Class)arg3;
- (struct URLProtocol *)_newURLProtocolForTask:(id)arg1 client:(struct URLProtocolClient *)arg2;
- (_Bool)_prependProtocolClassForDefaultSession:(Class)arg1;
- (void)_removeProtocolClassForDefaultSession:(Class)arg1;
- (id)_proxyDataTaskForRequest:(id)arg1 withDelegate:(id)arg2 uniqueIdentifier:(id)arg3;
- (id)_cacheOnlyDataTaskForRequest:(id)arg1 withDelegate:(id)arg2;
- (id)_delegateForTask:(id)arg1;
- (void)_URLSession:(id)arg1 companionAvailabilityChanged:(_Bool)arg2;
- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
