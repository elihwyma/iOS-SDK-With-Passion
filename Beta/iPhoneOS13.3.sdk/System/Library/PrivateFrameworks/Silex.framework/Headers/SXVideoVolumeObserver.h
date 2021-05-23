/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class AVAudioSession, NSString, SVKeyValueObserver, SXPlaybackCoordinator;

@interface SXVideoVolumeObserver : NSObject

{
    _Bool _muted;
    float _volume;
    CDUnknownBlockType _volumeChangeBlock;
    CDUnknownBlockType _muteStateChangeBlock;
    SXPlaybackCoordinator *_playbackCoordinator;
    AVAudioSession *_audioSession;
    SVKeyValueObserver *_outputVolumeObserver;
}

@property (weak, nonatomic, readonly) SXPlaybackCoordinator *playbackCoordinator;
@property (weak, nonatomic, readonly) AVAudioSession *audioSession;
@property (nonatomic, readonly) SVKeyValueObserver *outputVolumeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool muted;
@property (nonatomic, readonly) float volume;
@property (copy, nonatomic, setter=onVolumeChange:) CDUnknownBlockType volumeChangeBlock;
@property (copy, nonatomic, setter=onMuteStateChange:) CDUnknownBlockType muteStateChangeBlock;

- (void)volumeChanged:(float)arg1;
- (void)updateWithVolume:(float)arg1 muted:(_Bool)arg2;
- (void)playbackCoordinatorMuteStateChanged:(id)arg1;
- (id)initWithPlaybackCoordinator:(id)arg1 audioSession:(id)arg2;

@end
