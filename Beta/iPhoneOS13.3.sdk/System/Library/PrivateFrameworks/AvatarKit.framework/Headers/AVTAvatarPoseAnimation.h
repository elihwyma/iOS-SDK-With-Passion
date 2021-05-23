/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class AVTAvatarPose, NSDictionary;

@interface AVTAvatarPoseAnimation : NSObject

{
    AVTAvatarPose *_staticPose;
    NSDictionary *_staticPhysicsStates;
    NSDictionary *_blendshapeAnimations;
    NSDictionary *_perNodeAnimations;
}

@property (nonatomic, readonly) AVTAvatarPose *staticPose;
@property (nonatomic, readonly) double duration;

+ (void)removeAllPoseAnimationsOnAvatar:(id)arg1;
+ (id)animationFromRepresentation:(id)arg1 keyPath:(id)arg2;
+ (void)enumerateRepresentationsForAnimation:(id)arg1 block:(CDUnknownBlockType)arg2;

- (id)initWithScene:(id)arg1;
- (void)applyOnAvatar:(id)arg1;
- (id)animationForAvatar:(id)arg1;
- (id)initWithSceneAtURL:(id)arg1;
- (id)initWithStaticPose:(id)arg1 staticPhysicsStates:(id)arg2;
- (id)initWithStaticPoseRepresentation:(id)arg1 animatedPoseRepresentation:(id)arg2 staticPhysicsStatesRepresentation:(id)arg3;
- (id)staticPoseRepresentation;
- (id)animatedPoseRepresentation;

@end
