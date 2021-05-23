/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSURL, SSSQLiteDatabase;

@protocol OS_dispatch_queue;

@interface SSVCookieStorage : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _performingMigration;
    NSURL *_storageLocation;
    _Bool _usesSharedCookieDatabase;
    SSSQLiteDatabase *__database;
}

@property (nonatomic, readonly) SSSQLiteDatabase *_database;
@property (nonatomic) _Bool performingMigration;
@property (readonly) NSURL *storageLocation;

+ (id)sharedInstance;
+ (id)sharedStorage;
+ (id)_getSetCookiesForResponse:(id)arg1;
+ (_Bool)_currentProcessShouldUseRescuedStorageLocationForLocation:(id)arg1;
+ (id)_rescuedStorageLocationForLocation:(id)arg1;
+ (_Bool)_fileURLRepresentsSharedStorageLocation:(id)arg1;
+ (id)_sharedStorageLocationPath;
+ (_Bool)_bindStatement:(struct sqlite3_stmt *)arg1 withValues:(id)arg2;
+ (id)_getUserSetCookiesForResponse:(id)arg1;
+ (id)_getGlobalSetCookiesForResponse:(id)arg1;
+ (_Bool)_setupCookieDatabase:(id)arg1 forCookieStorage:(id)arg2;
+ (_Bool)_migrateToVersion1WithDatabase:(id)arg1;
+ (_Bool)_migrateToVersion2WithDatabase:(id)arg1;
+ (_Bool)_fileIsOwnedByRoot:(id)arg1;
+ (_Bool)_currentProcessIsRoot;
+ (_Bool)responseHasSetCookies:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)setCookiesForHTTPResponse:(id)arg1 account:(id)arg2;
- (id)cookieHeadersForURL:(id)arg1 account:(id)arg2;
- (void)removeCookiesWithAccount:(id)arg1;
- (id)allCookiesForAccount:(id)arg1;
- (void)removeAllCookies;
- (id)initWithStorageLocation:(id)arg1;
- (id)allCookiesForUserIdentifier:(id)arg1 scope:(long long)arg2;
- (id)_copyCookiesWithKey:(id)arg1;
- (id)cookieArrayBySettingFeatureEnablerWithArray:(id)arg1 key:(id)arg2;
- (id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2 scope:(long long)arg3;
- (id)_copyCookieDictionaryForURL:(id)arg1 key:(id)arg2;
- (_Bool)_shouldAddITFECookieToURL:(id)arg1;
- (void)setFeatureEnablerInDictionary:(id)arg1 key:(id)arg2;
- (id)cookiesForURL:(id)arg1 userIdentifier:(id)arg2 scope:(long long)arg3;
- (id)_copyCookieObjectsForURL:(id)arg1 key:(id)arg2;
- (void)_cookieDatabaseDidChange;
- (id)_columnNameForCookieProperty:(id)arg1;
- (void)removeCookiesWithUserIdentifier:(id)arg1 scope:(long long)arg2;
- (id)_accountForKey:(id)arg1;
- (void)_setCookies:(id)arg1 forKey:(id)arg2;
- (void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2 scope:(long long)arg3;
- (id)_allCookieKeys;
- (void)_insertCookies:(id)arg1 forKey:(id)arg2;
- (void)synchronizeFeatureEnablerCookieWithCookieValue:(id)arg1 key:(id)arg2 result:(CDUnknownBlockType)arg3;
- (id)fetchDefaults;
- (void)removeCookiesWithProperties:(id)arg1;
- (id)_copyPrivateCookiesForURL:(id)arg1 key:(id)arg2;
- (id)_copyPrivateCookieObjectsForURL:(id)arg1 key:(id)arg2;
- (id)_copyCookiesForPreparedSQLStatement:(struct sqlite3_stmt *)arg1;
- (_Bool)_stopIncludingLocalCookies;
- (id)_filterCookies:(id)arg1 forURL:(id)arg2;
- (void)_bindInsertStatement:(struct sqlite3_stmt *)arg1 forCookie:(id)arg2 key:(id)arg3;
- (id)allCookiesForUserIdentifier:(id)arg1;
- (id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)cookiesForURL:(id)arg1 account:(id)arg2;
- (id)cookiesForURL:(id)arg1 userIdentifier:(id)arg2;
- (void)removeCookiesWithUserIdentifier:(id)arg1;
- (void)setCookies:(id)arg1 forAccount:(id)arg2;
- (void)setCookies:(id)arg1 forUserIdentifier:(id)arg2;
- (void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2;
- (void)setCookiesFromCookieStorage:(id)arg1;
- (void)_handleSharedCookieDatabaseDidChangeDarwinNotification;
- (void)synchronizeCookies;

@end
