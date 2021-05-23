/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class AVTAvatar, AVTAvatarEnvironment, NSString, SCNNode, SCNRenderer;

@interface AVTSnapshotBuilder : NSObject

{
    SCNRenderer *_renderer;
    AVTAvatar *_avatar;
    AVTAvatar *_snapshotedAvatar;
    SCNNode *_avatarNode;
    AVTAvatarEnvironment *_environment;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (nonatomic, readonly) SCNRenderer *renderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (struct CGImage *)copyRescaledCGImage:(struct CGImage *)arg1 by:(float)arg2;

- (id)init;
- (id)_renderer:(id)arg1 subdivDataForHash:(id)arg2;
- (void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(CDUnknownBlockType)arg3;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (struct UIImage *)imageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (struct UIImage *)animatedImageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (struct UIImage *)_imageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3 useACopy:(_Bool)arg4;
- (void)setupAvatarWithOptions:(id)arg1 useACopy:(_Bool)arg2;
- (void)_applyOptions:(id)arg1;
- (struct UIImage *)_imageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;

@end
