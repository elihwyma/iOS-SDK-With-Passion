/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOApplicationAuditToken, GEOReportedProgress, NSData, NSMutableData, NSProgress, NSString, NSURL, NSURLSession, NSURLSessionTask;

@protocol GEORequestCounterTicket, OS_dispatch_queue, OS_os_log;

@interface GEOResourceLoadOperation : NSObject

{
    NSURL *_url;
    NSURL *_proxyURL;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    id <GEORequestCounterTicket> _requestCounterTicket;
    NSMutableData *_data;
    _Bool _expectsPartialContent;
    GEOApplicationAuditToken *_auditToken;
    NSURL *_authProxyURL;
    struct os_unfair_lock_s _lock;
    _Bool _requiresWiFi;
    _Bool _preferDirectNetworking;
    GEOReportedProgress *_progress;
    NSObject<OS_os_log> *_log;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSProgress *progress;
@property (nonatomic) _Bool requiresWiFi;
@property (nonatomic) _Bool preferDirectNetworking;
@property (nonatomic, readonly) NSData *data;

- (void)dealloc;
- (void)cancel;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURL:(id)arg4 proxyURL:(id)arg5 log:(id)arg6;

@end
