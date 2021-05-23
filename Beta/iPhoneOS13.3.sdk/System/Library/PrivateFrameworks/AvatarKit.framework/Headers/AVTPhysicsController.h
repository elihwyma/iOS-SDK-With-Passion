/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSMutableArray;

@protocol AVTPhysicsControllerDelegate;

@interface AVTPhysicsController : NSObject

{
    NSMutableArray *_physicsRigs;
    _Bool _setupDone;
    _Bool _firstFrameRendered;
    id <AVTPhysicsControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <AVTPhysicsControllerDelegate> delegate;

- (void)setupPhysics;
- (void)applyForcesWithMultiplier:(double)arg1;
- (void)_setupPhysicsChain:(id)arg1;
- (void)_setupCollisionNode:(id)arg1;
- (void)updateAtTime:(double)arg1 forceMultiplier:(double)arg2;
- (MISSING_TYPE *)offsetFromRestingPositionForNode:(id)arg1 inCoordinateSpaceOfNode:(id)arg2;
- (void)setupPhysicsDebugNodes;
- (void)downforcesDidChange;
- (void)setupPhysicsIfNeeded;
- (id)physicsState;
- (void)resetToPhysicsState:(id)arg1;

@end
