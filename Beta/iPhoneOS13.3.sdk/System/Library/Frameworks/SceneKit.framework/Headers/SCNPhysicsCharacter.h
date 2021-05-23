/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsCharacter : SCNPhysicsBehavior

{
    struct {
        SCNPhysicsBody *characterBody;
        struct SCNVector3 direction;
        double velocity;
        double jumpSpeed;
    } _definition;
    struct btCharacterControllerInterface *_characterController;
    struct btPairCachingGhostObject *_ghostObject;
    struct btOverlapFilterCallback *_filterCallback;
    struct btCapsuleShape *_capsuleShape;
    SCNPhysicsWorld *_world;
}

@property (nonatomic) double velocity;
@property (nonatomic) double jumpSpeed;

- (void)dealloc;
- (void)_update;
- (void)setWalkingDirection:(struct SCNVector3)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)_handleCreateIfNeeded:(_Bool)arg1;
- (id)initWithCharacter:(id)arg1;
- (_Bool)canJump;
- (void)jump;

@end
