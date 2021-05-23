/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSURLSession, NSString;

@protocol OS_dispatch_queue;

@interface AMSURLProtocolHandler : NSObject

{
    AMSURLSession *session;
    NSObject<OS_dispatch_queue> *_responsePingQueue;
    NSObject<OS_dispatch_queue> *_metricsQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responsePingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) AMSURLSession *session;

+ (double)_randomDouble;

- (id)init;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(_Bool)arg3 error:(id *)arg4;
- (id)handleResponse:(id)arg1 task:(id)arg2;
- (id)decodeData:(id)arg1 task:(id)arg2 error:(id *)arg3;
- (id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3;
- (void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id *)arg3;
- (_Bool)_URLIsTrustedFromRequest:(id)arg1 bag:(id)arg2;
- (_Bool)_shouldEnableReversePushForTask:(id)arg1;
- (void)_pingURL:(id)arg1 session:(id)arg2 bag:(id)arg3;
- (void)reportMetricsForTaskInfo:(id)arg1 decodedObject:(id)arg2;
- (void)_setResponseCookiesFromResponse:(id)arg1 taskInfo:(id)arg2;

@end
