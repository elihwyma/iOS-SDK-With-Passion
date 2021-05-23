/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class AAAbsintheContext, AAAbsintheSignerContextCache, AAURLSession;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AAAbsintheSigner : NSObject

{
    struct os_unfair_lock_s _contextLock;
    NSObject<OS_dispatch_queue> *_contextQueue;
    NSObject<OS_dispatch_source> *_contextTimerSource;
    AAAbsintheSignerContextCache *_contextCache;
    double _cacheTimeout;
    AAURLSession *_session;
}

@property (retain, nonatomic) AAURLSession *session;
@property (nonatomic, readonly) AAAbsintheContext *context;
@property (nonatomic, readonly) double cacheTimeout;

+ (id)sharedSigner;
+ (CDUnknownBlockType)_contextCreationBlock;
+ (void)_setContextCreationBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)setContext:(id)arg1;
- (void)signatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCacheTimeout:(double)arg1;
- (void)_contextWithCompletion:(CDUnknownBlockType)arg1;
- (id)_contextLock_contextInvalidatingIfNecessary;
- (void)_contextLock_dequeueContextCleanup;
- (void)_contextLock_enqueueContextCleanup;
- (void)_contextQueue_contextWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchSessionInfoWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchCertificateDataWithCompletion:(CDUnknownBlockType)arg1;

@end
