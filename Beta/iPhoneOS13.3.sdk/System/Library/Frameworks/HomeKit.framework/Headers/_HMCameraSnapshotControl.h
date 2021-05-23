/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/_HMCameraControl.h>

@class HMCameraSnapshot;

@protocol _HMCameraSnapshotControlDelegate;

__attribute__((visibility("hidden")))
@interface _HMCameraSnapshotControl : _HMCameraControl

{
    HMCameraSnapshot *_mostRecentSnapshot;
    id <_HMCameraSnapshotControlDelegate> _delegate;
}

@property (weak, nonatomic) id <_HMCameraSnapshotControlDelegate> delegate;
@property (retain, nonatomic) HMCameraSnapshot *mostRecentSnapshot;

- (void)takeSnapshot;
- (void)_handleMostSnapshot:(id)arg1;
- (void)_takeSnapshot;
- (void)_callDelegate:(id)arg1 error:(id)arg2;
- (void)_handleSnapshot:(id)arg1 error:(id)arg2 cameraSessionID:(id)arg3 mostRecent:(_Bool)arg4;
- (void)_callMostRecentSnapshotUpdateDelegate;
- (void)_fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleCreateSnapshotWithBulletinContext:(id)arg1 error:(id)arg2 cameraSessionID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 mostRecentSnapshot:(id)arg4;
- (void)_registerNotificationHandlers;
- (void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_mergeNewSnapshot:(id)arg1 operations:(id)arg2;

@end
