/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/Swift-Protocol.h>

@protocol BLTTTestServiceServerExportedInterface <Swift>

- (unsigned short)addBulletin:forFeed:playLightsAndSirens:attachment:attachmentType:alwaysSend:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendSectionInfoWithSectionID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendAllSectionInfoWithSpool:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)spoolSectionInfoWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSectionInfoSentCacheWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getStandaloneTestModeEnabledWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)enableStandaloneTestModeWithMinimumSendDelay:maximumSendDelay:minimumResponseDelay:maximumResponseDelay:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)disableStandaloneTestModeWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)willAlertForSectionID:subtype:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)settingOverridesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)originalSettingsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)overriddenSettingsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeSectionID:completion: /* Error: Ran out of types for this method. */;

@end
