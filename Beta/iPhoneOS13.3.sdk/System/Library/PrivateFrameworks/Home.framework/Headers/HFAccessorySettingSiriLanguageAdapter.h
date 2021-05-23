/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAccessorySettingAdapter.h>

@class HFSiriLanguageOption, NAFuture, NSHashTable, NSSet, NSString;

@interface HFAccessorySettingSiriLanguageAdapter : HFAccessorySettingAdapter

{
    NSSet *_availableLanguageOptions;
    HFSiriLanguageOption *_selectedLanguageOption;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) NSHashTable *observers;
@property (copy, nonatomic) NSSet *availableLanguageOptions;
@property (retain, nonatomic) HFSiriLanguageOption *selectedLanguageOption;
@property (nonatomic, readonly) NAFuture *languageSettingFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (_Bool)shouldShowSettingsEntity:(id)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (id)_reloadLanguagesFromHomeKitNotifyingObservers:(_Bool)arg1;
- (void)_dumpAvailableLanguageOptionsWithReason:(id)arg1;
- (id)preferredRecognitionLanguageOptions;
- (id)preferredOutputVoiceGenderOptionsForSelectedOption:(id)arg1;
- (id)preferredOutputVoiceAccentOptionsForSelectedOption:(id)arg1;
- (void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)updateAvailableLanguageOptions:(id)arg1;
- (id)updateSelectedLanguageOption:(id)arg1;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;

@end
