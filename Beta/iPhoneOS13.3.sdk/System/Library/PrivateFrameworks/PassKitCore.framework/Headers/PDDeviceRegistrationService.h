/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PDXPCService.h>

@class NSString, PDDeviceRegistrationServiceCoordinator, PKEntitlementWhitelist;

@interface PDDeviceRegistrationService : PDXPCService

{
    PKEntitlementWhitelist *_whitelist;
    PDDeviceRegistrationServiceCoordinator *_deviceRegistrationServiceCoordinator;
}

@property (retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithConnection:(id)arg1;
- (void)performDeviceRegistrationForReason:(id)arg1 actionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
