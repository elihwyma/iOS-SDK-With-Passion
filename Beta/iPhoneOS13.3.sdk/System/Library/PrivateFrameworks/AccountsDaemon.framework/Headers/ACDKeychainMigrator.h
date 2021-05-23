/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface ACDKeychainMigrator : NSObject

{
    ACAccountStore *_accountStore;
}

+ (id)sharedInstance;

- (id)init;
- (void)migrateAllKeychainItems;
- (id)allKeychainItems;
- (_Bool)migrateKeychainItem:(id)arg1;
- (void)_validateKeychainItemClass:(id)arg1;
- (void)_migrateUUIDKeychainItems:(id)arg1;
- (id)_keychainItemsForAccount:(id)arg1 accountTypeIdentifiers:(id)arg2;
- (id)_keychainItemFromAttributesArray:(id)arg1;
- (id)_keychainItemFromAttributes:(id)arg1;

@end
