/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface _WKWebsiteDataStoreConfiguration : NSObject

{
    struct ObjectStorage<WebKit::WebsiteDataStoreConfiguration> _configuration;
}

@property (nonatomic, readonly, getter=isPersistent) _Bool persistent;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (copy, nonatomic, setter=setHTTPProxy:) NSURL *httpProxy;
@property (copy, nonatomic, setter=setHTTPSProxy:) NSURL *httpsProxy;
@property (nonatomic) _Bool deviceManagementRestrictionsEnabled;
@property (copy, nonatomic, setter=_setWebStorageDirectory:) NSURL *_webStorageDirectory;
@property (copy, nonatomic, setter=_setIndexedDBDatabaseDirectory:) NSURL *_indexedDBDatabaseDirectory;
@property (copy, nonatomic, setter=_setWebSQLDatabaseDirectory:) NSURL *_webSQLDatabaseDirectory;
@property (copy, nonatomic, setter=_setCookieStorageFile:) NSURL *_cookieStorageFile;
@property (copy, nonatomic, setter=_setResourceLoadStatisticsDirectory:) NSURL *_resourceLoadStatisticsDirectory;
@property (copy, nonatomic, setter=_setCacheStorageDirectory:) NSURL *_cacheStorageDirectory;
@property (copy, nonatomic, setter=_setServiceWorkerRegistrationDirectory:) NSURL *_serviceWorkerRegistrationDirectory;
@property (nonatomic) _Bool allLoadsBlockedByDeviceManagementRestrictionsForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (id)init;
- (id)initNonPersistentConfiguration;

@end
