/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor

{
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)systemControllerDied:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)arg1;
- (void)_startObservingSystemControllerLifecycle;
- (void)startObservingSystemVolumes;
- (_Bool)_fetchSystemVolumeForCategory:(id)arg1 usingSystemController:(id)arg2 volume:(float *)arg3;
- (float)_getNewSystemVolumesWithNotification:(id)arg1 category:(id)arg2;
- (void)_notifyObserver:(id)arg1 volumeDidChanged:(float)arg2 forAudioCategory:(id)arg3;
- (void)systemVolumeDidChange:(id)arg1;
- (float)musicVolume;
- (void)musicVolumeWithCompletion:(CDUnknownBlockType)arg1;
- (float)alarmVolume;

@end
