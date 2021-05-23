/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CHSharedAddressBook : CHSynchronizedLoggable

{
    NSMutableDictionary *_addressBookCache;
}

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)cachedCount;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)arg1;
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;
- (void)registerForContactsNotifications;
- (void)revertAddressBook:(id)arg1;
- (void)cleanUpAddressBookCache_sync;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)arg1;

@end
