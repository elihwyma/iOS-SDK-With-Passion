/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol BLTSectionInfoListBBProvider, BLTSectionInfoListDelegate, BLTSectionInfoListOverrideProvider;

@interface BLTSectionInfoList : NSObject

{
    NSMutableDictionary *_sectionInfoListItemsBySectionID;
    NSMutableSet *_sectionInfoSectionIDs;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_loadingCompletionHandlers;
    _Bool _loading;
    _Bool _loaded;
    id <BLTSectionInfoListDelegate> _delegate;
    id <BLTSectionInfoListOverrideProvider> _overrideProvider;
    id <BLTSectionInfoListBBProvider> _sectionInfoProvider;
}

@property (weak, nonatomic) id <BLTSectionInfoListDelegate> delegate;
@property (retain, nonatomic) id <BLTSectionInfoListOverrideProvider> overrideProvider;
@property (retain, nonatomic) id <BLTSectionInfoListBBProvider> sectionInfoProvider;
@property (nonatomic, readonly, getter=hasLoaded) _Bool loaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)sectionIDs;
- (id)overrides;
- (id)universalSectionIDForSectionID:(id)arg1;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSectionInfoForSectionIDs:(id)arg1;
- (void)removedSectionWithSectionID:(id)arg1;
- (void)updateOverrides:(id)arg1 forSectionID:(id)arg2;
- (id)originalSettings;
- (id)overriddenSettings;
- (void)_updateListItem:(id)arg1 overrides:(id)arg2 sectionID:(id)arg3;
- (void)_migrateFromExternalDeviceSwitchToOverrides:(id)arg1 sectionID:(id)arg2;
- (id)_sectionInfoFromSectionID:(id)arg1 displayName:(id *)arg2;
- (id)_lock_sectionInfoFromListItem:(id)arg1 sectionID:(id)arg2 displayName:(id *)arg3;
- (id)_overriddenSectionInfoForSectionID:(id)arg1 originalSectionInfo:(id *)arg2 displayName:(id *)arg3;
- (id)overriddenSectionInfoForSectionID:(id)arg1;
- (id)bbSectionInfoForSectionID:(id)arg1;
- (id)settingsDescriptionForSectionIDs:(id)arg1;
- (id)sectionOverridesOnly;
- (id)sectionOverrideOnlyForSectionID:(id)arg1;
- (_Bool)hasCustomSettingsSetForSectionID:(id)arg1;
- (void)reloadBBSection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mapSection:(id)arg1 map:(id)arg2;

@end
