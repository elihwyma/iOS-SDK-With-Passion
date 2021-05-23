/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, WKGeolocationProviderIOS, _WKProcessPoolConfiguration;

@protocol _WKAutomationDelegate, _WKDownloadDelegate, _WKGeolocationCoreLocationProvider;

@interface WKProcessPool : NSObject

{
    struct ObjectStorage<WebKit::WebProcessPool> _processPool;
    struct WeakObjCPtr<id<_WKAutomationDelegate>> _automationDelegate;
    struct WeakObjCPtr<id<_WKDownloadDelegate>> _downloadDelegate;
    struct RetainPtr<_WKAutomationSession> _automationSession;
    struct RetainPtr<WKGeolocationProviderIOS> _geolocationProvider;
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider>> _coreLocationProvider;
}

@property (nonatomic, readonly) _WKProcessPoolConfiguration *_configuration;
@property (weak, nonatomic, setter=_setDownloadDelegate:) id <_WKDownloadDelegate> _downloadDelegate;
@property (weak, nonatomic, setter=_setAutomationDelegate:) id <_WKAutomationDelegate> _automationDelegate;
@property (nonatomic, setter=_setCoreLocationProvider:) id <_WKGeolocationCoreLocationProvider> _coreLocationProvider;
@property (nonatomic, getter=_isCookieStoragePartitioningEnabled, setter=_setCookieStoragePartitioningEnabled:) _Bool _cookieStoragePartitioningEnabled;
@property (nonatomic, getter=_isStorageAccessAPIEnabled, setter=_setStorageAccessAPIEnabled:) _Bool _storageAccessAPIEnabled;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (_Bool)supportsSecureCoding;
+ (id)_sharedProcessPool;
+ (id)_websiteDataURLForContainerWithURL:(id)arg1 bundleIdentifierIfNotInContainer:(id)arg2;
+ (id)_allProcessPoolsForTesting;
+ (id)_websiteDataURLForContainerWithURL:(id)arg1;
+ (void)_forceGameControllerFramework;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)_initWithConfiguration:(id)arg1;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
- (unsigned long long)_webProcessCount;
- (_Bool)_hasPrewarmedWebProcess;
- (void)_registerURLSchemeServiceWorkersCanHandle:(id)arg1;
- (void)_registerURLSchemeAsCanDisplayOnlyIfCanRequest:(id)arg1;
- (void)_setCanHandleHTTPSServerTrustEvaluation:(_Bool)arg1;
- (void)_setCookieAcceptPolicy:(unsigned long long)arg1;
- (id)_objectForBundleParameter:(id)arg1;
- (void)_setObject:(id)arg1 forBundleParameter:(id)arg2;
- (void)_setObjectsForBundleParametersWithDictionary:(id)arg1;
- (void)_warmInitialProcess;
- (void)_automationCapabilitiesDidChange;
- (void)_setAutomationSession:(id)arg1;
- (void)_addSupportedPlugin:(id)arg1 named:(id)arg2 withMimeTypes:(id)arg3 withExtensions:(id)arg4;
- (void)_clearSupportedPlugins;
- (void)_terminateNetworkProcess;
- (void)_sendNetworkProcessWillSuspendImminently;
- (void)_sendNetworkProcessDidResume;
- (void)_terminateServiceWorkerProcesses;
- (void)_disableServiceWorkerProcessTerminationDelay;
- (int)_networkProcessIdentifier;
- (int)_prewarmedProcessIdentifier;
- (void)_syncNetworkProcessCookies;
- (void)_makeNextWebProcessLaunchFailForTesting;
- (void)_makeNextNetworkProcessLaunchFailForTesting;
- (unsigned long long)_webProcessCountIgnoringPrewarmed;
- (unsigned long long)_webProcessCountIgnoringPrewarmedAndCached;
- (unsigned long long)_webPageContentProcessCount;
- (void)_preconnectToServer:(id)arg1;
- (unsigned long long)_pluginProcessCount;
- (unsigned long long)_maximumSuspendedPageCount;
- (unsigned long long)_processCacheCapacity;
- (unsigned long long)_processCacheSize;
- (unsigned long long)_serviceWorkerProcessCount;
- (void)_synthesizeAppIsBackground:(_Bool)arg1;
- (void)_setAllowsAnySSLCertificateForServiceWorker:(_Bool)arg1;
- (id)_downloadURLRequest:(id)arg1 originatingWebView:(id)arg2;
- (id)_resumeDownloadFromData:(id)arg1 path:(id)arg2 originatingWebView:(id)arg3;
- (void)_getActivePagesOriginsInWebProcessForTesting:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_networkProcessHasEntitlementForTesting:(id)arg1;
- (void)_clearPermanentCredentialsForProtectionSpace:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
