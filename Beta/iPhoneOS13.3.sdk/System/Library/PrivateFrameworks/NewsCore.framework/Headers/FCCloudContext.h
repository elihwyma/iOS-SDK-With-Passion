/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCAccessChecker, FCArticleController, FCAssetManager, FCClientEndpointConnection, FCCommandQueue, FCFeedManager, FCFlintResourceManager, FCIssueReadingHistory, FCNetworkBehaviorMonitor, FCNotificationController, FCNotificationsEndpointConnection, FCPersonalizationData, FCPrivateChannelMembershipController, FCPurchaseController, FCReadingHistory, FCReadingList, FCSubscriptionController, FCSubscriptionList, FCTagController, FCTagSettings, FCTranslationManager, FCUserInfo, NSString, NSURL;

@protocol FCAppActivityMonitor, FCBackgroundTaskable, FCBundleSubscriptionManagerType, FCContentContext, FCContentContextInternal, FCCoreConfigurationManager, FCCurrentIssuesChecker, FCFeedPersonalizing, FCFlintHelper, FCForYouBridgedConfigurationParser, FCForYouMagazineFeedManaging, FCForYouPluginGroupManaging, FCNewsAppConfigurationManager, FCPPTContext, FCPaidAccessCheckerType, FCPrivateDataContext, FCPrivateDataContextInternal, FCPurchaseManagerType, FCPurchaseProviderType, FCPushNotificationHandling, FCWebArchiveSource;

@interface FCCloudContext : NSObject <Swift>

{
    _Bool _deviceIsiPad;
    FCSubscriptionController *_subscriptionController;
    FCFeedManager *_feedManager;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id <FCAppActivityMonitor> _appActivityMonitor;
    FCClientEndpointConnection *_endpointConnection;
    FCCommandQueue *_endpointCommandQueue;
    FCNotificationsEndpointConnection *_notificationsEndpointConnection;
    FCCommandQueue *_notificationsEndpointCommandQueue;
    FCNotificationController *_notificationController;
    FCPurchaseController *_purchaseController;
    id <FCPurchaseProviderType> _purchaseProvider;
    id <FCPurchaseManagerType> _purchaseManager;
    id <FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
    FCTranslationManager *_translationManager;
    id <FCCurrentIssuesChecker> _currentIssuesChecker;
    id <FCPaidAccessCheckerType> _paidAccessChecker;
    FCAccessChecker *_issueAccessChecker;
    FCAccessChecker *_articleAccessChecker;
    id <FCFlintHelper> _flintHelper;
    id <FCBackgroundTaskable> _backgroundTaskable;
    id <FCForYouMagazineFeedManaging> _forYouMagazineFeedManager;
    id <FCForYouPluginGroupManaging> _forYouPluginGroupManager;
    id <FCForYouBridgedConfigurationParser> _forYouBridgedConfigurationParser;
    id <FCPPTContext> _pptContext;
    id <FCContentContext> _contentContext;
    id <FCPrivateDataContext> _privateDataContext;
    long long _options;
}

@property (retain, nonatomic) id <FCContentContext> contentContext;
@property (retain, nonatomic) id <FCAppActivityMonitor> appActivityMonitor;
@property (retain, nonatomic) id <FCPrivateDataContext> privateDataContext;
@property (retain, nonatomic) FCTranslationManager *translationManager;
@property (retain, nonatomic) id <FCCurrentIssuesChecker> currentIssuesChecker;
@property (retain, nonatomic) id <FCPaidAccessCheckerType> paidAccessChecker;
@property (retain, nonatomic) FCAccessChecker *issueAccessChecker;
@property (retain, nonatomic) FCAccessChecker *articleAccessChecker;
@property (nonatomic) long long options;
@property (nonatomic, readonly) FCSubscriptionController *subscriptionController;
@property (nonatomic, readonly) FCNotificationController *notificationController;
@property (nonatomic, readonly) FCPurchaseController *purchaseController;
@property (nonatomic, readonly) id <FCPurchaseProviderType> purchaseProvider;
@property (nonatomic, readonly) id <FCPurchaseManagerType> purchaseManager;
@property (nonatomic, readonly) id <FCBundleSubscriptionManagerType> bundleSubscriptionManager;
@property (nonatomic, readonly) FCFeedManager *feedManager;
@property (nonatomic, readonly) id <FCFeedPersonalizing> feedPersonalizer;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (weak, nonatomic) id <FCFlintHelper> flintHelper;
@property (weak, nonatomic) id <FCBackgroundTaskable> backgroundTaskable;
@property (weak, nonatomic) id <FCForYouMagazineFeedManaging> forYouMagazineFeedManager;
@property (weak, nonatomic) id <FCForYouPluginGroupManaging> forYouPluginGroupManager;
@property (retain, nonatomic) id <FCForYouBridgedConfigurationParser> forYouBridgedConfigurationParser;
@property (nonatomic, readonly) _Bool deviceIsiPad;
@property (nonatomic, readonly) id <FCPPTContext> pptContext;
@property (nonatomic, readonly) _Bool isPrivateDataEncryptionEnabled;
@property (nonatomic, readonly) _Bool isPrivateDatabaseStartingUp;
@property (nonatomic, readonly) _Bool isPrivateDatabaseOnline;
@property (nonatomic, readonly) _Bool isPrivateDatabaseTemporarilySuspended;
@property (nonatomic, readonly) FCClientEndpointConnection *endpointConnection;
@property (nonatomic, readonly) FCNotificationsEndpointConnection *notificationsEndpointConnection;
@property (nonatomic, readonly) FCCommandQueue *endpointCommandQueue;
@property (nonatomic, readonly) FCCommandQueue *notificationsEndpointCommandQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *contentStoreFrontID;
@property (copy, nonatomic, readonly) NSString *supportedContentStoreFrontID;
@property (nonatomic, readonly) id <FCCoreConfigurationManager> configurationManager;
@property (nonatomic, readonly) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property (nonatomic, readonly) FCAssetManager *assetManager;
@property (nonatomic, readonly) FCArticleController *articleController;
@property (nonatomic, readonly) FCTagController *tagController;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (retain, nonatomic) id <FCWebArchiveSource> webArchiveSource;
@property (copy, nonatomic, readonly) NSString *contentDirectory;
@property (nonatomic, readonly) NSURL *assetCacheDirectoryURL;
@property (nonatomic, readonly) NSURL *webArchiveCacheDirectoryURL;
@property (nonatomic, readonly) id <FCContentContextInternal> internalContentContext;
@property (nonatomic, readonly) long long preferredMediaQuality;
@property (copy, nonatomic, readonly) NSString *contentEnvironmentToken;
@property (nonatomic, readonly) FCIssueReadingHistory *issueReadingHistory;
@property (nonatomic, readonly) FCPersonalizationData *personalizationData;
@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (nonatomic, readonly) FCUserInfo *userInfo;
@property (nonatomic, readonly) FCTagSettings *tagSettings;
@property (nonatomic, readonly) id <FCPushNotificationHandling> privatePushNotificationHandler;
@property (nonatomic, readonly, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
@property (copy, nonatomic, readonly) NSString *privateDataDirectory;
@property (nonatomic, readonly) id <FCPrivateDataContextInternal> internalPrivateDataContext;

+ (void)initialize;
+ (id)testingContext;
+ (id)testingContextWithDesiredHeadlineFieldOptions:(unsigned long long)arg1;

- (id)init;
- (id)initForTesting;
- (void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 deviceIsiPad:(_Bool)arg10 backgroundTaskable:(id)arg11 privateDataSyncAvailability:(id)arg12 pptContext:(id)arg13 options:(long long)arg14;
- (id)initWithContentContext:(id)arg1 privateDataContext:(id)arg2 networkBehaviorMonitor:(id)arg3 options:(long long)arg4;
- (id)initForTestingWithDesiredHeadlineFieldOptions:(unsigned long long)arg1;
- (void)_purchaseControllerDidAddALaCarteSubscription;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (id)news_core_ConfigurationManager;
- (id)magazinesConfigurationManager;
- (id)recordSourceWithSchema:(id)arg1;
- (id)recordTreeSourceWithRecordSources:(id)arg1;
- (id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)insertTestArticle;
- (id)insertTestArticlesWithCount:(unsigned long long)arg1;
- (_Bool)shouldAssetKeyManagerSimulateUnauthorizedAssetKeys:(id)arg1;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 lockStoreFrontIfNeeded:(_Bool)arg10 deviceIsiPad:(_Bool)arg11 backgroundTaskable:(id)arg12 privateDataSyncAvailability:(id)arg13 pptContext:(id)arg14;
- (id)notificationsController;

@end
