/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/BLTRemoteObject.h>

@class BLTBulletinSendQueuePassthrough, BLTGizmoLegacyMap, NSMutableDictionary, NSString;

@protocol BLTCompanionServer;

@interface BLTRemoteGizmoClient : BLTRemoteObject

{
    BLTBulletinSendQueuePassthrough *_bulletinSendQueue;
    NSMutableDictionary *_gizmoToPhonePublisherBulletinIDMap;
    id <BLTCompanionServer> _server;
    BLTGizmoLegacyMap *_gizmoLegacyMap;
}

@property (weak, nonatomic) id <BLTCompanionServer> server;
@property (retain, nonatomic) BLTGizmoLegacyMap *gizmoLegacyMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setLastKnownConnectionStatus:(unsigned long long)arg1;
- (void)registerProtobufHandlers;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;
- (void)_pingPairedDevice;
- (void)_handleSyncStateChanged:(id)arg1;
- (void)handleAcknowledgeActionRequest:(id)arg1;
- (void)handleSnoozeActionRequest:(id)arg1;
- (void)handleDismissActionRequest:(id)arg1;
- (void)handleSupplementaryActionRequest:(id)arg1;
- (void)handleDidPlayLightsAndSirensReply:(id)arg1;
- (void)handleRemoveBulletinRequest:(id)arg1;
- (void)handleShouldSuppressLightsAndSirensNowRequest:(id)arg1;
- (void)handleHandlePairedDeviceReady:(id)arg1;
- (void)handleWillSendLightsAndSirensRequest:(id)arg1;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(_Bool)arg2 updateType:(unsigned long long)arg3 withTimeout:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned long long)arg3 withTimeout:(id)arg4;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3 withTimeout:(id)arg4;
- (void)_pingPairedDeviceWithRetry:(unsigned long long)arg1;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(_Bool)arg2 updateType:(unsigned long long)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
- (void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned long long)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
- (void)addBulletinSummary:(id)arg1;
- (void)updateBulletinList:(id)arg1;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(_Bool)arg2;
- (void)queuePendingRequests;

@end
