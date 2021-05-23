/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSURL.h>

@interface NSURL (HUAdditions)

@property (nonatomic, readonly) _Bool hu_isHomeKnowledgeBasedArticleURL;

+ (id)hu_learnAboutNetworksRequiringProfilesURL;
+ (id)hu_learnAboutUnshareableNetworksURL;
+ (id)hu_locationDeviceSettingsURL;
+ (id)hu_applePrivacyURL;
+ (id)_localeString;
+ (id)hu_learnToAddAccessoriesURL;
+ (id)hu_learnAboutNetworkProtectionURL;
+ (id)hu_notificationSettingsURL;
+ (id)hu_wifiSettingsURL;
+ (id)hu_allowAccessWhileLockedSettingsURL;
+ (id)hu_locationServicesSettingsURL;
+ (id)hu_openiCloudPreferencesURL;
+ (id)hu_openiCloudKeychainPreferences;
+ (id)hu_cameraRecordingURL;

@end
