/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class AMSURLSession, NSString, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface AMSBiometricsPresentationProxy : NSObject <Swift>

{
    AMSURLSession *_session;
    NSURLSessionTask *_task;
}

@property (nonatomic, readonly) AMSURLSession *session;
@property (nonatomic, readonly) NSURLSessionTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithSession:(id)arg1 task:(id)arg2;
- (void)handleAuthenticateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDialogRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
