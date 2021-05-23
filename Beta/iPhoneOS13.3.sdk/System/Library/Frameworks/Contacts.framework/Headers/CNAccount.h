/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

@interface CNAccount : NSObject <Swift>

{
    int _iOSLegacyIdentifier;
    NSString *_identifier;
    NSString *_externalIdentifierString;
}

@property (nonatomic, readonly) int iOSLegacyIdentifier;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *externalIdentifierString;

+ (_Bool)supportsSecureCoding;
+ (id)os_log;
+ (id)identifierProvider;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (_Bool)requestAccountSyncWithOptions:(unsigned long long)arg1;
+ (id)localAccount;
+ (_Bool)requestAccountSyncWithDefaultOptions;
+ (id)predicateForAccountWithExternalIdentifier:(id)arg1;
+ (id)predicateForAccountForContainerWithIdentifier:(id)arg1;
+ (id)predicateForAccountsWithIdentifiers:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2;
- (id)initWithExternalIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 iOSLegacyIdentifier:(int)arg3;

@end
