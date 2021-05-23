/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSURLProtocolHandler.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class AMSPurchaseQueue, NSString;

__attribute__((visibility("hidden")))
@interface AMSPurchaseProtocolHandler : AMSURLProtocolHandler <Swift>

{
    AMSPurchaseQueue *_queue;
}

@property (weak, nonatomic) AMSPurchaseQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (void)setSession:(id)arg1;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(_Bool)arg3 error:(id *)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3;
- (void)_handlePasswordSettingWithBuyParams:(id)arg1 account:(id)arg2;
- (_Bool)_handleFailureForAction:(id)arg1 response:(id)arg2 task:(id)arg3 decodedObject:(id)arg4 responseDictionary:(id)arg5;

@end
