/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFTCPIOStreamTask.h>

@class NSString;

@interface __NSCFURLLocalTCPIOStreamTaskFromDataTask : __NSCFTCPIOStreamTask

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(CDUnknownBlockType)arg4;
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connectionWillFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey *)arg2;
- (void)connection:(id)arg1 challenged:(id)arg2 authCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;
- (void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 waitingWithReason:(long long)arg2;
- (void)connection:(id)arg1 _conditionalRequirementsChanged:(_Bool)arg2;
- (void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3;
- (void)connection:(id)arg1 needConnectedSocketToHost:(id)arg2 port:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)connection:(id)arg1 didReceiveTCPConnection:(shared_ptr_8da4e70b)arg2 extraBytes:(id)arg3;
- (id)initWithTask:(id)arg1 connection:(shared_ptr_8da4e70b)arg2 extraBytes:(id)arg3 disavow:(CDUnknownBlockType)arg4;

@end
