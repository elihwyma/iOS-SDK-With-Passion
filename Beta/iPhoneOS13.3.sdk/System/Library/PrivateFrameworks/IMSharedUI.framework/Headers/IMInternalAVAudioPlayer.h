/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@class AVAudioPlayer, AVPlayer, AVPlayerItem, NSString;

@protocol IMInternalAVAudioPlayerDelegate;

@interface IMInternalAVAudioPlayer : NSObject

{
    AVAudioPlayer *_avAudioPlayer;
    AVPlayer *_avPlayer;
    AVPlayerItem *_playerItem;
    long long _avPlayerState;
    _Bool _avPlayerPrepareRequested;
    _Bool _avPlayerPlayRequested;
    long long _playerType;
    id <IMInternalAVAudioPlayerDelegate> _delegate;
}

@property (nonatomic, readonly) long long playerType;
@property (weak, nonatomic) id <IMInternalAVAudioPlayerDelegate> delegate;
@property (nonatomic) float volume;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, readonly) double duration;
@property (readonly) double deviceCurrentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)prepareToPlay;
- (_Bool)playAtTime:(double)arg1;
- (id)initWithContentsOfURL:(id)arg1 playerType:(long long)arg2;
- (void)_playerItemDidEndNotification:(id)arg1;
- (void)_handleAVPlayerItemStateChange;
- (_Bool)_playAtTime:(double)arg1;
- (void)_notifyPlayerDidPrepareAudioFileSuccessfully:(_Bool)arg1;
- (void)_notifyPlayerDidFinishSuccessfully:(_Bool)arg1;

@end
