/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HUHomeFeatureOnboardingUtilities : NSObject

+ (id)fetchSupportedMultiUserLanguages:(id *)arg1;
+ (_Bool)atLeastOneHomePodHasLanguageSettingsForHome:(id)arg1;
+ (id)analyzeHomeAssistantDevicesForSupportedMultiUserLanguages:(id)arg1 home:(id)arg2;
+ (_Bool)home:(id)arg1 hasSomeHomePodsOnSupportedMultiUserLanguages:(id)arg2;
+ (void)presentAlertConfirmingTurningOffPersonalRequestsFrom:(id)arg1;
+ (id)home:(id)arg1 createMultiUserLanguageToHomePodsMapping:(id)arg2;
+ (void)fetchSupportedMultiUserLanguagesWithCompletion:(CDUnknownBlockType)arg1;
+ (id)home:(id)arg1 processHomeFeatureOnboarderResults:(id)arg2;
+ (id)home:(id)arg1 onboardIdentifyVoiceFromPresentingViewController:(id)arg2 usageOptions:(id)arg3;
+ (id)home:(id)arg1 onboardAllFeaturesFromPresentingViewController:(id)arg2 usageOptions:(id)arg3;
+ (id)groupedFeaturesForOnboardingFlowKeyPaths:(id)arg1;
+ (id)home:(id)arg1 onboardFeaturesForKeyPaths:(id)arg2 presentingViewController:(id)arg3 usageOptions:(id)arg4;
+ (_Bool)hasUserSaidYesToVoiceIdentificationInResults:(id)arg1;
+ (id)_checkIdentifyVoicePrerequisitesForHome:(id)arg1;
+ (_Bool)isDeviceUsingASupportedMultiUserSiriLanguage:(id)arg1;
+ (id)createPersonalIdentityDeviceLanguageMismatchList:(id)arg1;
+ (_Bool)_checkIdentifyVoicePrerequisitesSimpleForHome:(id)arg1;
+ (id)checkVoiceProfileAvailabiltyForLanguage:(id)arg1;
+ (_Bool)_userHasSaidYesToShowTVViewingProfilesIn:(id)arg1;
+ (void)presentAlertConfirmingTurningOfVoiceRecognitionFrom:(id)arg1;
+ (_Bool)home:(id)arg1 voiceRecognitionIsSupportedForCurrentUserOnHomePod:(id)arg2;
+ (_Bool)currentUserHasUnfinishedFeatureOnboardingForHome:(id)arg1;
+ (_Bool)home:(id)arg1 canShowIdentifyVoiceOnboardingWithUsageOptions:(id)arg2;
+ (unsigned long long)home:(id)arg1 checkForOwnerUpgradeRequirementsFromResults:(id)arg2;
+ (unsigned long long)home:(id)arg1 checkForMultiUserDeviceUpgradeRequirements:(id)arg2;
+ (id)processLanguageAndMediaProfileInfo:(id)arg1;

@end
