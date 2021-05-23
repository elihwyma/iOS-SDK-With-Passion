/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class AVTAvatar, AVTAvatarEnvironment, AVTStickerConfiguration, NSArray, NSString, SCNRenderer, SCNScene;

@protocol OS_dispatch_queue;

@interface AVTStickerGenerator : NSObject

{
    _Bool _async;
    AVTAvatar *_avatar;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    SCNScene *_scene;
    SCNRenderer *_renderer;
    AVTAvatarEnvironment *_environment;
    AVTStickerConfiguration *_previousConfiguration;
    NSArray *_overridenMorphers;
    NSArray *_overridenPresets;
    NSArray *_appliedShaderModifiers;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) SCNScene *scene;
@property (retain, nonatomic) SCNRenderer *renderer;
@property (retain, nonatomic) AVTAvatarEnvironment *environment;
@property (retain, nonatomic) AVTStickerConfiguration *previousConfiguration;
@property (retain, nonatomic) NSArray *overridenMorphers;
@property (retain, nonatomic) NSArray *overridenPresets;
@property (retain, nonatomic) NSArray *appliedShaderModifiers;
@property (retain, nonatomic) AVTAvatar *avatar;
@property (nonatomic) _Bool async;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)removeConfiguration:(id)arg1 fromScene:(id)arg2 withAvatar:(id)arg3 appliedShaderModifier:(id)arg4;
+ (void)applyConfiguration:(id)arg1 toScene:(id)arg2 withAvatar:(id)arg3 defaultCamera:(id)arg4 forExport:(_Bool)arg5 async:(_Bool)arg6 workQueue:(id)arg7 callbackQueue:(id)arg8 completion:(CDUnknownBlockType)arg9;
+ (id)addCamera:(id)arg1 inScene:(id)arg2;
+ (void)addProps:(id)arg1 toScene:(id)arg2 forAvatar:(id)arg3 withCamera:(id)arg4 forExport:(_Bool)arg5 async:(_Bool)arg6 workQueue:(id)arg7 callbackQueue:(id)arg8 completion:(CDUnknownBlockType)arg9;
+ (id)createPropsParentNodeIfNeededInScene:(id)arg1;
+ (struct CGRect)clippingRectForBaseSize:(struct CGSize)arg1;
+ (void)removeConfiguration:(id)arg1 fromScene:(id)arg2 withAvatar:(id)arg3;
+ (void)applyConfiguration:(id)arg1 toScene:(id)arg2 withAvatar:(id)arg3 defaultCamera:(id)arg4 forExport:(_Bool)arg5 completion:(CDUnknownBlockType)arg6 async:(_Bool)arg7;
+ (id)findNodesNamed:(id)arg1 inAvatar:(id)arg2;

- (id)initWithAvatar:(id)arg1;
- (void)stickerImageWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_renderer:(id)arg1 subdivDataForHash:(id)arg2;
- (void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(CDUnknownBlockType)arg3;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)stickerImageWithConfiguration:(id)arg1 correctClipping:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupAvatar:(id)arg1;
- (void)clearPreviousConfigurationBeforeNewConfiguration:(id)arg1;
- (void)setupRendererWithAvatar:(id)arg1;
- (struct UIImage *)snapshotAtTime:(double)arg1 withRenderer:(id)arg2 configuration:(id)arg3 correctClipping:(_Bool)arg4;
- (void)rendererWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
