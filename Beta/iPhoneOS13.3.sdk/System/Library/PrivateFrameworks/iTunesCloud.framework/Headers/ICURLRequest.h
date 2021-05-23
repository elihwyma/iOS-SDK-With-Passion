/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICRequestContext, ICURLResponseHandler, NSData, NSDictionary, NSError, NSMutableArray, NSMutableData, NSMutableDictionary, NSProgress, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSessionTask;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICURLRequest : NSObject

{
    NSMutableArray *_observers;
    NSMutableDictionary *_maxRetryCounts;
    NSMutableDictionary *_retryCounts;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_observerQueue;
    _Bool _prioritize;
    _Bool _cancelOnHTTPErrors;
    _Bool _extendedCertificateValidationRequired;
    NSProgress *_progress;
    ICRequestContext *_requestContext;
    unsigned long long _redirectCount;
    double _retryDelay;
    long long _requestState;
    NSData *_resumeData;
    ICURLResponseHandler *_responseHandler;
    NSURLRequest *_urlRequest;
    NSURLSessionTask *_task;
    long long _type;
    NSObject<OS_dispatch_semaphore> *_waitSemaphore;
    NSURLRequest *_currentURLRequest;
    NSURLResponse *_urlResponse;
    NSMutableData *_responseData;
    NSURL *_responseDataURL;
    NSError *_error;
    NSDictionary *_avDownloadOptions;
    long long _handlingType;
    NSString *_retryReason;
    double _startTime;
    double _lastUpdateTime;
    double _lastProgressUpdateTime;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) NSURLRequest *urlRequest;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitSemaphore;
@property (retain, nonatomic) NSURLRequest *currentURLRequest;
@property (retain, nonatomic) NSURLResponse *urlResponse;
@property (retain, nonatomic) NSMutableData *responseData;
@property (retain, nonatomic) NSURL *responseDataURL;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *avDownloadOptions;
@property (nonatomic) long long handlingType;
@property (retain, nonatomic) NSString *retryReason;
@property (nonatomic) double startTime;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) double lastProgressUpdateTime;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) _Bool prioritize;
@property (nonatomic) _Bool cancelOnHTTPErrors;
@property (nonatomic) unsigned long long maxRetryCount;
@property (copy, nonatomic, readonly) ICRequestContext *requestContext;
@property (nonatomic, readonly) unsigned long long retryCount;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) double retryDelay;
@property (nonatomic) long long requestState;
@property (copy, nonatomic, readonly) NSData *resumeData;
@property (nonatomic, getter=isExtendedCertificateValidationRequired) _Bool extendedCertificateValidationRequired;
@property (retain, nonatomic) ICURLResponseHandler *responseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)_defaultMaxRetryCountForReason:(id)arg1;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)updateState:(long long)arg1;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;
- (void)buildURLRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;
- (unsigned long long)_retryCountForReason:(id)arg1;
- (unsigned long long)_maxRetryCountForReason:(id)arg1;
- (void)_incrementRetryCountForReason:(id)arg1;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;
- (void)_setMaxRetryCount:(unsigned long long)arg1 forReason:(id)arg2;
- (void)_ensureValidRetryReason:(id)arg1;

@end
