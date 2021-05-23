/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class AVAudioSession, NSString, SVKeyValueObserver, SVPlayer;

@interface SVVideoVolumeObserver : NSObject

{
    _Bool _muted;
    float _volume;
    CDUnknownBlockType _volumeChangeBlock;
    CDUnknownBlockType _muteStateChangeBlock;
    SVPlayer *_player;
    AVAudioSession *_audioSession;
    SVKeyValueObserver *_outputVolumeObserver;
    SVKeyValueObserver *_muteStateObserver;
}

@property (nonatomic, readonly) SVPlayer *player;
@property (weak, nonatomic, readonly) AVAudioSession *audioSession;
@property (nonatomic, readonly) SVKeyValueObserver *outputVolumeObserver;
@property (nonatomic, readonly) SVKeyValueObserver *muteStateObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool muted;
@property (nonatomic, readonly) float volume;
@property (copy, nonatomic, setter=onVolumeChange:) CDUnknownBlockType volumeChangeBlock;
@property (copy, nonatomic, setter=onMuteStateChange:) CDUnknownBlockType muteStateChangeBlock;

- (void)volumeChanged:(float)arg1;
- (void)muteStateChanged:(_Bool)arg1;
- (id)initWithPlayer:(id)arg1 audioSession:(id)arg2;
- (void)updateWithVolume:(float)arg1 muted:(_Bool)arg2;

@end
