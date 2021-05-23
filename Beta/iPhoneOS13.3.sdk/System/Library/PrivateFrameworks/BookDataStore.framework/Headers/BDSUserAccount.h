/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSString;

@protocol OS_dispatch_queue;

@interface BDSUserAccount : NSObject

{
    _Bool _cachedIsPrimaryAccountManagedAppleID;
    _Bool _cachedICloudValuesPrewarmed;
    _Bool _cachedIsUserSignedInToiCloud;
    _Bool _cachedIsGlobalICloudDriveSyncOptedIn;
    int _tccNotifyToken;
    NSObject<OS_dispatch_queue> *_prewarmQueue;
    NSString *_cachedICloudIdentity;
    NSString *_cachedICloudAccountName;
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prewarmQueue;
@property (nonatomic) _Bool cachedIsPrimaryAccountManagedAppleID;
@property (nonatomic) _Bool cachedICloudValuesPrewarmed;
@property (nonatomic) _Bool cachedIsUserSignedInToiCloud;
@property (retain, nonatomic) NSString *cachedICloudIdentity;
@property (retain, nonatomic) NSString *cachedICloudAccountName;
@property (nonatomic) _Bool cachedIsGlobalICloudDriveSyncOptedIn;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) int tccNotifyToken;

+ (id)sharedInstance;
+ (void)prewarm;
+ (id)storeFrontIdentifier;
+ (id)storeAccountID;
+ (id)iCloudAccountName;
+ (id)storeAccountName;
+ (_Bool)isUserSignedInToiCloud;
+ (_Bool)isGlobalICloudDriveSyncOptedIn;
+ (id)iCloudIdentity;
+ (_Bool)isPrimaryAccountManagedAppleID;
+ (_Bool)isStoreAccountManagedAppleID;
+ (_Bool)isUserSignedInToiTunes;
+ (_Bool)detectedUserSwitchWithId:(id)arg1 outSignedIn:(_Bool *)arg2 outSignedOut:(_Bool *)arg3 outAccountNumberChanged:(_Bool *)arg4;
+ (id)lastUsedStoreAccountID;
+ (void)clearLastUsedStoreAccountID;
+ (void)updateLastUsedStoreAccountID;
+ (_Bool)isAccountModificationAllowed;
+ (void)clearCachedData;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)_iCloudAccountName;
- (void)_prewarmAsyncICloudValuesIfNeeded;
- (_Bool)_isPrimaryAccountManagedAppleID;
- (_Bool)_isUserSignedInToiCloud;
- (id)_iCloudIdentity;
- (_Bool)_isGlobalICloudDriveSyncOptedIn;
- (void)_clearCachedData;
- (_Bool)_evaluateIsPrimaryAccountManagedAppleIDForAccount:(id)arg1;
- (_Bool)_evaluateIsUserSignedInToiCloudForAccount:(id)arg1;
- (id)_evaluateICloudAccountNameForAccount:(id)arg1;
- (id)_evaluateICloudIdentityForAccount:(id)arg1;
- (_Bool)_evaluateIsGlobalICloudDriveSyncOptedInForAccount:(id)arg1;
- (void)_cacheValues;
- (void)_prewarmICloudValuesIfNeeded;

@end
