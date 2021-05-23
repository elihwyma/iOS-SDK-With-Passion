/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISSettings.h>

__attribute__((visibility("hidden")))
@interface ISPlayerSettings : ISSettings

{
    _Bool _easingEnabled;
    _Bool _scaleDuringPlayback;
    _Bool _loopingEnabled;
    _Bool _crossfadeEnabled;
    _Bool _audioEnabled;
    _Bool _playIsSticky;
    _Bool _longExposureVitality;
    _Bool _playDuringHint;
    _Bool _showStateOverlay;
    _Bool _prerollBeforePlaying;
    _Bool _useDedicatedQueues;
    _Bool _allowFrameBlending;
    _Bool _allowVideoPreRoll;
    _Bool _allowPlayerReuse;
    float _vitalityEaseMinRate;
    double _vitalityEaseDuration;
    long long _startBehavior;
    double _forceTouchTimeoutInterval;
    double _forceTouchTimeoutMinimumProgress;
    double _forceScrubMinimumPressure;
    double _forceScrubMaximumPressure;
    double _forceScrubRewindFactor;
    double _forceScrubMinRateChange;
    double _forceScrubMinimumRate;
    double _forceScrubMaximumInteractiveRate;
    double _audioRampDuration;
}

@property (nonatomic) _Bool easingEnabled;
@property (nonatomic) double vitalityEaseDuration;
@property (nonatomic) float vitalityEaseMinRate;
@property (nonatomic) long long startBehavior;
@property (nonatomic) _Bool scaleDuringPlayback;
@property (nonatomic) _Bool loopingEnabled;
@property (nonatomic) _Bool crossfadeEnabled;
@property (nonatomic) _Bool audioEnabled;
@property (nonatomic) _Bool playIsSticky;
@property (nonatomic) _Bool longExposureVitality;
@property (nonatomic) _Bool playDuringHint;
@property (nonatomic) _Bool showStateOverlay;
@property (nonatomic) _Bool prerollBeforePlaying;
@property (nonatomic) _Bool useDedicatedQueues;
@property (nonatomic) _Bool allowFrameBlending;
@property (nonatomic) _Bool allowVideoPreRoll;
@property (nonatomic) _Bool allowPlayerReuse;
@property (nonatomic) double forceTouchTimeoutInterval;
@property (nonatomic) double forceTouchTimeoutMinimumProgress;
@property (nonatomic) double forceScrubMinimumPressure;
@property (nonatomic) double forceScrubMaximumPressure;
@property (nonatomic) double forceScrubRewindFactor;
@property (nonatomic) double forceScrubMinRateChange;
@property (nonatomic) double forceScrubMinimumRate;
@property (nonatomic) double forceScrubMaximumInteractiveRate;
@property (nonatomic) double audioRampDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
