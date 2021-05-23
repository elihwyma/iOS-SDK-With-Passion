/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMCameraControl.h>

@class HMCameraSnapshot, HMFUnfairLock, NSString, _HMCameraSnapshotControl;

@protocol HMCameraSnapshotControlDelegate;

@interface HMCameraSnapshotControl : HMCameraControl

{
    HMFUnfairLock *_lock;
    id <HMCameraSnapshotControlDelegate> _delegate;
    _HMCameraSnapshotControl *_snapshotControl;
}

@property (retain, nonatomic) _HMCameraSnapshotControl *snapshotControl;
@property (weak, nonatomic) id <HMCameraSnapshotControlDelegate> delegate;
@property (nonatomic, readonly) HMCameraSnapshot *mostRecentSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)takeSnapshot;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSnapshotControl:(id)arg1;

@end
