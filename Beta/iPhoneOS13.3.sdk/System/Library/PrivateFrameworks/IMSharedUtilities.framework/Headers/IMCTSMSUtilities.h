/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMCTSMSUtilities : NSObject

+ (_Bool)IMMMSSupportedAndConfiguredForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMMMSEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (int)IMMMSMaximumSlideCountForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (id)IMUniqueIdentifierForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMReadMMSUserOverrideForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (double)IMMMSMaximumDurationWithPreset:(id)arg1 phoneNumber:(id)arg2 simID:(id)arg3;
+ (int)IMMMSMaximumMessageByteCountForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMMMSEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)MMSRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 reset:(_Bool)arg3;
+ (void)IMSynchronizeMMSCapabilityToWatch:(_Bool)arg1;
+ (id)IMPhoneNumbersEnabledForMultipleSubscriptionDevice;
+ (_Bool)IMReadEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (unsigned long long)IMReadAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMMMSGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (int)IMMMSMaxRecipientsForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (int)IMMMSMaxImageDimensionForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMMMSSupportsH264VideoForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (double)IMMMSMaximumAudioDurationForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (double)IMMMSMaximumVideoDurationForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (void)IMiMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long *)arg1 cellSize:(unsigned long long *)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;
+ (unsigned long long)IMiMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long *)arg1 cellSize:(unsigned long long *)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;
+ (unsigned long long)IMiMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long *)arg1 cellSize:(unsigned long long *)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;
+ (id)IMMMSEmailAddressToMatchForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMShouldShowMMSEmailAddress:(id)arg1 simID:(id)arg2;
+ (_Bool)IMIsEagerUploadEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMMMSRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (void)IMSynchronizePreferredSubscriptionMMSCapabilityToWatch;
+ (_Bool)IMMessagesFilteringSettingForPreferedSubscription;

@end
