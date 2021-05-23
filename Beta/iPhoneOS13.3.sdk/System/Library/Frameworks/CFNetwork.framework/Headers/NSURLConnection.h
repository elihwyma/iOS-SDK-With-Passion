/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSString, NSURLConnectionInternal, NSURLRequest;

@interface NSURLConnection : NSObject

{
    NSURLConnectionInternal *_internal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURLRequest *originalRequest;
@property (copy, readonly) NSURLRequest *currentRequest;

+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (id)connectionWithRequest:(id)arg1 delegate:(id)arg2;
+ (void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)canHandleRequest:(id)arg1;
+ (unsigned long long)_sweeperInterval;
+ (void)_setSweeperInterval:(unsigned long long)arg1;
+ (void)_setMIMETypesWithNoSizeLimit:(id)arg1;
+ (void)_setCollectsTimingData:(_Bool)arg1;
+ (_Bool)_collectsTimingData;
+ (void)_collectTimingDataWithOptions:(unsigned long long)arg1;
+ (unsigned long long)_timingDataOptions;
+ (struct __CFRunLoop *)resourceLoaderRunLoop;
+ (void)withResourceLoaderRunLoopAsync:(CDUnknownBlockType)arg1;
+ (void)_setLoaderThreadPriority:(int)arg1;

- (void)dealloc;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)cancel;
- (void)start;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(_Bool)arg3 maxContentLength:(long long)arg4 startImmediately:(_Bool)arg5 connectionProperties:(id)arg6;
- (void)setDelegateQueue:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(_Bool)arg3;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)download;
- (id)connectionProperties;
- (void)setDefersCallbacks:(_Bool)arg1;
- (_Bool)defersCallbacks;
- (id)_dlInternal;
- (id)_cfInternal;
- (void)_suspendLoading;
- (void)_resumeLoading;
- (id)_timingData;

@end
