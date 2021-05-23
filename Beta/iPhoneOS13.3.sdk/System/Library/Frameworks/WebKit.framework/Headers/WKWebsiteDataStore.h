/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL, WKHTTPCookieStore;

@protocol _WKWebsiteDataStoreDelegate;

@interface WKWebsiteDataStore : NSObject

{
    struct ObjectStorage<API::WebsiteDataStore> _websiteDataStore;
    struct RetainPtr<id<_WKWebsiteDataStoreDelegate>> _delegate;
}

@property (nonatomic, setter=_setResourceLoadStatisticsEnabled:) _Bool _resourceLoadStatisticsEnabled;
@property (nonatomic, setter=_setResourceLoadStatisticsDebugMode:) _Bool _resourceLoadStatisticsDebugMode;
@property (nonatomic, setter=_setPerOriginStorageQuota:) unsigned long long _perOriginStorageQuota;
@property (nonatomic, setter=_setCacheStorageDirectory:) NSString *_cacheStorageDirectory;
@property (nonatomic, setter=_setServiceWorkerRegistrationDirectory:) NSString *_serviceWorkerRegistrationDirectory;
@property (nonatomic, setter=_setBoundInterfaceIdentifier:) NSString *_boundInterfaceIdentifier;
@property (nonatomic, setter=_setAllowsCellularAccess:) _Bool _allowsCellularAccess;
@property (nonatomic, setter=_setProxyConfiguration:) NSDictionary *_proxyConfiguration;
@property (copy, nonatomic, setter=_setSourceApplicationBundleIdentifier:) NSString *_sourceApplicationBundleIdentifier;
@property (copy, nonatomic, setter=_setSourceApplicationSecondaryIdentifier:) NSString *_sourceApplicationSecondaryIdentifier;
@property (nonatomic, setter=_setAllowsTLSFallback:) _Bool _allowsTLSFallback;
@property (nonatomic, readonly) NSURL *_indexedDBDatabaseDirectory;
@property (weak, nonatomic) id <_WKWebsiteDataStoreDelegate> _delegate;
@property (nonatomic, readonly, getter=isPersistent) _Bool persistent;
@property (nonatomic, readonly) WKHTTPCookieStore *httpCookieStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (_Bool)supportsSecureCoding;
+ (id)nonPersistentDataStore;
+ (id)defaultDataStore;
+ (id)allWebsiteDataTypes;
+ (id)_allWebsiteDataTypesIncludingPrivate;
+ (_Bool)_defaultDataStoreExists;
+ (void)_deleteDefaultDataStoreForTesting;
+ (void)_allowWebsiteDataRecordsForAllOrigins;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)_initWithConfiguration:(id)arg1;
- (void)_fetchDataRecordsOfTypes:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_resourceLoadStatisticsSetShouldSubmitTelemetry:(_Bool)arg1;
- (void)_setResourceLoadStatisticsTestingCallback:(CDUnknownBlockType)arg1;
- (void)_getAllStorageAccessEntriesFor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_scheduleCookieBlockingUpdate:(CDUnknownBlockType)arg1;
- (void)_setPrevalentDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getIsPrevalentDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_clearPrevalentDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_processStatisticsAndDataRecords:(CDUnknownBlockType)arg1;
- (_Bool)_hasRegisteredServiceWorker;

@end
