/*
 Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <NSObject.h>

@class ACAccount, ACAccountStore, NSNumber, STManagementState;

@protocol OS_dispatch_queue;

@interface WBUFeatureManager : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    ACAccountStore *_accountStore;
    ACAccount *_account;
    NSNumber *_cachedShouldRequestMoreTime;
    STManagementState *_managementState;
    _Bool _autoFillAvailable;
    _Bool _bookmarksAvailable;
    _Bool _readingListAvailable;
    _Bool _offlineReadingListAvailable;
    _Bool _cloudSyncAvailable;
    _Bool _inMemoryBookmarkChangeTrackingAvailable;
}

@property (nonatomic, readonly, getter=isAutoFillAvailable) _Bool autoFillAvailable;
@property (nonatomic, readonly, getter=isBookmarksAvailable) _Bool bookmarksAvailable;
@property (nonatomic, readonly, getter=isReadingListAvailable) _Bool readingListAvailable;
@property (nonatomic, readonly, getter=isOfflineReadingListAvailable) _Bool offlineReadingListAvailable;
@property (nonatomic, readonly, getter=isCloudKitBookmarksAvailable) _Bool cloudKitBookmarksAvailable;
@property (nonatomic, readonly, getter=isCloudTabsAvailable) _Bool cloudTabsAvailable;
@property (nonatomic, readonly, getter=isCloudSyncAvailable) _Bool cloudSyncAvailable;
@property (nonatomic, readonly, getter=isCloudHistorySyncAvailable) _Bool cloudHistorySyncAvailable;
@property (nonatomic, readonly, getter=isCreditCardStorageAvailable) _Bool creditCardStorageAvailable;
@property (nonatomic, readonly, getter=isPrivateBrowsingAvailable) _Bool privateBrowsingAvailable;
@property (nonatomic, readonly, getter=isInMemoryBookmarkChangeTrackingAvailable) _Bool inMemoryBookmarkChangeTrackingAvailable;
@property (nonatomic, readonly, getter=isUserRemotelyManagedAndLocallyRestricted) _Bool userRemotelyManagedAndLocallyRestricted;
@property (nonatomic, readonly, getter=isAirDropPasswordsAvailable) _Bool airDropPasswordsAvailable;

+ (long long)accessLevel;
+ (_Bool)shouldOfferVirtualCards;
+ (id)webui_sharedFeatureManager;

- (id)init;
- (void)dealloc;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_updateAppleAccount;
- (void)_updateFeatureAvailabilityByAccessLevel;
- (void)_setupAccountStore;
- (_Bool)_isUsingManagedAppleID;
- (void)determineIfUserIsRestrictedByScreenTimeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)determineIfPrivateBrowsingIsAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
