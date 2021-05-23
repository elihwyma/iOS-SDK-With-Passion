/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarConfigurationImageRenderer, AVTAvatarImageRenderer, AVTUIEnvironment;

@protocol AVTImageCache, AVTTaskScheduler, AVTUILogger, OS_dispatch_queue;

@interface _AVTAvatarRecordImageProvider : NSObject

{
    _Bool _allowPreFlight;
    id <AVTImageCache> _peristentCache;
    id <AVTImageCache> _volatileCache;
    id <AVTUILogger> _logger;
    AVTUIEnvironment *_environment;
    AVTAvatarConfigurationImageRenderer *_configurationRenderer;
    AVTAvatarImageRenderer *_avatarRenderer;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <AVTTaskScheduler> _renderingScheduler;
}

@property (nonatomic, readonly) id <AVTImageCache> peristentCache;
@property (nonatomic, readonly) id <AVTImageCache> volatileCache;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) AVTAvatarConfigurationImageRenderer *configurationRenderer;
@property (nonatomic, readonly) AVTAvatarImageRenderer *avatarRenderer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) id <AVTTaskScheduler> renderingScheduler;
@property (nonatomic, readonly) _Bool allowPreFlight;

+ (void)makePersistentImageCache:(out id *)arg1 volatileImageCache:(out id *)arg2 withEnvironment:(id)arg3;

- (id)initWithEnvironment:(id)arg1;
- (CDUnknownBlockType)providerForRecord:(id)arg1 scope:(id)arg2;
- (id)initWithPersistentCache:(id)arg1 volatileCache:(id)arg2 allowPreFlight:(_Bool)arg3 environment:(id)arg4;
- (id)initWithPersistentCache:(id)arg1 volatileCache:(id)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 configurationRenderer:(id)arg5 avatarRenderer:(id)arg6 allowPreFlight:(_Bool)arg7 environment:(id)arg8;
- (CDUnknownBlockType)_providerForAvatar:(id)arg1 forRecord:(id)arg2 scope:(id)arg3 usingCache:(_Bool)arg4;
- (CDUnknownBlockType)providerForAvatar:(id)arg1 forRecord:(id)arg2 scope:(id)arg3 usingCache:(_Bool)arg4;
- (CDUnknownBlockType)_providerForRecord:(id)arg1 scope:(id)arg2;

@end
