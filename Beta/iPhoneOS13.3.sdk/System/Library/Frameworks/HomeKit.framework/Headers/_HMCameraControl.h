/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, HMHome, HMService, NSString, NSUUID, _HMCameraProfile, _HMContext;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HMCameraControl : NSObject

{
    HMFUnfairLock *_lock;
    _HMContext *_context;
    _HMCameraProfile *_cameraProfile;
    HMService *_service;
    NSUUID *_profileUniqueIdentifier;
    HMHome *_home;
}

@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMHome *home;
@property (weak, nonatomic, readonly) _HMCameraProfile *cameraProfile;
@property (nonatomic, readonly) HMService *service;
@property (copy, nonatomic, readonly) NSUUID *profileUniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;

@end
