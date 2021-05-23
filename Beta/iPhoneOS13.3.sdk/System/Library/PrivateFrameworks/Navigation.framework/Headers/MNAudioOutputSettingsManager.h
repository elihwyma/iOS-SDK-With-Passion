/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNAudioOutputSetting, NSArray, NSHashTable;

@protocol OS_dispatch_queue;

@interface MNAudioOutputSettingsManager : NSObject

{
    NSHashTable *_observers;
    unsigned long long _routeSelection;
    NSArray *_audioSettings;
    NSArray *_pickableRoutes;
    MNAudioOutputSetting *_currentSetting;
    MNAudioOutputSetting *_currentSettingForSystem;
    _Bool _isCurrentSettingCached;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
}

@property (retain, nonatomic) MNAudioOutputSetting *currentSetting;
@property (nonatomic, readonly) MNAudioOutputSetting *currentSettingForVoicePrompt;
@property (nonatomic, readonly) NSArray *audioSettings;
@property (nonatomic, readonly) unsigned long long routeSelection;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (void)setHFPPreference:(_Bool)arg1 forSetting:(id)arg2;
- (void)updatePickableRoutes;
- (void)_pickableRoutesChanged;
- (void)_mediaServerConnectionDied;
- (void)updateRouteSelectionObservers;
- (_Bool)_pickCurrentSetting;
- (void)updateCurrentSettingObservers;
- (void)updatedCurrentSettingForVoicePromptObservers;
- (void)updateRouteSelection;
- (void)reloadSettings;
- (void)updateSettingsObservers;
- (void)updatePickableRoutesWithHandler:(CDUnknownBlockType)arg1;

@end
