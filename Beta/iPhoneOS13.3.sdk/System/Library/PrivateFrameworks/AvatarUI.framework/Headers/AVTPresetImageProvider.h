/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarConfigurationImageRenderer, AVTRenderingScope, NSString;

@protocol AVTDeviceResourceConsumerDelegate, AVTImageCache, AVTTaskScheduler, AVTUILogger, OS_dispatch_queue;

@interface AVTPresetImageProvider : NSObject

{
    id <AVTDeviceResourceConsumerDelegate> _consumerDelegate;
    id <AVTImageCache> _cache;
    id <AVTUILogger> _logger;
    AVTAvatarConfigurationImageRenderer *_renderer;
    id <AVTTaskScheduler> _renderingScheduler;
    NSObject<OS_dispatch_queue> *_presetQueue;
    NSObject<OS_dispatch_queue> *_colorQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    AVTRenderingScope *_colorScope;
    AVTRenderingScope *_defaultScope;
}

@property (nonatomic, readonly) id <AVTImageCache> cache;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) AVTAvatarConfigurationImageRenderer *renderer;
@property (nonatomic, readonly) id <AVTTaskScheduler> renderingScheduler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *presetQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *colorQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) AVTRenderingScope *colorScope;
@property (nonatomic, readonly) AVTRenderingScope *defaultScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTDeviceResourceConsumerDelegate> consumerDelegate;

+ (id)presetImageCacheWithEnvironment:(id)arg1;
+ (id)configurationToRenderForPreset:(id)arg1 overrides:(id)arg2 baseConfiguration:(id)arg3;

- (id)initWithCache:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3;
- (id)initWithCache:(id)arg1 renderingScheduler:(id)arg2 renderingQueueProvider:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4 renderer:(id)arg5 defaultScope:(id)arg6 environment:(id)arg7;
- (id)renderThumbnailForModelColor:(id)arg1;
- (CDUnknownBlockType)providerForImageForItem:(id)arg1 scope:(id)arg2 queue:(id)arg3 renderingHandler:(CDUnknownBlockType)arg4;
- (void)renderColorForColorPreset:(id)arg1 skinColor:(id)arg2 intoLayer:(id)arg3;
- (void)renderColorGradientForModelColor:(id)arg1 skinColor:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)releaseRenderingResourceForEstimatedDuration:(double)arg1;
- (id)initWithRenderingScheduler:(id)arg1 environment:(id)arg2;
- (id)initWithCache:(id)arg1 environment:(id)arg2;
- (CDUnknownBlockType)providerForThumbnailForModelColor:(id)arg1;
- (CDUnknownBlockType)providerForColorIntoLayer;
- (CDUnknownBlockType)providerForGradientFromColor;
- (CDUnknownBlockType)providerForThumbnailForModelPreset:(id)arg1 presetOverrides:(id)arg2 poseOverride:(id)arg3 avatarConfiguration:(id)arg4 framingMode:(id)arg5;

@end
