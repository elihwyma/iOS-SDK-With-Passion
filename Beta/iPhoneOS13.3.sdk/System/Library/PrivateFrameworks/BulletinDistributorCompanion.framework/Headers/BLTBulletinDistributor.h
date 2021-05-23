/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BBObserver, BLTBulletinDistributorMRUSectionCache, BLTBulletinFetcher, BLTClientReplyTimeoutManager, BLTGizmoLegacyMap, BLTHashCache, BLTPingSubscriberManager, BLTRemoteGizmoClient, BLTSectionConfiguration, BLTSettingSync, BLTUserNotificationList, BLTWatchKitAppList, NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface BLTBulletinDistributor : NSObject

{
    unsigned long long _stateHandler;
    _Bool _standaloneTestModeEnabled;
    BLTRemoteGizmoClient *_gizmoConnection;
    BBObserver *_bbObserver;
    NSMutableDictionary *_bulletins;
    NSMutableSet *_noticesFeed;
    NSMutableSet *_lockScreenFeed;
    BLTHashCache *_attachmentHashCache;
    BLTHashCache *_iconHashCache;
    BLTWatchKitAppList *_watchKitAppList;
    BLTSettingSync *_settingSync;
    NSDate *_startupTime;
    NSMutableDictionary *_pendingBulletinUpdates;
    NSMutableSet *_bulletinIDsWaitingOnGizmoAdd;
    BLTClientReplyTimeoutManager *_clientReplyTimeoutManager;
    BLTSectionConfiguration *_sectionConfiguration;
    BLTUserNotificationList *_userNotificationList;
    BLTBulletinFetcher *_bulletinFetcher;
    BLTPingSubscriberManager *_pingSubscriberManager;
    BLTGizmoLegacyMap *_gizmoLegacyMap;
    BLTBulletinDistributorMRUSectionCache *_mruSectionCache;
}

@property (retain, nonatomic) BBObserver *bbObserver;
@property (retain, nonatomic) NSMutableDictionary *bulletins;
@property (retain, nonatomic) NSMutableSet *noticesFeed;
@property (retain, nonatomic) NSMutableSet *lockScreenFeed;
@property (retain, nonatomic) BLTHashCache *attachmentHashCache;
@property (retain, nonatomic) BLTHashCache *iconHashCache;
@property (retain, nonatomic) BLTWatchKitAppList *watchKitAppList;
@property (retain, nonatomic) BLTSettingSync *settingSync;
@property (retain, nonatomic) NSDate *startupTime;
@property (nonatomic) _Bool standaloneTestModeEnabled;
@property (retain, nonatomic) NSMutableDictionary *pendingBulletinUpdates;
@property (retain, nonatomic) NSMutableSet *bulletinIDsWaitingOnGizmoAdd;
@property (retain, nonatomic) BLTClientReplyTimeoutManager *clientReplyTimeoutManager;
@property (retain, nonatomic) BLTSectionConfiguration *sectionConfiguration;
@property (retain, nonatomic) BLTUserNotificationList *userNotificationList;
@property (retain, nonatomic) BLTBulletinFetcher *bulletinFetcher;
@property (retain, nonatomic) BLTPingSubscriberManager *pingSubscriberManager;
@property (retain, nonatomic) BLTGizmoLegacyMap *gizmoLegacyMap;
@property (retain, nonatomic) BLTBulletinDistributorMRUSectionCache *mruSectionCache;
@property (retain, nonatomic) BLTRemoteGizmoClient *gizmoConnection;
@property (nonatomic, readonly) _Bool isStandaloneTestModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedDistributor;

- (id)init;
- (void)dealloc;
- (id)_stateDescription;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachment:(id)arg2 bulletin:(id)arg3;
- (void)observer:(id)arg1 composedImageFromThumbnailData:(id)arg2 forAttachment:(id)arg3 bulletin:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (struct CGSize)observer:(id)arg1 composedImageSizeForAttachment:(id)arg2 bulletin:(id)arg3 thumbnailSize:(struct CGSize)arg4;
- (void)observer:(id)arg1 prepareAttachment:(id)arg2 beforeDeliveringBulletin:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (_Bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (_Bool)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)disableStandaloneTestMode;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4;
- (_Bool)isLocallyConnectedToRemote;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendBulletinSummary:(id)arg1;
- (void)_handleSyncStateChanged:(id)arg1;
- (void)handleAction:(id)arg1;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)handleDidPlayLightsAndSirens:(_Bool)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 replyToken:(id)arg6;
- (_Bool)shouldSuppressLightsAndSirensNow;
- (void)willSendLightsAndSirensWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 inPhoneSection:(id)arg3 systemApp:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendAllSectionInfoWithSpool:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)spoolSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(_Bool)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)clearSectionInfoSentCache;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)settingOverrides;
- (id)originalSettings;
- (id)overriddenSettings;
- (void)removeSectionID:(id)arg1;
- (void)_performSync;
- (void)_startBulletinListening;
- (void)_handleAllSyncComplete;
- (void)_handleInitialSyncStateCompleteChanged:(id)arg1;
- (_Bool)_willNanoPresent:(unsigned long long)arg1;
- (void)_registerForPairedDeviceBuildChanges;
- (void)_setupBBObserver;
- (void)_sendCurrentBulletinIdentifiers;
- (void)_reloadBulletinsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_mapBulletin:(id)arg1;
- (void)_handleDidPlayLightsAndSirens:(_Bool)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 finalReply:(_Bool)arg4 replyToken:(id)arg5;
- (void)_notifyGizmoOfCancelBulletin:(id)arg1 sectionID:(id)arg2 universalSectionID:(id)arg3 feed:(unsigned long long)arg4 withBulletinDate:(id)arg5;
- (void)_handleAddBulletin:(id)arg1 feed:(unsigned long long)arg2 shouldPlayLightsAndSirens:(_Bool)arg3 performedWithSuccess:(_Bool)arg4 sendAttemptTime:(id)arg5 connectionStatus:(unsigned long long)arg6 isGizmoReady:(_Bool)arg7 shouldSendReplyIfNeeded:(_Bool)arg8 replyToken:(id)arg9;
- (void)_postWillSendBulletinToGizmoNotificationForBulletin:(id)arg1;
- (void)_rememberBulletin:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)_attachAttachment:(id)arg1 attachmentType:(long long)arg2 toBulletin:(id)arg3;
- (void)_attachIconToBulletin:(id)arg1;
- (void)_sendPBBulletin:(id)arg1 forBulletin:(id)arg2 feed:(unsigned long long)arg3 updateType:(unsigned long long)arg4 playLightsAndSirens:(_Bool)arg5 shouldSendReplyIfNeeded:(_Bool)arg6;
- (void)_performNextPendingBulletinUpdateForBulletinID:(id)arg1;
- (id)_obsoletionDateRelativeToNow;
- (void)_performModifyBulletin:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)_performRemoveBulletin:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)_removeTranscodedAttachmentIfNeededForBulletin:(id)arg1;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 attachment:(id)arg5 attachmentType:(long long)arg6 alwaysSend:(_Bool)arg7 withReply:(CDUnknownBlockType)arg8;
- (void)_pingSubscriberWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (_Bool)_willNanoPresent:(unsigned long long)arg1 forBulletin:(id)arg2 feed:(unsigned long long)arg3;
- (unsigned long long)_nanoPresentableFeedFromPhoneFeed:(unsigned long long)arg1;
- (id)_replyTokenForSectionID:(id)arg1 publisherMatchID:(id)arg2;
- (void)setReplyBlock:(CDUnknownBlockType)arg1 forSection:(id)arg2 bulletin:(id)arg3 publicationDate:(id)arg4 replyToken:(id)arg5;
- (void)_notifyGizmoOfBulletin:(id)arg1 forFeed:(unsigned long long)arg2 updateType:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 shouldSendReplyIfNeeded:(_Bool)arg5 attachment:(id)arg6 attachmentType:(long long)arg7 replyToken:(id)arg8;
- (void)_cleanupForAddedBulletin:(id)arg1;
- (void)_subscriberWillAllowBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_enqueuBulletinUpdate:(unsigned long long)arg1 bulletin:(id)arg2 feed:(unsigned long long)arg3;
- (void)_handleDidPlayLightsAndSirens:(_Bool)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 fromGizmo:(_Bool)arg6 finalReply:(_Bool)arg7 replyToken:(id)arg8;
- (id)_bulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;

@end
