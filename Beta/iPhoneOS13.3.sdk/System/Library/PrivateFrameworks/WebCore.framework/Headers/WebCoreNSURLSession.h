/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSOperationQueue, NSString, NSURLSessionConfiguration;

@protocol NSURLSessionTaskDelegate;

@interface WebCoreNSURLSession : NSObject

{
    struct RefPtr<WebCore::PlatformMediaResourceLoader, WTF::DumbPtrTraits<WebCore::PlatformMediaResourceLoader>> _loader;
    struct RetainPtr<id<NSURLSessionDelegate>> _delegate;
    struct RetainPtr<NSOperationQueue> _queue;
    struct RetainPtr<NSString> _sessionDescription;
    struct HashSet<WTF::RetainPtr<const void *>, WTF::PtrHash<WTF::RetainPtr<const void *>>, WTF::HashTraits<WTF::RetainPtr<const void *>>> _dataTasks;
    struct HashSet<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin>>, WTF::PtrHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin>>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin>>>> _origins;
    struct Lock _dataTasksLock;
    _Bool _invalidated;
    unsigned long long _nextTaskIdentifier;
    struct OSObjectPtr<NSObject<OS_dispatch_queue>*> _internalQueue;
    int _corsResults;
}

@property (readonly) struct PlatformMediaResourceLoader *loader;
@property (retain) id <NSURLSessionTaskDelegate> delegate;
@property (retain, readonly) NSOperationQueue *delegateQueue;
@property (copy, readonly) NSURLSessionConfiguration *configuration;
@property (copy) NSString *sessionDescription;
@property (readonly) _Bool didPassCORSAccessChecks;

- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (void)invalidateAndCancel;
- (void)finishTasksAndInvalidate;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)downloadTaskWithResumeData:(id)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;
- (void)getAllTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)dataTaskWithURL:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)downloadTaskWithURL:(id)arg1;
- (id)streamTaskWithNetService:(id)arg1;
- (id)initWithResourceLoader:(struct PlatformMediaResourceLoader *)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (_Bool)wouldTaintOrigin:(const struct SecurityOrigin *)arg1;
- (void)addDelegateOperation:(Function_15535652 *)arg1;
- (void)taskCompleted:(id)arg1;
- (void)task:(id)arg1 didReceiveCORSAccessCheckResult:(_Bool)arg2;
- (void)task:(id)arg1 didReceiveResponseFromOrigin:(Ref_4cc64869 *)arg2;

@end
