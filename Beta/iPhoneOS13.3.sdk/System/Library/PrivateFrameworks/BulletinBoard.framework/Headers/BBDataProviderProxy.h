/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBDataProviderIdentity, NSString;

@protocol BBRemoteDataProvider, BBRemoteDataProviderServerProxy, OS_dispatch_queue;

@interface BBDataProviderProxy : NSObject

{
    id <BBRemoteDataProvider> _dataProvider;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    BBDataProviderIdentity *_identity;
    _Bool _dataProviderDidLoad;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    id <BBRemoteDataProviderServerProxy> _serverProxy;
    _Bool _connected;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) BBDataProviderIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)updateIdentity:(CDUnknownBlockType)arg1;
- (void)dataProviderDidLoad;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deliverBulletinActionResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
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
- (void)setServerProxy:(id)arg1;
- (id)initWithDataProvider:(id)arg1 clientReplyQueue:(id)arg2;
- (void)_makeClientRequest:(CDUnknownBlockType)arg1;
- (void)_makeServerRequest:(CDUnknownBlockType)arg1;
- (void)updateSectionInfoWithHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addBulletin:(id)arg1 interrupt:(_Bool)arg2;
- (void)reloadSectionParameters;
- (void)reloadDefaultSectionInfo;
- (void)updateClearedInfoWithHandler:(CDUnknownBlockType)arg1;
- (void)updateSectionInfoWithHandler:(CDUnknownBlockType)arg1;

@end
