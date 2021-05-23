/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLConnectionInternal.h>

@class NSString, NSURLAuthenticationChallenge;

@interface NSURLConnectionInternalConnection : NSURLConnectionInternal

{
    int _cfConnLock;
    struct _CFURLConnection *_cfConn;
    struct _CFURLAuthChallenge *_currCFChallenge;
    NSURLAuthenticationChallenge *_currNSChallenge;
    struct __CFString *_fileName;
    _Bool _shouldSkipCancelOnRelease;
    long long _totalBytes;
    long long _expectedTotalBytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidate;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)cancel;
- (void)start;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_suspendLoading;
- (void)_resumeLoading;
- (void)_setDelegateQueue:(id)arg1;
- (id)initWithInfo:(const struct InternalInit *)arg1;
- (id)_timingData;
- (void)cleanupChallenges;
- (void)_setShouldSkipCancelOnRelease:(_Bool)arg1;
- (void)invokeForDelegate:(CDUnknownBlockType)arg1;
- (struct _CFURLConnection *)_CFURLConnection;
- (struct _CFURLConnection *)_atomic_CFURLConnection;
- (struct _CFURLConnection *)_retainCFURLConnection;
- (void)sendCFChallenge:(struct _CFURLAuthChallenge *)arg1 toSelector:(SEL)arg2;

@end
