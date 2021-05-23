/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARSession, NSArray;

@interface ARTrackedRaycastPostProcessor : NSObject

{
    ARSession *_session;
}

@property (weak) ARSession *session;
@property (nonatomic, readonly) NSArray *trackedRaycasts;

- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (void)processInitialResults:(id)arg1 forRaycast:(id)arg2;
- (void)invalidateRaycastWithIdentifier:(id)arg1;
- (_Bool)result:(id)arg1 isCloseEnoughToInitialResultForRaycast:(id)arg2;
- (void)startUpdateTimer;
- (CDStruct_14d5dc5e)updatePose:(CDStruct_14d5dc5e)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2 oldRayOrigin:(double [3])arg3 oldRayDirection:(double [3])arg4 newRayOrigin:(double [3])arg5 newRayDirection:(double [3])arg6;
- (void)updateFromTimer:(id)arg1;
- (void)addTrackedRaycast:(id)arg1 andProcessInitialResults:(id)arg2;
- (void)removeTrackedRaycastWithIdentifier:(id)arg1;
- (void)invalidateAllRaycasts;
- (void)processUpdatedResults:(id)arg1;
- (void)performBlockWhileLockingRaycasts:(CDUnknownBlockType)arg1;
- (void)updateFromPoseGraphEventWithData:(id)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2;

@end
