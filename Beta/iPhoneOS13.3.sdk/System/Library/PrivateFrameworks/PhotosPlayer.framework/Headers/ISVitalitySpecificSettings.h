/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISSettings.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ISVitalitySpecificSettings : ISSettings

{
    long long _behavior;
    double _preDuration;
    double _postDuration;
    double _startSeekTolerance;
    double _playbackRate;
    double _endTimeOffset;
    double _minimumVisibilityFactor;
    double _maximumDelayBeforePlayback;
    double _maxVitalityDelay;
    double _minimumPhotoTransitionDuration;
}

@property (nonatomic) long long behavior;
@property (nonatomic) double preDuration;
@property (nonatomic) double postDuration;
@property (nonatomic) double startSeekTolerance;
@property (nonatomic) double playbackRate;
@property (nonatomic) double endTimeOffset;
@property (nonatomic) double minimumVisibilityFactor;
@property (nonatomic) double maximumDelayBeforePlayback;
@property (nonatomic) double maxVitalityDelay;
@property (nonatomic) double minimumPhotoTransitionDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
