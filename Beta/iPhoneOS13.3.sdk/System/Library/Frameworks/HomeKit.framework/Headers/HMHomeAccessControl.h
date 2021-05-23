/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAccessControl.h>

@class HMUserCameraAccess, HMUserPresenceAuthorization, HMUserPresenceCompute;

@interface HMHomeAccessControl : HMAccessControl

{
    _Bool _owner;
    _Bool _administrator;
    _Bool _remoteAccessAllowed;
    HMUserPresenceAuthorization *_presenceAuthStatus;
    HMUserPresenceCompute *_presenceComputeStatus;
    HMUserCameraAccess *_camerasAccess;
}

@property (getter=isOwner) _Bool owner;
@property (nonatomic, getter=isAdministrator) _Bool administrator;
@property (getter=isRemoteAccessAllowed) _Bool remoteAccessAllowed;
@property (retain, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus;
@property (retain, nonatomic) HMUserPresenceCompute *presenceComputeStatus;
@property (retain, nonatomic) HMUserCameraAccess *camerasAccess;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)presenceAuthorizationStatus;
- (unsigned long long)presenceComputationStatus;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithUser:(id)arg1 owner:(_Bool)arg2 administratorPrivilege:(_Bool)arg3 remoteAccess:(_Bool)arg4 presenceAuthStatus:(id)arg5 presenceComputeStatus:(id)arg6 camerasAccess:(id)arg7;
- (unsigned long long)camerasAccessLevel;
- (void)updateAdministratorAccess:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRemoteAccess:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateCamerasAccessLevel:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
