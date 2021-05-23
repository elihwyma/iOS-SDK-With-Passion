/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface BLTSectionConfigurationInternal : NSObject

{
    NSDictionary *_configurations;
}

- (id)init;
- (id)_loadConfigurations;
- (unsigned long long)coordinationTypeForSectionID:(id)arg1 subtype:(long long)arg2 category:(id)arg3;
- (unsigned long long)coordinationTypeForSectionID:(id)arg1 subtype:(long long)arg2;
- (_Bool)hasSectionIDOptedOutOfAttachmentCoordination:(id)arg1;
- (_Bool)shouldSectionIDSettingsAlwaysSync:(id)arg1;
- (_Bool)shouldSectionIDAlwaysAlert:(id)arg1;
- (_Bool)hasSectionIDOptedOutOfWaitForUserIdle:(id)arg1;
- (_Bool)hasSectionIDOptedOutOfNotificationTuning:(id)arg1;
- (_Bool)hasSectionIDDisplayedCriticalBulletins:(id)arg1;
- (_Bool)applyWhitelistToChildSections:(id)arg1;
- (unsigned long long)legacyMapLocationForSectionID:(id)arg1;
- (id)watchVersionThatUsesUserInfoForContextForSectionID:(id)arg1;
- (id)additionalBridgeSectionIDsForSectionID:(id)arg1;
- (_Bool)hasSectionIDOptedOutOfSubtitleRemovalForOlderWatches:(id)arg1;
- (_Bool)shouldUsePhoneExpirationDateForSectionID:(id)arg1;
- (_Bool)hasSectionIDOptedOutOfSettingsCoordination:(id)arg1;
- (_Bool)setCoordinationType:(unsigned long long)arg1 sectionID:(id)arg2;
- (id)watchVersionThatUsesAttachmentURLForSectionID:(id)arg1;

@end
