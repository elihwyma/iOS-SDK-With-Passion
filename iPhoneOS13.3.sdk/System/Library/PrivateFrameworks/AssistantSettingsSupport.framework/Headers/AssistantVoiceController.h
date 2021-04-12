//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class AFVoiceInfo, AssistantVoiceViewModel, NSArray, NSDate, PSSpecifier, SUICAssistantVoiceSettingsConnection, VSVoiceAsset;

@interface AssistantVoiceController : PSListController
{
    BOOL _ignoreNextVoiceChangeNotification;
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

+ (BOOL)gryphonAssetsExistForLanguage:(id)arg1;
+ (BOOL)selectedLanguageHasGryphonAssets;
+ (id)bundle;
@property(retain, nonatomic) AssistantVoiceViewModel *currentViewModel; // @synthesize currentViewModel=_currentViewModel;
@property(nonatomic) BOOL ignoreNextVoiceChangeNotification; // @synthesize ignoreNextVoiceChangeNotification=_ignoreNextVoiceChangeNotification;
@property(retain, nonatomic) AFVoiceInfo *currentVoice; // @synthesize currentVoice=_currentVoice;
@property(retain, nonatomic) AFVoiceInfo *inProgressVoice; // @synthesize inProgressVoice=_inProgressVoice;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSArray *genderGroupSpecifierTemplate; // @synthesize genderGroupSpecifierTemplate=_genderGroupSpecifierTemplate;
@property(retain, nonatomic) VSVoiceAsset *downloadingAsset; // @synthesize downloadingAsset=_downloadingAsset;
@property(retain, nonatomic) PSSpecifier *femaleSpecifier; // @synthesize femaleSpecifier=_femaleSpecifier;
@property(retain, nonatomic) PSSpecifier *maleSpecifier; // @synthesize maleSpecifier=_maleSpecifier;
@property(retain, nonatomic) PSSpecifier *genderGroupSpecifier; // @synthesize genderGroupSpecifier=_genderGroupSpecifier;
@property(retain, nonatomic) NSArray *languageSpecifiers; // @synthesize languageSpecifiers=_languageSpecifiers;
@property(retain, nonatomic) PSSpecifier *languageProto; // @synthesize languageProto=_languageProto;
@property(retain, nonatomic) PSSpecifier *languageGroupSpecifier; // @synthesize languageGroupSpecifier=_languageGroupSpecifier;
@property(retain, nonatomic) SUICAssistantVoiceSettingsConnection *settingsConnection; // @synthesize settingsConnection=_settingsConnection;
// - (void).cxx_destruct;
- (BOOL)hasNonWWANNetworkConnection;
- (BOOL)isVocalizerVoiceDownloading:(id)arg1;
- (BOOL)isVocalizerVoiceInstalled:(id)arg1;
- (BOOL)isVoiceDownloading:(id)arg1 gender:(long long)arg2;
- (BOOL)isVoiceInstalled:(id)arg1 gender:(long long)arg2;
- (id)vocalizerVoicesForLanguage:(id)arg1;
- (id)voicesForLanguage:(id)arg1 gender:(long long)arg2;
- (void)updateFooterText:(id)arg1 forSpecifier:(id)arg2;
- (void)stopAllDownload;
- (void)downloadVoice:(id)arg1 gender:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setInProgressVoicePreference:(id)arg1;
- (void)setAssistantInProgressVoice:(id)arg1;
- (void)setOutputVoicePreference:(id)arg1;
- (void)setAssistantOutputVoice:(id)arg1;
- (id)_languageSpecifiersForLanguage:(id)arg1;
- (id)dialectsForLanguageIdentifiers:(id)arg1;
- (void)updateDownloadProgress:(float)arg1;
- (void)applyViewModel:(id)arg1;
- (id)viewModelWithInProgressVoice:(id)arg1 currentVoice:(id)arg2;
- (id)deriveVoicesWithTargetVoice:(id)arg1 currentVoice:(id)arg2;
- (id)specifiers;
- (id)inProgressOutputVoice;
- (id)outputVoice;
- (void)outputVoiceDidChange:(id)arg1;
- (void)languageCodeDidChange:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setParentController:(id)arg1;

@end

