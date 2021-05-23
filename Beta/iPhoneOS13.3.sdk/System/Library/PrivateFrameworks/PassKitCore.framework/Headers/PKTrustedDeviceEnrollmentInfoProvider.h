/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class PKXPCService;

@interface PKTrustedDeviceEnrollmentInfoProvider : NSObject

{
    PKXPCService *_remoteService;
}

- (id)init;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_existingRemoteObjectProxy;
- (void)trustedDeviceEnrollmentInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)trustedDeviceEnrollmentSignatureForDevice:(unsigned long long)arg1 accountDSID:(id)arg2 sessionData:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
