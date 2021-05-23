/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface NEKeychainItem : NSObject

{
    NSString *_password;
    NSString *_identifier;
    NSData *_persistentReference;
    _Bool _legacy;
    long long _domain;
    NSString *_accessGroup;
    NEKeychainItem *_oldItem;
}

@property (copy) NEKeychainItem *oldItem;
@property (readonly) _Bool legacy;
@property long long domain;
@property (copy) NSString *identifier;
@property (copy) NSString *password;
@property (copy) NSData *persistentReference;
@property (copy) NSString *accessGroup;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)remove;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4;
- (id)initWithIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (id)initWithPersistentReference:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (id)copyQueryWithReturnTypes:(id)arg1;
- (_Bool)copyDataFromKeychainItem:(void *)arg1 outPassword:(id *)arg2 outIdentifier:(id *)arg3 outPersistentReference:(id *)arg4;
- (id)copyKindForPasswordType:(long long)arg1;
- (id)copyPassword;
- (_Bool)addOrUpdateWithConfiguration:(id)arg1 passwordType:(long long)arg2 accountName:(id)arg3 identifierSuffix:(id)arg4;
- (id)initWithPassword:(id)arg1 domain:(long long)arg2;
- (id)initWithIdentifier:(id)arg1 domain:(long long)arg2;
- (id)initWithPersistentReference:(id)arg1 domain:(long long)arg2;
- (id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2;
- (void)setIdentifierInternal:(id)arg1;
- (void)migrateFromPreferences:(struct __SCPreferences *)arg1;

@end
