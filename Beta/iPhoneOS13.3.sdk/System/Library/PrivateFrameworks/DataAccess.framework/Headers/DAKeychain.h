/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@interface DAKeychain : NSObject

+ (id)sharedKeychain;

- (void)migratePasswordForAccount:(id)arg1;
- (int)_daKeychainAccessibilityForSecAccessibility:(void *)arg1;
- (_Bool)canAccessCredentialsWithAccessibility:(int)arg1;
- (void)removePersistentCredentials;
- (struct __CFDictionary *)_DACopyMutableQueryForAccountWithPersistentUUID:(id)arg1;
- (void *)_secAccessibilityForDAKeychainAccessibility:(int)arg1;
- (struct __CFDictionary *)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)arg1 accessibility:(int)arg2;
- (_Bool)removePasswordForAccount:(id)arg1 withPersistentUUID:(id)arg2;
- (id)passwordForAccountWithPersistentUUID:(id)arg1 expectedAccessibility:(int)arg2 shouldSetAccessibility:(_Bool)arg3 passwordExpected:(_Bool)arg4;
- (id)guessPasswordForURL:(id)arg1;
- (void)removeKeychainInformationsForURL:(id)arg1;
- (_Bool)setPassword:(id)arg1 forAccount:(id)arg2 withPersistentUUID:(id)arg3 withAccessibility:(int)arg4;
- (id)loadKeychainInformationsForURL:(id)arg1;
- (_Bool)saveKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2 withAccessibility:(int)arg3;

@end
