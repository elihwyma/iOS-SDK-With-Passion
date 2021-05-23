/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <ProtocolBuffer/PBCodable.h>

@class ACProtobufURL, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufAccountType : PBCodable

{
    NSString *_accountTypeDescription;
    NSString *_credentialProtectionPolicy;
    NSString *_credentialType;
    NSString *_identifier;
    ACProtobufURL *_objectID;
    NSString *_owningBundleID;
    int _supportsAuthentication;
    int _visibility;
    _Bool _encryptAccountProperties;
    _Bool _obsolete;
    _Bool _supportsMultipleAccounts;
    struct {
        unsigned int supportsAuthentication:1;
        unsigned int visibility:1;
        unsigned int encryptAccountProperties:1;
        unsigned int obsolete:1;
        unsigned int supportsMultipleAccounts:1;
    } _has;
}

@property (retain, nonatomic) NSString *accountTypeDescription;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasObjectID;
@property (retain, nonatomic) ACProtobufURL *objectID;
@property (nonatomic) _Bool hasVisibility;
@property (nonatomic) int visibility;
@property (nonatomic, readonly) _Bool hasCredentialType;
@property (retain, nonatomic) NSString *credentialType;
@property (nonatomic, readonly) _Bool hasCredentialProtectionPolicy;
@property (retain, nonatomic) NSString *credentialProtectionPolicy;
@property (nonatomic) _Bool hasSupportsAuthentication;
@property (nonatomic) int supportsAuthentication;
@property (nonatomic) _Bool hasSupportsMultipleAccounts;
@property (nonatomic) _Bool supportsMultipleAccounts;
@property (nonatomic) _Bool hasEncryptAccountProperties;
@property (nonatomic) _Bool encryptAccountProperties;
@property (nonatomic, readonly) _Bool hasOwningBundleID;
@property (retain, nonatomic) NSString *owningBundleID;
@property (nonatomic) _Bool hasObsolete;
@property (nonatomic) _Bool obsolete;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
