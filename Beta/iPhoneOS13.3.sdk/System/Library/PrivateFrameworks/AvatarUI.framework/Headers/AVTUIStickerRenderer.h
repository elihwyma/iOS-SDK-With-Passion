/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTClippableImageStore, AVTUIEnvironment, AVTUILogger, AVTUIStickerGeneratorPool;

@protocol AVTAvatarRecord, AVTCacheableResource, AVTResourceCache, AVTTaskScheduler, OS_dispatch_queue;

@interface AVTUIStickerRenderer : NSObject

{
    _Bool _parallelizeEncoding;
    id <AVTResourceCache> _cache;
    AVTClippableImageStore *_imageStore;
    AVTUIEnvironment *_environment;
    AVTUILogger *_logger;
    id <AVTTaskScheduler> _renderingScheduler;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSObject<OS_dispatch_queue> *_encodingQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <AVTAvatarRecord> _avatarRecord;
    id <AVTCacheableResource> _cacheableResourceItem;
    AVTUIStickerGeneratorPool *_stickerGeneratorPool;
}

@property (nonatomic, readonly) id <AVTResourceCache> cache;
@property (nonatomic, readonly) AVTClippableImageStore *imageStore;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) AVTUILogger *logger;
@property (nonatomic, readonly) id <AVTTaskScheduler> renderingScheduler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *renderingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *encodingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) id <AVTAvatarRecord> avatarRecord;
@property (nonatomic, readonly) id <AVTCacheableResource> cacheableResourceItem;
@property (nonatomic, readonly) AVTUIStickerGeneratorPool *stickerGeneratorPool;
@property (nonatomic) _Bool parallelizeEncoding;

+ (id)imageEncoder;
+ (_Bool)clearStickersForAvatarRecordIdentifier:(id)arg1 withEnvironment:(id)arg2;

- (void)stopUsingResources;
- (id)initWithAvatarRecord:(id)arg1 cache:(id)arg2 imageStore:(id)arg3 stickerGeneratorPool:(id)arg4 environment:(id)arg5 renderingScheduler:(id)arg6 renderingQueue:(id)arg7 encodingQueue:(id)arg8 callbackQueue:(id)arg9;
- (CDUnknownBlockType)scheduledStickerResourceProviderForStickerConfiguration:(id)arg1;
- (void)saveImageForResource:(id)arg1 forScope:(id)arg2 synchronous:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)scheduledTaskForItem:(id)arg1 scope:(id)arg2 queue:(id)arg3 renderingHandler:(CDUnknownBlockType)arg4 resourceHandler:(CDUnknownBlockType)arg5 synchronous:(_Bool)arg6;
- (id)renderStickerResourceForItem:(id)arg1 scope:(id)arg2 configuration:(id)arg3;
- (CDUnknownBlockType)providerForResourceForScope:(id)arg1 queue:(id)arg2 renderingHandler:(CDUnknownBlockType)arg3;
- (id)initWithAvatarRecord:(id)arg1 cache:(id)arg2 renderingScheduler:(id)arg3 renderingQueue:(id)arg4 encodingQueue:(id)arg5 stickerGeneratorPool:(id)arg6 environment:(id)arg7;

@end
