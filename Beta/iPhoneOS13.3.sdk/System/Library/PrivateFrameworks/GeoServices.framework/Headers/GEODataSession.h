/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODataURLSession, NSString;

@protocol GEODataSession, OS_dispatch_queue;

@interface GEODataSession : NSObject

{
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    id <GEODataSession> _urlSession;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (nonatomic, readonly) GEODataURLSession *urlSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedDataSession;
+ (void)asynchronousGetURL:(id)arg1 kind:(CDStruct_d1a7ebee)arg2 requestCounterTicket:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

- (id)init;
- (void)asynchronousGetURL:(id)arg1 kind:(CDStruct_d1a7ebee)arg2 requestCounterTicket:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithUrlSession:(id)arg1;
- (id)taskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)downloadTaskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)taskWithRequest:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)manifestManager;

@end
