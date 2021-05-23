/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVPlayback/TVPPlayer.h>

__attribute__((visibility("hidden")))
@interface VUIPlayer : TVPPlayer

+ (id)savedPreferredAudioLanguageCode;
+ (void)setSavedPreferredAudioLanguageCode:(id)arg1;

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)_currentMediaItemDidChange:(id)arg1;
- (void)_videoPlaybackSettingsOrNetworkConfigurationDidChange:(id)arg1;
- (void)_configurePlayerForCurrentNetworkSettingsAndMediaItem;

@end
