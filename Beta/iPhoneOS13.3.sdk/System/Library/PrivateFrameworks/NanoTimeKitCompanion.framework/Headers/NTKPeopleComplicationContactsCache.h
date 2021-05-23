/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock;

@interface NTKPeopleComplicationContactsCache : NSObject

{
    NSDictionary *_favoritesMapping;
    NSLock *_favoritesMappingLock;
    int _deviceLockStateChangeNotifyToken;
    _Bool _hasSetupNotifications;
    NSLock *_hasSetupNotificationsLock;
}

+ (id)sharedCache;

- (id)init;
- (void)dealloc;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (id)favoriteContacts;
- (id)fullNameForContact:(id)arg1;
- (void)setupNotificationsIfNecessary;
- (id)_loadFavoriteContacts;
- (void)_didReceiveContactStoreChangedNotification;
- (void)_didReceiveFavoritesChangeRelatedNotification;
- (void)_queue_loadFavoriteContacts;
- (id)shortNameForContact:(id)arg1;
- (id)abbreviatedNameForContact:(id)arg1;
- (void)_didReceiveDeviceLockStateDidChangeNotification;

@end
