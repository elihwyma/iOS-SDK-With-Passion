/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class AVTAvatar, SCNMaterial, SCNNode, SCNScene;

@interface AVTAvatarEnvironment : NSObject

{
    SCNScene *_scene;
    AVTAvatar *_avatar;
    SCNNode *_trackingLostIndicator;
    _Bool _trackingLostIndicatorVisible;
    SCNMaterial *_shadowPlaneMaterial;
    SCNNode *_whitePlane;
    SCNNode *_environmentNode;
    SCNNode *_defaultPointOfView;
    SCNNode *_specializedLightingNode;
    SCNNode *_defaultLightingNode;
}

@property (nonatomic, readonly) SCNNode *environmentNode;
@property (nonatomic, readonly) SCNNode *defaultPointOfView;
@property (nonatomic) _Bool showReticle;
@property (nonatomic) float fadeFactor;
@property (nonatomic, readonly) _Bool faceIsFullyVisible;

+ (void)triggerCrossFadeFromImage:(id)arg1 withScene:(id)arg2 pointOfView:(id)arg3 device:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

- (void)willSnapshot;
- (void)didSnapshot;
- (id)initAndInstallInScene:(id)arg1;
- (void)avatarDidChange:(id)arg1 arMode:(_Bool)arg2;
- (id)defaultEnvironmentNode;
- (void)updateSpecializedLighting;
- (void)updateARMode:(_Bool)arg1;
- (void)showTrackingLossIndicator;
- (void)hideTrackingLossIndicator;
- (void)hideReticle;
- (id)transitionTextureWithSize:(struct CGSize)arg1 renderer:(id)arg2;

@end
