/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

#import <AppleAccount/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;

@protocol OS_dispatch_queue;

@interface AAURLSession : NSObject <Swift>

{
    _Bool _requiresSigning;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSMutableDictionary *_pendingSessionOperations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)dataTaskWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)bodyTaskWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dataTaskWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_initRequiringSigning:(_Bool)arg1;
- (id)_enqueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sessionQueue_enqueueTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sessionQueue_updateTask:(id)arg1 withData:(id)arg2;
- (void)_sessionQueue_dequeueTask:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (id)bodyTaskWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
