/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class AVPlayer, AVPlayerLooper, AVTAvatarStore, CKCNSharingProfileOnboardingFlowManager, CNSharingProfileAvatarItemProviderConfiguration, IMCNMeCardSharingResult, IMCloudKitSyncState, NSString, OBWelcomeFullCenterContentController, UINavigationController;

@protocol AVTAvatarRecord, CKOnboardingControllerDelegate;

@interface CKOnboardingController : NSObject

{
    int _micLayout;
    id <CKOnboardingControllerDelegate> _delegate;
    IMCloudKitSyncState *_syncState;
    UINavigationController *_navigationController;
    OBWelcomeFullCenterContentController *_memojiCreationController;
    AVPlayer *_memojiVideoPlayer;
    AVPlayerLooper *_memojiVideoPlayerLooper;
    AVTAvatarStore *_avatarStore;
    id <AVTAvatarRecord> _avatarRecord;
    IMCNMeCardSharingResult *_pendingMeCardSharingResult;
    CKCNSharingProfileOnboardingFlowManager *_nicknameFlowManager;
    CNSharingProfileAvatarItemProviderConfiguration *_avatarItemProviderConfiguration;
}

@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic, getter=_memojiCreationController) OBWelcomeFullCenterContentController *memojiCreationController;
@property (retain, nonatomic) AVPlayer *memojiVideoPlayer;
@property (retain, nonatomic) AVPlayerLooper *memojiVideoPlayerLooper;
@property (retain, nonatomic) AVTAvatarStore *avatarStore;
@property (retain, nonatomic) id <AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) IMCNMeCardSharingResult *pendingMeCardSharingResult;
@property (retain, nonatomic) CKCNSharingProfileOnboardingFlowManager *nicknameFlowManager;
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (weak, nonatomic) id <CKOnboardingControllerDelegate> delegate;
@property (retain, nonatomic) IMCloudKitSyncState *syncState;
@property (nonatomic) int micLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_userDefaults;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)meCardSharingOnboardingAudienceViewControllerDidFinish:(id)arg1 withSharingAudience:(unsigned long long)arg2;
- (void)flowManager:(id)arg1 didFinishWithResult:(id)arg2;
- (void)sharingPicker:(id)arg1 didChangeSharingState:(_Bool)arg2;
- (void)sharingPickerDidFinish:(id)arg1;
- (void)sharingPicker:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (void)meCardSharingOnboardingEditController:(id)arg1 didFinishWithOnboardingResult:(id)arg2;
- (void)prepareForSuspend;
- (_Bool)_shouldShowNicknameOnboardingFlow;
- (_Bool)presentNicknameSharingSetupFlow;
- (_Bool)_meCardSharingEnabled;
- (unsigned long long)_meCardSharingAudience;
- (id)_meCardSharingState;
- (_Bool)_shouldPresentNewInMessages;
- (void)prepareForOnboarding;
- (id)_introController;
- (void)presentOnboarding:(id)arg1;
- (void)_writeDefaultWhatsNewDidShow;
- (_Bool)_shouldShowNicknameOnboardingFlowOnLaunch;
- (void)startNicknameOnboardingIfNeeded;
- (_Bool)_shouldPresentMiCWelcome;
- (void)_beginMiCWelcomeScreen;
- (void)_writeDefaultMiCWelcome;
- (_Bool)alwaysShowNicknameOnboarding;
- (_Bool)_shouldShowNicknameOnboardingFlowIgnoringVersion:(_Bool)arg1;
- (_Bool)_isRunningTest;
- (unsigned long long)nicknameOnboardingLastShownVersion;
- (_Bool)accountCanCreateNickname;
- (id)_nameAndPhotoSharingIntroController;
- (void)_presentMemojiCreationIfNeeded:(CDUnknownBlockType)arg1 skipAction:(CDUnknownBlockType)arg2;
- (void)pushMemojiCreationStepIfNeeded;
- (id)_nicknameController;
- (void)pushMemojiCreationStep;
- (void)pushNameAndPhotoSharingIntroStepIfNeeded;
- (void)presentMemojiSetup;
- (id)contactForNicknameOnboarding;
- (void)pushNameAndPhotoSharingConfigDataStep;
- (void)completedOnboarding;
- (void)pushNameAndPhotoSharingIntroStep;
- (void)_writeDefaultNicknameOnboardingVersion;
- (void)completedOnboardingWithCompletion:(CDUnknownBlockType)arg1;
- (long long)_whatsNewLatestShippingVersion;
- (long long)_whatsNewVersion;
- (void)pushNameAndPhotoSharingConfigSharingPreferenceStep;
- (_Bool)readyToShowNextScreen;
- (_Bool)_readyToShowNextScreenWithTimeout:(unsigned long long)arg1;
- (void)_onClickMiCOnboard;
- (void)_onClickMiCNotNow;
- (void)_beginMOCFlowForState:(id)arg1 rampState:(id)arg2;
- (void)reportMoCLayoutShown:(int)arg1;
- (id)_micController;
- (void)_tryToEnableHSA2;
- (void)_tryToEnableMOC;
- (void)sharingPicker:(id)arg1 didSelectNameFormat:(unsigned long long)arg2;
- (_Bool)presentOnboardingIfNeeded;
- (unsigned long long)_meCardSharingNameFormat;

@end
