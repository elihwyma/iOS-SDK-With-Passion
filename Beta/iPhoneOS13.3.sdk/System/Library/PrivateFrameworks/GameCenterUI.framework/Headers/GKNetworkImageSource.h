/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKImageSource.h>

@class NSMutableDictionary;

@interface GKNetworkImageSource : GKImageSource

{
    NSMutableDictionary *_loadingGroups;
}

@property (retain, nonatomic) NSMutableDictionary *loadingGroups;

- (void)loadImageForURLString:(id)arg1 loader:(CDUnknownBlockType)arg2 reference:(id)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)imageNeedsRefresh:(id)arg1;
- (void)loadImageForURLString:(id)arg1 reference:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)loadAndCacheAvatarFromGamedForURLString:(id)arg1 useUIImage:(_Bool)arg2 cacheSubdirectory:(id)arg3 reference:(id)arg4 queue:(id)arg5 handler:(CDUnknownBlockType)arg6;

@end
