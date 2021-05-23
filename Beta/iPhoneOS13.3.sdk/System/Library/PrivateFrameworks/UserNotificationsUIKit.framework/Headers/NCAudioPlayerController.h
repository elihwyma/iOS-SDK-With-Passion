/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <Foundation/NSObject.h>

@class AVPlayer;

@protocol NCAudioPlayerControllerDelegate;

@interface NCAudioPlayerController : NSObject

{
    _Bool _audioSessionActive;
    float _rate;
    id <NCAudioPlayerControllerDelegate> _delegate;
    AVPlayer *_player;
    long long _playbackState;
    long long _status;
    double _duration;
    long long _timeControlStatus;
}

@property (nonatomic, getter=isAudioSessionActive) _Bool audioSessionActive;
@property (nonatomic) double duration;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) long long timeControlStatus;
@property (nonatomic) float rate;
@property (nonatomic) long long status;
@property (weak, nonatomic) id <NCAudioPlayerControllerDelegate> delegate;
@property (nonatomic, readonly) float currentTime;
@property (nonatomic, readonly) long long playbackState;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)pause;
- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)play;
- (id)initWithPlayer:(id)arg1;
- (void)seekToTime:(float)arg1;
- (void)setPlaybackState:(long long)arg1;
- (void)handlePlayerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)handlePlayerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (void)deactivateAudioSession;
- (void)activateAudioSession;
- (void)handleAudioSessionInterruptionNotification:(id)arg1;
- (void)handleAudioSessionRouteChangeNotification:(id)arg1;
- (void)handleAudioSessionMediaServicesWereLostNotification:(id)arg1;
- (void)handleAudioSessionMediaServicesWereResetNotification:(id)arg1;
- (_Bool)shouldEnableProximityMonitoring;
- (_Bool)updateProximityMonitoring;

@end
