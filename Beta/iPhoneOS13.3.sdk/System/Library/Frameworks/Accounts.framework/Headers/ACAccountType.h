/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSSet, NSString, NSURL;

@interface ACAccountType : NSObject

{
    NSString *_accountTypeDescription;
    NSString *_identifier;
    NSString *_credentialType;
    NSURL *_objectID;
    int _visibility;
    NSString *_credentialProtectionPolicy;
    ACAccountStore *_accountStore;
    int _supportsAuthentication;
    _Bool _supportsMultipleAccounts;
    _Bool _obsolete;
    NSSet *_supportedDataclasses;
    NSSet *_syncableDataclasses;
    NSSet *_accessKeys;
    _Bool _encryptAccountProperties;
    NSString *_owningBundleID;
}

@property (retain, nonatomic) NSURL *objectID;
@property (nonatomic) int visibility;
@property (copy, nonatomic) id credentialProtectionPolicy;
@property (retain, nonatomic) NSString *credentialType;
@property (weak, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) int supportsAuthentication;
@property (nonatomic) _Bool supportsMultipleAccounts;
@property (retain, nonatomic) NSString *owningBundleID;
@property (nonatomic, getter=isObsolete) _Bool obsolete;
@property (nonatomic, readonly) NSSet *supportedDataclasses;
@property (nonatomic, readonly) NSSet *syncableDataclasses;
@property (nonatomic, readonly) NSSet *accessKeys;
@property (nonatomic, readonly) NSString *fullDescription;
@property (nonatomic, readonly) _Bool encryptAccountProperties;
@property (nonatomic, readonly) NSString *accountTypeDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool accessGranted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)allIdentifiers;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)initWithManagedAccountType:(id)arg1;
- (id)_initWithProtobuf:(id)arg1;
- (id)_encodeProtobuf;
- (id)_initWithProtobufData:(id)arg1;
- (id)_encodeProtobufData;
- (void)setAccountTypeDescription:(id)arg1;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2;
- (id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2;

@end
