/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

#import <AuthKit/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;

@protocol OS_dispatch_queue;

@interface AKURLSession : NSObject <Swift>

{
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSMutableDictionary *_tasksByIdentifier;
    _Bool __usesAppleIDContext;
}

@property (nonatomic) _Bool _usesAppleIDContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)removeAllCachedResponses;
+ (id)sharedAnisetteFreeURLSession;
+ (id)_createURLSessionUsesAppleIDContext:(_Bool)arg1;
+ (id)_urlBagCache;
+ (id)sharedURLSession;
+ (id)sharedCacheEnabledURLSession;
+ (id)sharedCacheEnabledAnisetteFreeSession;
+ (id)sharedCacheReliantAnisetteFreeSession;

- (id)init;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)beginDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)defaultSessionObjectWithConfiguration:(id)arg1;
- (void)_unsafe_completeTask:(id)arg1 withError:(id)arg2;
- (id)_URLSession;
- (_Bool)_isRecoverableError:(id)arg1;
- (_Bool)_unsafe_retryTaskIfPossible:(id)arg1;
- (void)cancelDataTask:(id)arg1;
- (id)beginAuthenticationDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
