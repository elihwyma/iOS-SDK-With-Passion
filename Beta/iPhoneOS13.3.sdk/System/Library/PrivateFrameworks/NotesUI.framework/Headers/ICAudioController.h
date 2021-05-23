/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class AVPlayer, ICAttachment;

@interface ICAudioController : NSObject

{
    AVPlayer *_currentPlayer;
    ICAttachment *_currentAttachment;
    NSObject *_playbackTimeObserver;
}

@property (retain, nonatomic) AVPlayer *currentPlayer;
@property (retain, nonatomic) ICAttachment *currentAttachment;
@property (retain, nonatomic) NSObject *playbackTimeObserver;
@property (nonatomic, readonly) _Bool isPlaying;

+ (id)sharedAudioController;
+ (void)pauseIfPlaying;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)stop;
- (void)play;
- (void)seekToTime:(double)arg1;
- (void)play:(id)arg1;
- (void)togglePlayPause;
- (void)updateTime:(double)arg1 duration:(double)arg2;
- (long long)remotePause:(id)arg1;
- (long long)remotePlay:(id)arg1;
- (long long)remoteStop:(id)arg1;
- (long long)remoteTogglePlayPause:(id)arg1;
- (long long)remoteSkipBackward:(id)arg1;
- (long long)remoteSkipForward:(id)arg1;
- (void)attachmentWillBeDeletedNotification:(id)arg1;
- (void)notifyPlaying;
- (void)updateNowPlayingInfo;
- (void)notifyPaused;
- (void)notifyStopped;
- (void)skipBackByInterval:(double)arg1;
- (void)skipAheadByInterval:(double)arg1;

@end
