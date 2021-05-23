/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BLTSectionConfiguration, NPSDomainAccessor, NSDate, NSString;

@protocol BLTSectionInfoListProviderDelegate;

@interface BLTSectionInfoListBridgeProvider : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
    NSDate *_lastKnownBridgeSettingsChangeDate;
    NPSDomainAccessor *_npsDomainAccessor;
    id <BLTSectionInfoListProviderDelegate> _delegate;
    BLTSectionConfiguration *_sectionConfiguration;
}

@property (retain, nonatomic) BLTSectionConfiguration *sectionConfiguration;
@property (weak, nonatomic) id <BLTSectionInfoListProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reloadUpdatedOverrides;
- (void)_reloadUpdatedOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_loadOverridesChangedSince:(id)arg1;
- (id)_companionSetupNotificationSettingsDictionaryForSectionInfo:(id)arg1 sectionID:(id)arg2;
- (id)initWithSectionConfiguration:(id)arg1;
- (void)setNotificationsLevel:(int)arg1 sectionID:(id)arg2 forceCustom:(_Bool)arg3;
- (void)setCustomSettingsWithSectionInfo:(id)arg1;
- (void)setCustomSettingsWithSectionInfo:(id)arg1 watchSectionID:(id)arg2;
- (void)enableCustomSettingsForWatchSectionID:(id)arg1;
- (void)removeSectionWithSectionID:(id)arg1;

@end
