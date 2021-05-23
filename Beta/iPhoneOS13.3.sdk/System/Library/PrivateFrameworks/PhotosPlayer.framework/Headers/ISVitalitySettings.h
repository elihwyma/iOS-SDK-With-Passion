/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISSettings.h>

@class ISVitalitySpecificSettings, NSString;

@interface ISVitalitySettings : ISSettings

{
    _Bool _shouldPreroll;
    _Bool _useLegacyBehavior;
    ISVitalitySpecificSettings *_oneUpSettings;
    ISVitalitySpecificSettings *_shareViewSettings;
    ISVitalitySpecificSettings *_activityViewSettings;
    ISVitalitySpecificSettings *_orbPreviewSettings;
}

@property (nonatomic) _Bool useLegacyBehavior;
@property (retain, nonatomic) ISVitalitySpecificSettings *oneUpSettings;
@property (retain, nonatomic) ISVitalitySpecificSettings *shareViewSettings;
@property (retain, nonatomic) ISVitalitySpecificSettings *activityViewSettings;
@property (retain, nonatomic) ISVitalitySpecificSettings *orbPreviewSettings;
@property (nonatomic) _Bool shouldPreroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (long long)behavior;
- (double)playbackRate;
- (id)_defaultSettings;
- (double)preDuration;
- (double)postDuration;
- (double)minimumPhotoTransitionDuration;
- (double)endTimeOffset;
- (double)minimumVisibilityFactor;
- (double)maximumDelayBeforePlayback;
- (double)maxVitalityDelay;

@end
