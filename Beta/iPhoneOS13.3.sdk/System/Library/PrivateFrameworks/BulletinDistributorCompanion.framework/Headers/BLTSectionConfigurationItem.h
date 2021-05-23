/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber;

@interface BLTSectionConfigurationItem : NSObject

{
    _Bool _optOutOfAttachmentTransmission;
    _Bool _alwaysSyncSettings;
    _Bool _alwaysAlert;
    _Bool _optOutOfWaitForUserIdle;
    _Bool _applyWhitelistToChildSections;
    _Bool _optOutOfNotificationTuning;
    _Bool _hasLegacyMapInUserInfo;
    _Bool _hasLegacyMapInContext;
    _Bool _optOutOfSubtitleRemovalForOlderWatches;
    _Bool _shouldUsePhoneExpirationDate;
    _Bool _optOutOfSettingsCoordination;
    _Bool _overrideAppliesToCoordinationOptOut;
    unsigned long long _coordinationType;
    NSArray *_whitelistedSubtypes;
    NSArray *_blacklistedCategories;
    NSArray *_whitelistedCategories;
    NSNumber *_watchVersionThatUsesUserInfoForContext;
    NSArray *_additionalBridgeSectionIDs;
    NSNumber *_watchVersionThatUsesAttachmentURL;
}

@property unsigned long long coordinationType;
@property (nonatomic) _Bool optOutOfAttachmentTransmission;
@property (nonatomic) _Bool alwaysSyncSettings;
@property (retain, nonatomic) NSArray *whitelistedSubtypes;
@property (retain, nonatomic) NSArray *blacklistedCategories;
@property (retain, nonatomic) NSArray *whitelistedCategories;
@property (nonatomic) _Bool alwaysAlert;
@property (nonatomic) _Bool optOutOfWaitForUserIdle;
@property (nonatomic) _Bool applyWhitelistToChildSections;
@property (nonatomic) _Bool optOutOfNotificationTuning;
@property (nonatomic) _Bool hasLegacyMapInUserInfo;
@property (nonatomic) _Bool hasLegacyMapInContext;
@property (retain, nonatomic) NSNumber *watchVersionThatUsesUserInfoForContext;
@property (retain, nonatomic) NSArray *additionalBridgeSectionIDs;
@property (nonatomic) _Bool optOutOfSubtitleRemovalForOlderWatches;
@property (nonatomic) _Bool shouldUsePhoneExpirationDate;
@property (nonatomic) _Bool optOutOfSettingsCoordination;
@property (nonatomic) _Bool overrideAppliesToCoordinationOptOut;
@property (retain, nonatomic) NSNumber *watchVersionThatUsesAttachmentURL;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)coordinationTypeWithSubtype:(long long)arg1;
- (_Bool)hasDisplayedCriticalBulletins;
- (_Bool)updateCoordinationType:(unsigned long long)arg1;

@end
