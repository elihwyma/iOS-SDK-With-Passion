/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <MediaPlayer/MPMediaItem.h>

@interface MPMediaItem (BLHLS)

@property (nonatomic) unsigned long long bl_bitrate;

- (id)bl_hlsOfflinePlaybackKeys;
- (void)bl_addPersistHLSOfflinePlaybackKey:(id)arg1 forUri:(id)arg2;
- (void)bl_removePersistHLSOfflinePlaybackKeyForUri:(id)arg1;
- (void)bl_clearPersistHLSOfflinePlaybackKeys;

@end
