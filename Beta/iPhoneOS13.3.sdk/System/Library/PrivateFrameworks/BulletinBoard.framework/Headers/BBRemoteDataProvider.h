/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BulletinBoard/BBDataProvider.h>

@class NSObject, NSString;

@protocol BBRemoteDataProviderClientProxy, BBRemoteDataProviderDelegate, OS_dispatch_queue;

@interface BBRemoteDataProvider : BBDataProvider

{
    NSString *_sectionID;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    id <BBRemoteDataProviderClientProxy> _clientProxy;
    _Bool _connected;
    _Bool _serverIsReady;
    NSObject<OS_dispatch_queue> *_serverControlQueue;
    id <BBRemoteDataProviderDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)sectionIdentifier;
- (void)dataProviderDidLoad;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(_Bool)arg3 sizeConstraints:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)invalidateBulletins;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;
- (void)modifyBulletin:(id)arg1;
- (void)withdrawBulletinsWithRecordID:(id)arg1;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)reloadSectionParameters:(id)arg1;
- (void)reloadDefaultSectionInfo:(id)arg1;
- (void)getClearedInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)setClearedInfo:(id)arg1;
- (void)getSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setClientProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSectionID:(id)arg1 delegate:(id)arg2;
- (void)setServerIsReady:(_Bool)arg1;
- (_Bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)startWatchdog;
- (void)reloadIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canPerformMigration;
- (void)_logDoesNotRespond:(SEL)arg1;
- (void)_sendClientRequest:(CDUnknownBlockType)arg1;
- (_Bool)checkResponds:(_Bool)arg1 forSelector:(SEL)arg2;
- (void)calloutToServer:(CDUnknownBlockType)arg1;

@end
