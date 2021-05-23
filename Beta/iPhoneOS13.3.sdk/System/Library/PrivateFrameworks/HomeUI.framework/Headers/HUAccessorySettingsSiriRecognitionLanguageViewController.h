/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUAccessorySettingsSiriRecognitionLanguageItemManager, NAFuture, NSString;

@interface HUAccessorySettingsSiriRecognitionLanguageViewController : HUItemTableViewController

{
    NAFuture *_changeLanguageFuture;
    long long _selectedLanguageIndex;
}

@property (nonatomic, readonly) HUAccessorySettingsSiriRecognitionLanguageItemManager *itemManager;
@property (retain, nonatomic) NAFuture *changeLanguageFuture;
@property (nonatomic) long long selectedLanguageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (_Bool)_shouldPresentAlertRequestingToTurnOffVoiceRecognition:(id)arg1;
- (void)_presentAlertConfirmingLanguageChangeAndTurnOffVoiceRecognition:(id)arg1 indexPath:(id)arg2;
- (void)_presentAlertConfirmingLanguageChangeForThisORAllHomePods:(id)arg1 indexPath:(id)arg2;
- (void)_changeSiriLanguageOnlyForThisHomePod:(id)arg1 turnOffVoiceID:(_Bool)arg2;
- (void)_attemptToFixVoiceRecognitionOnboardingFailures:(id)arg1;
- (void)_presentAlertConfirmingLanguageChangeForAllHomeMembers:(id)arg1 indexPath:(id)arg2;
- (void)_clearSpinner;
- (void)_turnOffVoiceIDAndChangeSiriLanguageForAllHomePods:(id)arg1;
- (_Bool)_isAnyHomePodOnSupportedMultiUserLanguage;
- (void)_turnOffVoiceIDForTargetLanguageOption:(id)arg1;

@end
