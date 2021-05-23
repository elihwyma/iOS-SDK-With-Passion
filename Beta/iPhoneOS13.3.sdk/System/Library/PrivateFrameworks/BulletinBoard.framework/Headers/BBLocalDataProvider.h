/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BulletinBoard/BBDataProvider.h>

@class NSObject;

@protocol BBDataProvider, OS_dispatch_queue, OS_dispatch_source;

@interface BBLocalDataProvider : BBDataProvider

{
    NSObject<OS_dispatch_queue> *_localQueue;
    NSObject<OS_dispatch_queue> *_remoteQueue;
    id <BBDataProvider> _dataProvider;
    NSObject<OS_dispatch_source> *_watchdogTimer;
    _Bool _unresponsive;
    _Bool _invalidated;
}

@property (retain, nonatomic) id <BBDataProvider> dataProvider;

+ (id)dataProviderWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(CDUnknownBlockType)arg3;
+ (id)dataProviderWithDataProvider:(id)arg1 serverQueue:(id)arg2;

- (void)dealloc;
- (void)invalidate;
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
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (_Bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)startWatchdog;
- (void)reloadIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canPerformMigration;
- (id)initWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(CDUnknownBlockType)arg3;
- (id)initWithDataProvider:(id)arg1 serverQueue:(id)arg2;
- (id)_initWithDataProvider:(id)arg1 sectionID:(id)arg2 serverQueue:(id)arg3 initializationCompletion:(CDUnknownBlockType)arg4;
- (void)_watchdogFired;
- (void)_ping;
- (id)_bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)_doSynchronousRemoteRequest:(CDUnknownBlockType)arg1 conditionalOn:(CDUnknownBlockType)arg2;
- (void)_doAsynchronousRemoteRequest:(CDUnknownBlockType)arg1 conditionalOn:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
