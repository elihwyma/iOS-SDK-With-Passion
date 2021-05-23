/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@protocol AssistantUIDelegate

- (unsigned short)doneWithAssistantResult: /* Error: Ran out of types for this method. */;
- (unsigned short)assistantUpdateProgress:forState: /* Error: Ran out of types for this method. */;
- (unsigned short)assistantWaitingForResourcesStart;
- (unsigned short)assistantWaitingForResourcesComplete;
- (unsigned short)presentUIForRecommendationStatus;
- (unsigned short)presentUIForRecommmendationTargetInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)presentUIForRecommendationResult:paramDict: /* Error: Ran out of types for this method. */;
- (unsigned short)presentUIForStepByStepStart;
- (unsigned short)presentUIForStepByStepNextStep:paramDict: /* Error: Ran out of types for this method. */;
- (unsigned short)presentUIForStepByStepResult: /* Error: Ran out of types for this method. */;
- (unsigned short)presentUIForSetupStatusWithRecommendationDict: /* Error: Ran out of types for this method. */;
- (unsigned short)presentUIForSetupResult:baseStationInfo:withPrompt: /* Error: Ran out of types for this method. */;
- (unsigned short)showTellUserToPlugInEthernetForStatus:paramDict: /* Error: Ran out of types for this method. */;
- (unsigned short)showTellUserToResetBroadbandDeviceForStatus:paramDict: /* Error: Ran out of types for this method. */;
- (unsigned short)showAskUserForPPPoECredentialsForStatus:paramDict: /* Error: Ran out of types for this method. */;
- (unsigned short)showAskUserSwapCablingForStatus:paramDict: /* Error: Ran out of types for this method. */;
- (unsigned short)connectionVerificationSucceededForSelector: /* Error: Ran out of types for this method. */;
- (unsigned short)showUIConfigPromptToSendDiagsUsageStatsWithParamDict: /* Error: Ran out of types for this method. */;
- (unsigned short)showUIConfigPromptForGuestNetConfigWithParamDict: /* Error: Ran out of types for this method. */;

@end
