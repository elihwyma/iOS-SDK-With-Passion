/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@interface ACDKeychain : NSObject

+ (_Bool)canAccessPasswordsWithPolicy:(id)arg1;
+ (id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 options:(id)arg5 error:(id *)arg6;
+ (void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id *)arg6;
+ (_Bool)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (id)keychainDeletedAccounts;
+ (_Bool)removeTombstoneForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 extension:(id)arg4 error:(id *)arg5;
+ (_Bool)updateSyncItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 extension:(id)arg5 error:(id *)arg6;
+ (_Bool)addSyncItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 extension:(id)arg5 error:(id *)arg6;
+ (void)_migrateKeychainItemIfNecessary:(id)arg1;
+ (id)_knownMigratedKeychainItems;
+ (_Bool)_isKnownMigratedKeychainItem:(id)arg1;
+ (void)_addKnownMigratedKeychainItem:(id)arg1;

@end
