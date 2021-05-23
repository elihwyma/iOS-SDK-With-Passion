/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class AVTAvatarRecordImageGenerator, AVTPuppetStore, AVTUIEnvironment, NSString;

@protocol AVTStickerBackend, AVTStickerBackendDelegate, AVTStoreBackend, AVTUILogger, OS_dispatch_queue;

@interface AVTAvatarStore : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_backendAccessQueue;
    NSObject<OS_dispatch_queue> *_puppetStoreAccessQueue;
    AVTUIEnvironment *_environment;
    id <AVTStoreBackend> _backend;
    AVTPuppetStore *_puppetStore;
    AVTAvatarRecordImageGenerator *_imageGenerator;
    id <AVTUILogger> _logger;
    id <AVTStickerBackend> _stickerBackend;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *backendAccessQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *puppetStoreAccessQueue;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) id <AVTStoreBackend> backend;
@property (nonatomic, readonly) AVTPuppetStore *puppetStore;
@property (nonatomic, readonly) AVTAvatarRecordImageGenerator *imageGenerator;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) id <AVTStickerBackend> stickerBackend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTStickerBackendDelegate> stickerBackendDelegate;

+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (unsigned long long)maximumNumberOfSavableAvatars;
+ (id)defaultImageGeneratorForEnvironment:(id)arg1;
+ (id)defaultBackendWithWorkQueue:(id)arg1 environment:(id)arg2;

- (id)init;
- (id)initWithDomainIdentifier:(id)arg1;
- (_Bool)canCreateAvatar;
- (id)avatarsForFetchRequest:(id)arg1 error:(id *)arg2;
- (void)fetchAvatarsForFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canCreateAvatarWithError:(id *)arg1;
- (void)backend:(id)arg1 didChangeRecordsWithIdentifiers:(id)arg2;
- (id)initWithImageGenerator:(id)arg1 environment:(id)arg2;
- (void)deleteAvatar:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)recentStickersForFetchRequest:(id)arg1 error:(id *)arg2;
- (void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveAvatarRecord:(id)arg1 thumbnailAvatar:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 thumbnailGenerationCompletionBlock:(CDUnknownBlockType)arg4;
- (void)deleteAvatarWithIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)duplicateAvatar:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithBackend:(id)arg1 backendAccessQueue:(id)arg2 puppetStore:(id)arg3 imageGenerator:(id)arg4 stickerBackend:(id)arg5 environment:(id)arg6;
- (void)performBackendWork:(CDUnknownBlockType)arg1;
- (void)performPuppetStoreWork:(CDUnknownBlockType)arg1;
- (void)performAsynchronousWork:(CDUnknownBlockType)arg1;
- (void)postChangeNotificationForRecordWithIdentifiers:(id)arg1 remote:(_Bool)arg2;

@end
