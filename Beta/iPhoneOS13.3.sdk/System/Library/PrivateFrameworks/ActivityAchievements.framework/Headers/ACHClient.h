/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

#import <Foundation/NSObject.h>

@class HKPluginProxyProvider, NSString;

@protocol ACHServerInterface, OS_dispatch_queue;

@interface ACHClient : NSObject

{
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <ACHServerInterface> _serverProxy;
    HKPluginProxyProvider *_pluginProxyProvider;
    CDUnknownBlockType _injectedErrorHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) id <ACHServerInterface> serverProxy;
@property (retain, nonatomic) HKPluginProxyProvider *pluginProxyProvider;
@property (copy, nonatomic) CDUnknownBlockType injectedErrorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1;
- (void)_remoteProxy:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_clientQueueCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAllTemplatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)addTemplate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeTemplate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllTemplatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAllEarnedInstancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)addEarnedInstance:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeEarnedInstance:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllEarnedInstancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAllAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAchievementWithTemplateUniqueName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchEphemeralAchievementWithTemplateUniqueName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceAwardingSchedulerWithCompletion:(CDUnknownBlockType)arg1;
- (void)runMonthlyChallengesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchActivityChallengeAssetsServerURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)setActivityChallengeAssetsServerURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)availableMobileAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_injectProxyProvider:(id)arg1;
- (void)_addPluginProxyErrorHandler:(CDUnknownBlockType)arg1;

@end
