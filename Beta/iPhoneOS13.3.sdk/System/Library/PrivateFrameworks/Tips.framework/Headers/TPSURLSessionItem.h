/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSString, TPSURLSessionTask;

@interface TPSURLSessionItem : NSObject

{
    _Bool _cancelled;
    TPSURLSessionTask *_sessionTask;
    CDUnknownBlockType _completionHanlder;
}

@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly) long long state;
@property (retain, nonatomic) TPSURLSessionTask *sessionTask;
@property (nonatomic, readonly) CDUnknownBlockType completionHanlder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)resume;
- (void)notifyWithSessionTask:(id)arg1 error:(id)arg2;
- (void)URLSessionSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (id)initWithSessionTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
