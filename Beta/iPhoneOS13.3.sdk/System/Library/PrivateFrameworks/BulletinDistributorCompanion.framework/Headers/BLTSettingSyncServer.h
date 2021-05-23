/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/BLTRemoteObject.h>

#import <BulletinDistributorCompanion/Swift-Protocol.h>

@class BLTPreviouslySentMessageStore, BLTSettingsSendSerializerPassthrough, NSString;

@protocol BLTSettingSyncingClient;

@interface BLTSettingSyncServer : BLTRemoteObject <Swift>

{
    BLTSettingsSendSerializerPassthrough *_settingSendSerializer;
    id <BLTSettingSyncingClient> _delegate;
    BLTPreviouslySentMessageStore *_sectionInfoPreviouslySentMessageStore;
    BLTPreviouslySentMessageStore *_sectionSubtypeParametersIconsPreviouslySentMessageStore;
}

@property (retain, nonatomic) BLTPreviouslySentMessageStore *sectionInfoPreviouslySentMessageStore;
@property (retain, nonatomic) BLTPreviouslySentMessageStore *sectionSubtypeParametersIconsPreviouslySentMessageStore;
@property (weak, nonatomic) id <BLTSettingSyncingClient> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_handleResponse:(id)arg1;
- (void)registerProtobufHandlers;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;
- (void)removeSectionWithSectionID:(id)arg1;
- (void)sendRemoteGlobalSpokenSettingEnabled:(_Bool)arg1 date:(id)arg2;
- (void)clearSectionInfoSentCache;
- (void)setSectionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3;
- (void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsSoundEnabled:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsCriticalAlertEnabled:(int)arg1 sectionID:(id)arg2;
- (_Bool)isSectionInfoSentCacheEmpty;
- (void)setSectionInfo:(id)arg1 withQueue:(id)arg2 withSent:(CDUnknownBlockType)arg3 withAcknowledgement:(CDUnknownBlockType)arg4 spoolToFile:(_Bool)arg5;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 withQueue:(id)arg4 withSent:(CDUnknownBlockType)arg5 withAcknowledgement:(CDUnknownBlockType)arg6 spoolToFile:(_Bool)arg7;
- (void)removeSectionWithSectionID:(id)arg1 sent:(CDUnknownBlockType)arg2;
- (void)sendSpooledRequestsNowWithSent:(CDUnknownBlockType)arg1 withAcknowledgement:(CDUnknownBlockType)arg2;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3 spoolToFile:(_Bool)arg4;
- (void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2 spoolToFile:(_Bool)arg3;
- (void)removeSectionInfoSentCacheForSectionID:(id)arg1;
- (void)handleSetSectionInfoRequest:(id)arg1;
- (void)handleSetSectionSubtypeParametersIconRequest:(id)arg1;
- (void)handleRemoveSectionRequest:(id)arg1;
- (void)handleSetNotificationsAlertLevelRequest:(id)arg1;
- (void)handleSetNotificationsGroupingRequest:(id)arg1;
- (void)handleSetNotificationsSoundRequest:(id)arg1;
- (void)handleSetNotificationsCriticalAlertRequest:(id)arg1;
- (void)handleSetRemoteGlobalSpokenSettingEnabledRequest:(id)arg1;
- (void)handleSetSectionInfoResponse:(id)arg1;
- (void)handleSetSectionSubtypeParametersIconResponse:(id)arg1;

@end
