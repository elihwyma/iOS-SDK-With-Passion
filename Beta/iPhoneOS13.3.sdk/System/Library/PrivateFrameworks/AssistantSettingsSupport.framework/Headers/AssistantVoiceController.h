/*
 Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

#import <Preferences/PSListController.h>

@class AFVoiceInfo, AssistantVoiceViewModel, NSArray, NSDate, PSSpecifier, SUICAssistantVoiceSettingsConnection, VSVoiceAsset;

@interface AssistantVoiceController : PSListController

{
    _Bool _ignoreNextVoiceChangeNotification;
    SUICAssistantVoiceSettingsConnection *_settingsConnection;
    PSSpecifier *_languageGroupSpecifier;
    PSSpecifier *_languageProto;
    NSArray *_languageSpecifiers;
    PSSpecifier *_genderGroupSpecifier;
    PSSpecifier *_maleSpecifier;
    PSSpecifier *_femaleSpecifier;
    VSVoiceAsset *_downloadingAsset;
    NSArray *_genderGroupSpecifierTemplate;
    NSDate *_startDate;
    AFVoiceInfo *_inProgressVoice;
    AFVoiceInfo *_currentVoice;
    AssistantVoiceViewModel *_currentViewModel;
}

@property (retain, nonatomic) PSSpecifier *languageGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *languageProto;
@property (retain, nonatomic) NSArray *languageSpecifiers;
@property (retain, nonatomic) PSSpecifier *genderGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *maleSpecifier;
@property (retain, nonatomic) PSSpecifier *femaleSpecifier;
@property (retain, nonatomic) VSVoiceAsset *downloadingAsset;
@property (retain, nonatomic) NSArray *genderGroupSpecifierTemplate;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) AFVoiceInfo *inProgressVoice;
@property (retain, nonatomic) AFVoiceInfo *currentVoice;
@property (nonatomic) _Bool ignoreNextVoiceChangeNotification;
@property (retain, nonatomic) AssistantVoiceViewModel *currentViewModel;
@property (retain, nonatomic) SUICAssistantVoiceSettingsConnection *settingsConnection;

+ (id)bundle;
+ (_Bool)selectedLanguageHasGryphonAssets;
+ (_Bool)gryphonAssetsExistForLanguage:(id)arg1;

- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)outputVoice;
- (id)specifiers;
- (void)setParentController:(id)arg1;
- (id)inProgressOutputVoice;
- (void)languageCodeDidChange:(id)arg1;
- (void)outputVoiceDidChange:(id)arg1;
- (id)deriveVoicesWithTargetVoice:(id)arg1 currentVoice:(id)arg2;
- (void)setAssistantInProgressVoice:(id)arg1;
- (id)viewModelWithInProgressVoice:(id)arg1 currentVoice:(id)arg2;
- (id)_languageSpecifiersForLanguage:(id)arg1;
- (void)applyViewModel:(id)arg1;
- (_Bool)isVoiceInstalled:(id)arg1 gender:(long long)arg2;
- (_Bool)hasNonWWANNetworkConnection;
- (void)downloadVoice:(id)arg1 gender:(long long)arg2;
- (void)stopAllDownload;
- (void)updateFooterText:(id)arg1 forSpecifier:(id)arg2;
- (id)dialectsForLanguageIdentifiers:(id)arg1;
- (void)setOutputVoicePreference:(id)arg1;
- (void)setInProgressVoicePreference:(id)arg1;
- (void)setAssistantOutputVoice:(id)arg1;
- (void)updateDownloadProgress:(float)arg1;
- (id)voicesForLanguage:(id)arg1 gender:(long long)arg2;
- (id)vocalizerVoicesForLanguage:(id)arg1;
- (_Bool)isVoiceDownloading:(id)arg1 gender:(long long)arg2;
- (_Bool)isVocalizerVoiceInstalled:(id)arg1;
- (_Bool)isVocalizerVoiceDownloading:(id)arg1;

@end
