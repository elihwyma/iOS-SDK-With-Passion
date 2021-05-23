/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
 */

#import <AccessibilityUtilities/AXSettings.h>

@class NPSDomainAccessor;

@interface AXTimeOutputPreferences : AXSettings

{
    NPSDomainAccessor *_domainAccessor;
}

@property (nonatomic, readonly) NPSDomainAccessor *domainAccessor;

+ (id)sharedInstance;

- (id)localizedStringForKey:(id)arg1;
- (_Bool)tapToSpeakTimeEnabled;
- (long long)tapToSpeakTimeAvailability;
- (_Bool)voiceOverTapticTimeMode;
- (long long)voiceOverTapticTimeEncoding;
- (_Bool)voiceOverTapticChimesEnabled;
- (long long)voiceOverTapticChimesFrequencyEncoding;
- (long long)voiceOverTapticChimesSoundType;
- (void)setTapToSpeakTimeEnabled:(_Bool)arg1;
- (void)setTapToSpeakTimeAvailability:(long long)arg1;
- (void)setVoiceOverTapticTimeMode:(_Bool)arg1;
- (void)setVoiceOverTapticTimeEncoding:(long long)arg1;
- (void)setVoiceOverTapticChimesEnabled:(_Bool)arg1;
- (void)setVoiceOverTapticChimesFrequencyEncoding:(long long)arg1;
- (void)setVoiceOverTapticChimesSoundType:(long long)arg1;
- (id)_npsValueForPreferenceKey:(id)arg1 expectedClass:(Class)arg2;
- (id)_npsValueForPreferenceKey:(id)arg1;
- (_Bool)_npsBoolValueForPreferenceKey:(id)arg1 defaultValue:(_Bool)arg2;
- (void)_setNPSValue:(id)arg1 preferenceKey:(id)arg2;
- (long long)_npsIntegerValueForPreferenceKey:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)_voiceOverIsEnabled;
- (id)localizedStringForTapticChimesFrequencyEncoding:(long long)arg1;
- (id)localizedStringForTapticChimesSoundType:(long long)arg1;
- (_Bool)_voiceOverIsInTripleClick;
- (id)localizedStringForTapticTimeEncoding:(long long)arg1;
- (id)tapticChimesFrequencyOptions;
- (id)tapticChimesSoundsOptions;
- (id)tapToSpeakAvailabilityOptions;
- (id)tapticTimeEncodingOptions;
- (id)tapticChimesLocalizedTitle;
- (id)tapticChimesLocalizedDescription;
- (id)tapticChimesLocalizedCurrentFrequency;
- (id)tapticChimesLocalizedCurrentSounds;
- (id)tapticChimesScheduleLocalizedTitle;
- (id)tapticChimesSoundsLocalizedTitle;
- (id)tapToSpeakTimeLocalizedTitle;
- (id)tapToSpeakTimeLocalizedDescription;
- (id)localizedStringForTapToSpeakTimeAvailability:(long long)arg1;
- (id)tapticTimeLocalizedTitle;
- (id)tapticTimeLocalizedDescription;
- (id)tapticTimeLocalizedCurrentMode;
- (id)tapticTimeModeLocalizedDescription;

@end
