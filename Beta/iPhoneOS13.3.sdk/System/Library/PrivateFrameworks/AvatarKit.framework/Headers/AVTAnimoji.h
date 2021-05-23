/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <AvatarKit/AVTAvatar.h>

@class NSDictionary, NSString, NSURL, SCNNode;

@interface AVTAnimoji : AVTAvatar

{
    _Bool _loaded;
    NSURL *_url;
    SCNNode *_lightingNode;
    SCNNode *_cameraNode;
    NSDictionary *_specializationSettings;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) SCNNode *lightingNode;
@property (nonatomic, readonly) SCNNode *cameraNode;

+ (unsigned char)classIdentifier;
+ (id)animojiNamed:(id)arg1;
+ (id)animojiNames;
+ (struct UIImage *)thumbnailForAnimojiNamed:(id)arg1 options:(id)arg2;
+ (void)preloadAnimojiNamed:(id)arg1;
+ (id)_scenePathForPuppetNamed:(id)arg1;
+ (id)puppetNamed:(id)arg1 options:(id)arg2;
+ (void)preloadPuppet:(id)arg1;
+ (id)puppetNames;
+ (struct UIImage *)thumbnailForPuppetNamed:(id)arg1 options:(id)arg2;
+ (void)preloadPuppetNamed:(id)arg1;
+ (id)animoji;
+ (id)animojiWithContentsOfURL:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setName:(id)arg1;
- (id)url;
- (void)update;
- (void)setUrl:(id)arg1;
- (void)_load;
- (void)loadIfNeeded;
- (id)specializationSettings;
- (id)avatarNode;
- (void)_encode:(id)arg1;
- (id)stickerPhysicsStateIdentifier;
- (void)setAvatarNode:(id)arg1;
- (id)arTechniqueName;
- (id)puppetState;
- (void)setPuppetState:(id)arg1;
- (_Bool)_decode:(id)arg1 error:(id *)arg2;
- (_Bool)hasCustomARTechnique;

@end
