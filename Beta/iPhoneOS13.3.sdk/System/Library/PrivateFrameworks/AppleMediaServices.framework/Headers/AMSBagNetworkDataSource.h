/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSProcessInfo, AMSURLSession, AMSUniqueExecutionQueue, NSDate, NSDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSBagNetworkDataSource : NSObject

{
    CDUnknownBlockType _dataSourceChangedHandler;
    CDUnknownBlockType _dataSourceDataInvalidatedHandler;
    NSString *_profile;
    NSString *_profileVersion;
    NSDictionary *_cachedData;
    NSObject<OS_dispatch_queue> *_cachedDataAccessQueue;
    NSString *_cachedStorefront;
    NSObject<OS_dispatch_queue> *_cachedStorefrontAccessQueue;
    AMSUniqueExecutionQueue *_loadDataQueue;
    NSObject<OS_dispatch_queue> *_processAccountStoreDidChangeNotificationQueue;
    AMSProcessInfo *_processInfo;
    AMSURLSession *_URLSession;
}

@property (retain, nonatomic) NSDictionary *cachedData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cachedDataAccessQueue;
@property (retain, nonatomic) NSString *cachedStorefront;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cachedStorefrontAccessQueue;
@property (retain, nonatomic) AMSUniqueExecutionQueue *loadDataQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processAccountStoreDidChangeNotificationQueue;
@property (retain, nonatomic) AMSProcessInfo *processInfo;
@property (retain, nonatomic) AMSURLSession *URLSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isLoaded) _Bool loaded;
@property (copy, nonatomic, readonly) NSString *profile;
@property (copy, nonatomic, readonly) NSString *profileVersion;
@property (copy, nonatomic) CDUnknownBlockType dataSourceChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType dataSourceDataInvalidatedHandler;

+ (id)_currentStorefrontForAccountMediaType:(id)arg1;
+ (id)_accountForAccountMediaType:(id)arg1;
+ (_Bool)_shouldProcessAccountStoreDidChangeNotification:(id)arg1 withMediaType:(id)arg2;
+ (id)_URLCookieNamesForProfile:(id)arg1;
+ (void)_setURLCookieNames:(id)arg1 forProfile:(id)arg2;
+ (_Bool)_shouldReloadDataForOriginalCookies:(id)arg1 newCookies:(id)arg2;
+ (_Bool)_shouldReloadDataForSetStorefront:(id)arg1 bagData:(id)arg2;
+ (id)_requestStorefrontFromURLResponse:(id)arg1;
+ (id)_setStorefrontFromURLResponse:(id)arg1 bagData:(id)arg2;
+ (_Bool)_isDataDictionary:(id)arg1 equalToDataDictionary:(id)arg2;
+ (id)_defaultURLCookieNames;
+ (id)_deviceString;
+ (id)_OSBuildTypeString;

- (void)dealloc;
- (void)_accountStoreDidChange:(id)arg1;
- (id)bagKeyInfoForKey:(id)arg1;
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)_loadDataWithAttempt:(unsigned long long)arg1 error:(id *)arg2;
- (void)_invalidateCacheNotification:(id)arg1;
- (id)_createURLWithCookieNames:(id)arg1 storefront:(id)arg2;
- (id)_createRequestWithCookieNames:(id)arg1 storefront:(id)arg2;
- (id)_processLoadDataResult:(id)arg1;
- (void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg1;
- (void)_updateCachedData:(id)arg1;
- (id)_cookiesForNames:(id)arg1;
- (id)_baseURLString;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3;

@end
