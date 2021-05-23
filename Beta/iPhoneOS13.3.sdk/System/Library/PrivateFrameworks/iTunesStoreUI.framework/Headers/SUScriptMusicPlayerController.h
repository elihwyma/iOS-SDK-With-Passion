/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SUScriptMediaItem;

@interface SUScriptMusicPlayerController : SUScriptObject

{
    NSString *_playerType;
}

@property (readonly) double currentPlaybackTime;
@property (readonly) SUScriptMediaItem *nowPlayingItem;
@property (readonly) NSString *playbackState;
@property (readonly) NSString *playerType;
@property (copy) NSString *repeatMode;
@property (copy) NSString *shuffleMode;
@property (retain) NSNumber *volume;
@property (readonly) NSString *playbackStateInterrupted;
@property (readonly) NSString *playbackStatePaused;
@property (readonly) NSString *playbackStatePlaying;
@property (readonly) NSString *playbackStateSeekingBackward;
@property (readonly) NSString *playbackStateSeekingForward;
@property (readonly) NSString *playbackStateStopped;
@property (readonly) NSString *repeatModeAll;
@property (readonly) NSString *repeatModeDefault;
@property (readonly) NSString *repeatModeNone;
@property (readonly) NSString *repeatModeOne;
@property (readonly) NSString *shuffleModeAlbums;
@property (readonly) NSString *shuffleModeDefault;
@property (readonly) NSString *shuffleModeOff;
@property (readonly) NSString *shuffleModeSongs;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)scriptPlaybackStateForNativePlaybackState:(long long)arg1;

- (void)dealloc;
- (void)pause;
- (void)stop;
- (id)_className;
- (void)play;
- (id)attributeKeys;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)endSeeking;
- (void)skipToNextItem;
- (void)skipToBeginning;
- (void)skipToPreviousItem;
- (void)setQueueWithQuery:(id)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (id)scriptAttributeKeys;
- (id)initWithPlayerType:(id)arg1;

@end
