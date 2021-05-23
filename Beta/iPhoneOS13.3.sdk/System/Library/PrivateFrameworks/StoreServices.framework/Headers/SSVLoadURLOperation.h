/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <ProtocolBuffer/NSOperation.h>

@class AKAppleIDSession, NSCachedURLResponse, NSData, NSHTTPURLResponse, NSMutableData, NSMutableSet, NSNumber, NSObject, NSRunLoop, NSString, NSURL, NSURLCache, NSURLRequest, SSBag, SSMetricsPageEvent, SSURLBag, SSURLRequestProperties, SSVFairPlaySAPSession, SSVSAPSignaturePolicy, SSVURLBagInterpreter, SSVURLDataConsumer;

@protocol OS_dispatch_queue, SSVLoadURLOperationDelegate;

@interface SSVLoadURLOperation : NSOperation

{
    AKAppleIDSession *_authKitSession;
    NSMutableData *_dataBuffer;
    SSVURLDataConsumer *_dataConsumer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSData *_inputData;
    _Bool _iTunesStoreRequest;
    long long _machineDataRetryCount;
    long long _machineDataStyle;
    SSMetricsPageEvent *_metricsPageEvent;
    CDUnknownBlockType _outputBlock;
    CDUnknownBlockType _prepareRequestBlock;
    NSMutableSet *_protocolRedirectURLs;
    _Bool _recordsMetrics;
    NSURL *_redirectURL;
    NSString *_referrerApplicationName;
    NSString *_referrerURLString;
    NSHTTPURLResponse *_response;
    NSRunLoop *_runLoop;
    SSVFairPlaySAPSession *_sapSession;
    SSVSAPSignaturePolicy *_sapSignaturePolicy;
    _Bool _shouldRetry;
    NSString *_storeFrontSuffix;
    _Bool _stopped;
    SSURLBag *_urlBag;
    SSVURLBagInterpreter *_urlBagInterpreter;
    SSURLRequestProperties *_requestProperties;
    NSURLRequest *_urlRequest;
    _Bool _shouldSuppressCookies;
    _Bool _shouldSuppressUserInfo;
    id <SSVLoadURLOperationDelegate> _delegate;
    SSBag *_bag;
}

@property long long machineDataStyle;
@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (copy) SSVSAPSignaturePolicy *SAPSignaturePolicy;
@property (weak, nonatomic) id <SSVLoadURLOperationDelegate> delegate;
@property (readonly) NSURL *URL;
@property (readonly) NSURLRequest *URLRequest;
@property (readonly) NSCachedURLResponse *cachedURLResponse;
@property (retain) SSVURLDataConsumer *dataConsumer;
@property (getter=isITunesStoreRequest) _Bool ITunesStoreRequest;
@property (readonly) SSMetricsPageEvent *metricsPageEvent;
@property (retain, nonatomic) SSBag *bag;
@property _Bool recordsMetrics;
@property (copy) NSString *referrerApplicationName;
@property (copy) NSString *referrerURLString;
@property (copy) NSString *storeFrontSuffix;
@property (readonly) NSHTTPURLResponse *URLResponse;
@property (copy) CDUnknownBlockType expiredOutputBlock;
@property (copy) CDUnknownBlockType outputBlock;
@property (copy) CDUnknownBlockType prepareRequestBlock;
@property _Bool shouldSuppressCookies;
@property _Bool shouldSuppressUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) _Bool isURLBagRequest;
@property (nonatomic, readonly) NSData *rawResponseData;
@property (nonatomic, readonly) SSURLRequestProperties *requestProperties;
@property (nonatomic, readonly) _Bool shouldDisableCellular;
@property (nonatomic, readonly) _Bool shouldRequireCellular;
@property (nonatomic, readonly) _Bool shouldSetCookies;
@property (nonatomic, readonly) NSData *sourceAppAuditTokenData;
@property (nonatomic, readonly) NSString *sourceAppBundleID;
@property (nonatomic, readonly) NSURLCache *URLCache;
@property (nonatomic, readonly) NSString *URLCacheID;

+ (id)currentAcceptLanguage;

- (id)init;
- (id)initWithURL:(id)arg1;
- (void)cancel;
- (void)main;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithURLRequest:(id)arg1;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (id)initWithURLRequestProperties:(id)arg1;
- (void)configureWithURLBagDictionary:(id)arg1;
- (id)_initSSVLoadURLOperation;
- (id)_newURLRequestWithRedirectURL:(id)arg1;
- (void)_stopRunLoop;
- (void)_finishWithData:(id)arg1;
- (void)_createAuthKitSession;
- (void)_runOnce;
- (void)_finishWithOutput:(id)arg1 error:(id)arg2;
- (_Bool)_shouldRetryAfterMachineDataRequest:(id)arg1;
- (void)_applyResponseToMetrics:(id)arg1;
- (id)_outputForData:(id)arg1 error:(id *)arg2;
- (void)_releaseOutputBlocks;
- (void)_configureWithURLBagInterpreter:(id)arg1;
- (void)_addMachineDataHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2;
- (void)_addSAPSignatureToRequest:(id)arg1;
- (void)_loadURLBagInterpreter;
- (void)_stopIfCancelled;
- (int)_runRunLoopUntilStopped;
- (void)_keepAliveTimer:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithEvent:(id)arg3 error:(id)arg4;
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;
- (void)configureWithURLBag:(id)arg1;
- (id)_dataForCachedResponse:(const struct _CFCachedURLResponse *)arg1;

@end
