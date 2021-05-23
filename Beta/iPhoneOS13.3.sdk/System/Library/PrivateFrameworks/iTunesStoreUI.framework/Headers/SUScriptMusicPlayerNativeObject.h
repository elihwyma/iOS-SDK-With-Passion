/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptNativeObject.h>

@interface SUScriptMusicPlayerNativeObject : SUScriptNativeObject

- (void)destroyNativeObject;
- (void)setupNativeObject;
- (void)_nowPlayingChangeNotification:(id)arg1;
- (void)_playbackStateChangeNotification:(id)arg1;
- (void)_volumeChangeNotification:(id)arg1;

@end
