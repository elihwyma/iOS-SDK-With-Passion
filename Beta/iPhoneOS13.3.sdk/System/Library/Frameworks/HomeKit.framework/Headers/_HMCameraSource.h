/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMCameraView, HMFUnfairLock, NSNumber, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HMCameraSource : NSObject

{
    HMFUnfairLock *_lock;
    HMCameraView *_cameraView;
    _HMContext *_context;
    NSNumber *_aspectRatio;
    NSUUID *_profileUniqueIdentifier;
    NSNumber *_slotIdentifier;
    NSString *_sessionID;
}

@property (nonatomic, readonly) _HMContext *context;
@property (copy, nonatomic, readonly) NSNumber *aspectRatio;
@property (copy, nonatomic, readonly) NSUUID *profileUniqueIdentifier;
@property (copy, nonatomic, readonly) NSNumber *slotIdentifier;
@property (copy, nonatomic, readonly) NSString *sessionID;
@property (weak, nonatomic) HMCameraView *cameraView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5;

@end
