/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class ADAdServingDaemonConnection, ADDeviceInfo, NSMutableArray, NSString;

@protocol ADSSession_RPC, OS_dispatch_queue;

@interface ADSession : NSObject

{
    _Bool _applicationCanReceiveBackgroundAds;
    _Bool _appExtensionCanReceiveAds;
    _Bool _applicationCanRecieveAds;
    int _classicUnavailableToken;
    NSMutableArray *_adSpaces;
    ADAdServingDaemonConnection *_connection;
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_adSpaceQueue;
    ADDeviceInfo *_deviceInfo;
}

@property (retain, nonatomic) NSMutableArray *adSpaces;
@property (nonatomic) int classicUnavailableToken;
@property (retain, nonatomic) ADAdServingDaemonConnection *connection;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *adSpaceQueue;
@property (nonatomic) _Bool applicationCanRecieveAds;
@property (nonatomic, readonly) id <ADSSession_RPC> rpcProxy;
@property (retain, nonatomic) ADDeviceInfo *deviceInfo;
@property (nonatomic) _Bool applicationCanReceiveBackgroundAds;
@property (nonatomic) _Bool appExtensionCanReceiveAds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)adShouldCreateADSession;

- (id)init;
- (void)dealloc;
- (void)configureConnection:(id)arg1;
- (void)_appDidEnterBackground;
- (void)_appDidBecomeActive;
- (void)adAnalyticsEventReceived:(id)arg1;
- (void)establishRPCConnection;
- (void)createDeviceInfo;
- (void)updateDeviceInfo;
- (void)orientationChanged:(id)arg1;
- (void)performWhenConnected:(CDUnknownBlockType)arg1;
- (id)rpcProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_remote_deviceInfo:(CDUnknownBlockType)arg1;
- (void)_remote_policyEngineDidIdleDisable;
- (void)_remote_closeClientAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_setRequiresFastVisibilityTestOnly:(_Bool)arg1 withIdentifier:(id)arg2;
- (void)_remote_creativeWithAdSpaceIdentifier:(id)arg1 didFailWithError:(id)arg2;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1 identifier:(id)arg2;
- (void)_remote_adImpressionReportedWithIdentifier:(id)arg1;
- (void)_remote_openURL:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 forAdSpaceWithIdentifier:(id)arg3;
- (void)_remote_actionViewControllerReadyForPresentationForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_contentProxyURLDidChange:(id)arg1;
- (void)_remote_contentProxyURLConnectDidChange:(id)arg1;
- (void)_remote_proxyTypeDidChange:(long long)arg1;
- (void)_remote_configVersionDidChange:(id)arg1;
- (void)_remote_adDataForAdSpace:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_linkedOnVersion;
- (void)_currentClientAdSpaces;
- (id)_adSpaceForIdentifier:(id)arg1;
- (void)addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2 privateSegment:(_Bool)arg3;
- (id)adServingDaemonMachServiceName;
- (_Bool)shouldConnectToAdServingDaemon;
- (void)adServingDaemonConnectionEstablished;
- (void)adServingDaemonConnectionLost;
- (id)additionalAdServingDaemonLaunchOptions;
- (void)registerAdSpace:(id)arg1;
- (void)unregisterAdSpace:(id)arg1;
- (void)_remote_updateActionViewControllerOrientation:(unsigned long long)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)reportPrerollRequest;
- (void)_reportAdSubscriptionEvent:(id)arg1;
- (void)addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2;
- (void)segmentDataForSignedInUserWithBlock:(CDUnknownBlockType)arg1;
- (void)prepareForAdRequests;

@end
