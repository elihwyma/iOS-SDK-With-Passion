/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class AAURLSession, NSString, NSURLRequest;

@protocol AAURLSessionTaskProtocol;

@interface _AAURLSessionConfigurationTask : NSObject

{
    CDUnknownBlockType _completion;
    struct os_unfair_lock_s _unfairLock;
    struct {
        unsigned int isCanceled:1;
        unsigned int isFetchingConfiguration:1;
    } _flags;
    id <AAURLSessionTaskProtocol> _configurationTask;
    id <AAURLSessionTaskProtocol> _sessionTask;
    AAURLSession *_session;
    NSURLRequest *_originalRequest;
}

@property (nonatomic, readonly) AAURLSession *session;
@property (nonatomic, readonly) NSURLRequest *originalRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)_invokeCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_initiateSessionTaskWithConfiguration:(id)arg1;
- (void)_unfairLock_initiateConfigurationTask;
- (id)initWithSession:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
