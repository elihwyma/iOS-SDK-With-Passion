/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBObserver, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface BBObserverServerProxy : NSObject

{
    _Bool _isValid;
    _Bool _isEstablished;
    BBObserver *_observer;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (weak, nonatomic) BBObserver *observer;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;

+ (id)xpcInterface;

- (void)dealloc;
- (void)invalidate;
- (_Bool)isValid;
- (id)initWithObserver:(id)arg1 connection:(id)arg2 queue:(id)arg3 calloutQueue:(id)arg4;
- (void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;
- (void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;
- (void)getSectionInfoWithHandler:(CDUnknownBlockType)arg1;
- (void)getSectionInfoForActiveSectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForAllSections;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getBulletinsWithHandler:(CDUnknownBlockType)arg1;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)handleResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)clearSection:(id)arg1;
- (void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
- (void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getPNGDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(_Bool)arg3 sizeConstraints:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)getAspectRatioForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;
- (void)updateSectionInfo:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
- (void)removeSection:(id)arg1;
- (void)updateGlobalSettings:(id)arg1;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (void)updateBulletin:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getObserverDebugInfo:(CDUnknownBlockType)arg1;
- (_Bool)established;

@end
