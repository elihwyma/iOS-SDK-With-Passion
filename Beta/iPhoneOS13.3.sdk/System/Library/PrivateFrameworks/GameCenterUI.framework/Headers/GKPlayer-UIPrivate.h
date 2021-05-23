/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterFoundation/GKPlayer.h>

@class CNContact;

@interface GKPlayer (UIPrivate)

@property (retain, nonatomic) CNContact *contact;

+ (long long)sizeForPhotoSize:(long long)arg1;
+ (id)monogramQueue;
+ (void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2;

- (id)initWithContact:(id)arg1;
- (id)avatarImageRenderer;
- (void)clearInMemoryCachedAvatars;
- (void)loadPlayerContactForAvatarControllerWithImageSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)displayNameComponentsWithHandler:(CDUnknownBlockType)arg1;
- (id)renderingScopeForPhotoSize:(long long)arg1;
- (void)renderMonogramImageWithPhotoSize:(long long)arg1 monogramString:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)stringForMonogramWithHandler:(CDUnknownBlockType)arg1;
- (void)_playerAvatarWithSize:(long long)arg1 useUIImage:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)photoURLForSize:(long long)arg1;
- (void)monogramImageWithPhotoSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)playerAvatarImageWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mutableContactFromDisplayNameComponentsWithHandler:(CDUnknownBlockType)arg1;
- (id)placeholderImageWithPhotoSize:(long long)arg1;
- (void)playerAvatarDataWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
