/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
 */

#import <Foundation/NSObject.h>

@class AVAudioPlayer, AXTapticChimeAsset, NSDate, NSString, PCSimpleTimer;

@interface AXTapticChimesScheduler : NSObject

{
    PCSimpleTimer *_chimeTimer;
    AVAudioPlayer *_audioPlayer;
    NSString *_previousAudioSessionCategory;
    AXTapticChimeAsset *_currentChimeAsset;
    unsigned int _audioPlaybackPowerAssertionID;
    NSDate *_lastExpectedWakeTime;
    NSDate *_lastActualWakeTime;
    NSDate *_lastExpectedChimeTime;
    NSDate *_lastActualChimeTime;
    float _lastMediaVolume;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initializeIfNeeded;

- (void)dealloc;
- (id)_init;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (id)_currentDate;
- (_Bool)processIsAllowedToScheduleChimes;
- (void)_tapticChimesStateDidChange:(_Bool)arg1;
- (void)_scheduleChimeTimer;
- (void)_previewChimes;
- (void)_clearChimeTimer;
- (_Bool)canPlayTapticChime;
- (_Bool)canScheduleTapticChimes;
- (void)_previewChimesForStartDate:(id)arg1 chimeDate:(id)arg2 frequency:(long long)arg3 soundType:(long long)arg4;
- (id)nextChimeAssetForStartDate:(id)arg1 frequency:(long long)arg2 soundType:(long long)arg3 timeIntervalUntilChime:(double *)arg4;
- (_Bool)_outputTapticChime:(id)arg1 atDate:(id)arg2;
- (void)_releasePowerAssertionIfPossible:(unsigned int)arg1;
- (void)_denormalizeVolumeIfNecessary;
- (double)_preWakeTimeInterval;
- (double)_prePlayAudioTimeInterval;
- (void)_chimeWakeTimerFired:(id)arg1;
- (unsigned int)_createPowerAssertionWithName:(id)arg1 timeout:(double)arg2;
- (_Bool)canPlayScheduledTapticChime;
- (void)_normalizeVolumeIfNecessary;

@end
