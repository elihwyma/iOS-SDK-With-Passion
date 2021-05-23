/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface LPMediaPlaybackManager : NSObject

{
    NSHashTable *_mediaPlayers;
}

+ (id)shared;

- (id)init;
- (void)volumeChanged:(id)arg1;
- (void)_updateAudioSessionCategory;
- (id)audioSession;
- (_Bool)releaseDecodingResourcesForInactivePlayers;
- (void)addMediaPlayer:(id)arg1;
- (void)removeMediaPlayer:(id)arg1;
- (void)mediaPlayer:(id)arg1 didChangePlayingState:(_Bool)arg2;
- (void)mediaPlayer:(id)arg1 didChangeMutedState:(_Bool)arg2;
- (void)_deactivateAllPlayingMediaPlayersExcept:(id)arg1;
- (_Bool)_sharedSessionHasPlayingAudio;

@end
