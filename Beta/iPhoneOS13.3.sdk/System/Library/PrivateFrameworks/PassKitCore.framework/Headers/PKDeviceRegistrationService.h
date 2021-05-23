/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class PKXPCService;

@interface PKDeviceRegistrationService : NSObject

{
    PKXPCService *_remoteService;
    _Bool _isRegistering;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_remoteObjectProxy;
- (void)performDeviceRegistrationForReason:(id)arg1 actionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (void)performDeviceRegistrationWithCompletion:(CDUnknownBlockType)arg1;

@end
