/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBGuaranteedOnceCache, BBObserverServerProxy, NSMapTable, NSMutableDictionary, NSString;

@protocol BBObserverDelegate, OS_dispatch_queue;

@interface BBObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_sectionParametersBySectionID;
    NSMapTable *_bulletinLifeAssertions;
    NSMutableDictionary *_remainingFeedsByBulletinID;
    BBObserverServerProxy *_serverProxy;
    _Bool _isGateway;
    NSMutableDictionary *_attachmentUUIDsForBulletinID;
    BBGuaranteedOnceCache *_cachedDataForAttachmentUUID;
    BBGuaranteedOnceCache *_cachedComposedImageForAttachmentUUID;
    BBGuaranteedOnceCache *_cachedComposedImageSizeForAttachmentUUID;
    id <BBObserverDelegate> _delegate;
    unsigned long long _observerFeed;
    NSString *_gatewayName;
    unsigned long long _gatewayPriority;
}

@property (weak, nonatomic) id <BBObserverDelegate> delegate;
@property (nonatomic) unsigned long long observerFeed;
@property (copy, nonatomic, readonly) NSString *gatewayName;
@property (nonatomic, readonly) unsigned long long gatewayPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)gatewayWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4;
+ (id)observerWithQueue:(id)arg1 calloutQueue:(id)arg2 forGatewayName:(id)arg3;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (_Bool)isValid;
- (id)initWithQueue:(id)arg1;
- (void)sendResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendResponse:(id)arg1;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2;
- (void)_queue_invalidate;
- (void)getSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)_initWithQueue:(id)arg1 calloutQueue:(id)arg2 gatewayName:(id)arg3 gatewayPriority:(unsigned long long)arg4 isGateway:(_Bool)arg5;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 gatewayName:(id)arg3 gatewayPriority:(unsigned long long)arg4 isGateway:(_Bool)arg5 connection:(id)arg6;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForAllSections;
- (void)clearSection:(id)arg1;
- (void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeed:(unsigned long long)arg3;
- (id)_queue_cachedDataForAttachment:(id)arg1;
- (void)_getDataIgnoringCacheForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_queue_cachedComposedImageForAttachment:(id)arg1;
- (void)_getComposedImageIgnoringCacheForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_queue_cachedComposedImageSizeForAttachment:(id)arg1;
- (void)_getComposedImageSizeIgnoringCacheForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_queue_associateAttachment:(id)arg1 withBulletin:(id)arg2;
- (void)_queue_cleanupAttachmentCacheForBulletinID:(id)arg1;
- (void)_queue_serverProxy:(id)arg1 connectionStateDidChange:(_Bool)arg2;
- (void)_queue_updateBulletin:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_prewarmSectionParametersAndAttachmentsForBulletin:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getParametersForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_queue_hasCachedDataForAttachment:(id)arg1;
- (void)_queue_setCachedData:(id)arg1 forAttachment:(id)arg2 bulletin:(id)arg3;
- (_Bool)_queue_hasCachedComposedImageForAttachment:(id)arg1;
- (void)_queue_setCachedComposedImage:(id)arg1 forAttachment:(id)arg2 bulletin:(id)arg3;
- (_Bool)_queue_hasCachedComposedImageSizeForAttachment:(id)arg1;
- (void)_queue_setCachedComposedImageSize:(id)arg1 forAttachment:(id)arg2 bulletin:(id)arg3;
- (void)_queue_registerBulletin:(id)arg1 withTransactionID:(unsigned long long)arg2;
- (void)_queue_updateAddBulletin:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_queue_updateModifyBulletin:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_queue_updateRemoveBulletin:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)assertionExpired:(id)arg1 transactionID:(unsigned long long)arg2;
- (void)getSectionInfoForActiveSectionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestListBulletinsForSectionID:(id)arg1;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getBulletinsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)clearBulletins:(id)arg1 inSection:(id)arg2;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2;
- (id)parametersForSectionID:(id)arg1;
- (void)getDataForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getComposedImageForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getComposedImageSizeForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)cachedComposedImageForBulletin:(id)arg1 attachment:(id)arg2;
- (struct CGSize)cachedComposedImageSizeForBulletin:(id)arg1 attachment:(id)arg2;
- (void)serverProxy:(id)arg1 connectionStateDidChange:(_Bool)arg2;
- (void)updateBulletin:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)updateSectionInfo:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
- (void)removeSection:(id)arg1;
- (void)updateGlobalSettings:(id)arg1;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (id)initWithQueue:(id)arg1 forGateway:(id)arg2;
- (id)initWithQueue:(id)arg1 asGateway:(id)arg2 priority:(unsigned long long)arg3;
- (void)getAttachmentImageForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getPrimaryAttachmentDataForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
