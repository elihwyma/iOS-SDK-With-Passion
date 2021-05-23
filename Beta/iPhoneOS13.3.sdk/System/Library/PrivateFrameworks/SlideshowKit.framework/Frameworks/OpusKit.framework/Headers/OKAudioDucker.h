/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface OKAudioDucker : NSObject

{
    float _volume;
    float _currentVolume;
    float _fadeToVolume;
    float _fadeFromVolume;
    float _duckLevel;
    double _startFadeTime;
    long long _duckState;
    double _fadeDuration;
    double _duckDuration;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _setVolumeBlock;
}

@property (nonatomic) float volume;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)beginFadingWithDuration:(double)arg1;
- (void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
- (void)endDucking;
- (void)endFading;
- (void)setSetVolumeBlock:(CDUnknownBlockType)arg1;
- (void)endFading:(_Bool)arg1;
- (void)_handleTimerEvent;

@end
