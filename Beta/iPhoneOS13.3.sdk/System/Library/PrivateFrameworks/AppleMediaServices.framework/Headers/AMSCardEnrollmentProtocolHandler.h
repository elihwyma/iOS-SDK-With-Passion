/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSURLProtocolHandler.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSCardEnrollmentProtocolHandler : AMSURLProtocolHandler <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(_Bool)arg3 error:(id *)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
