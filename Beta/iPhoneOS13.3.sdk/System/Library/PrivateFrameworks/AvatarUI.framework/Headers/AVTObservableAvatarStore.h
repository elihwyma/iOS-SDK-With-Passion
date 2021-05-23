/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AVTAvatarStoreDelegate, AVTAvatarStoreInternal, AVTStickerBackendDelegate, OS_dispatch_queue;

@interface AVTObservableAvatarStore : NSObject

{
    id <AVTAvatarStoreDelegate> _delegate;
    id <AVTAvatarStoreInternal> _store;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (nonatomic, readonly) id <AVTAvatarStoreInternal> store;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (weak, nonatomic) id <AVTAvatarStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTStickerBackendDelegate> stickerBackendDelegate;

+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (unsigned long long)maximumNumberOfSavableAvatars;

- (_Bool)canCreateAvatar;
- (id)avatarsForFetchRequest:(id)arg1 error:(id *)arg2;
- (void)fetchAvatarsForFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canCreateAvatarWithError:(id *)arg1;
- (void)deleteAvatar:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)recentStickersForFetchRequest:(id)arg1 error:(id *)arg2;
- (void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveAvatarRecord:(id)arg1 thumbnailAvatar:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 thumbnailGenerationCompletionBlock:(CDUnknownBlockType)arg4;
- (void)deleteAvatarWithIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)duplicateAvatar:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithStore:(id)arg1 callbackQueue:(id)arg2;

@end
