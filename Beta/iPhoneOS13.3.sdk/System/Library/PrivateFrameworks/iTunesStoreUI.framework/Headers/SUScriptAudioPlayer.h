/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSURL, SUPlayerStatus;

@interface SUScriptAudioPlayer : SUScriptObject

{
    SUPlayerStatus *_playerStatus;
    NSURL *_url;
    NSURL *_keyUrl;
    NSURL *_certificateUrl;
}

@property (readonly) double currentTime;
@property (readonly) double duration;
@property (readonly) long long state;
@property (readonly) NSString *URL;
@property (readonly) NSString *keyURL;
@property (readonly) NSString *certificateURL;
@property (readonly) NSString *nowPlayingKeyAlbumTitle;
@property (readonly) NSString *nowPlayingKeyAlbumTrackCount;
@property (readonly) NSString *nowPlayingKeyAlbumTrackNumber;
@property (readonly) NSString *nowPlayingKeyArtist;
@property (readonly) NSString *nowPlayingKeyArtwork;
@property (readonly) NSString *nowPlayingKeyComposer;
@property (readonly) NSString *nowPlayingKeyDiscCount;
@property (readonly) NSString *nowPlayingKeyDiscNumber;
@property (readonly) NSString *nowPlayingKeyGenre;
@property (readonly) NSString *nowPlayingKeyPersistentID;
@property (readonly) NSString *nowPlayingKeyPlaybackDuration;
@property (readonly) NSString *nowPlayingKeyTitle;
@property (readonly) long long playerStateActive;
@property (readonly) long long playerStateBuffering;
@property (readonly) long long playerStateFailed;
@property (readonly) long long playerStateFinished;
@property (readonly) long long playerStatePaused;
@property (readonly) long long playerStateUnplayed;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (void)pause;
- (void)stop;
- (id)_className;
- (void)play;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (void)_audioPlayerStateChangeNotification:(id)arg1;
- (id)initWithURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3;

@end
