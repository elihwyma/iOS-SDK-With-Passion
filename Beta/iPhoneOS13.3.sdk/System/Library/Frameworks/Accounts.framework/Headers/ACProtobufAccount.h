/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <ProtocolBuffer/PBCodable.h>

@class ACProtobufAccountCredential, ACProtobufAccountType, ACProtobufDate, ACProtobufURL, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufAccount : PBCodable

{
    NSString *_accountDescription;
    ACProtobufAccountType *_accountType;
    NSString *_authenticationType;
    ACProtobufAccountCredential *_credential;
    NSString *_credentialType;
    NSMutableArray *_dataclassProperties;
    ACProtobufDate *_date;
    NSMutableArray *_dirtyAccountProperties;
    NSMutableArray *_dirtyDataclassProperties;
    NSMutableArray *_dirtyProperties;
    NSMutableArray *_enabledDataclasses;
    NSString *_identifier;
    ACProtobufDate *_lastCredentialRenewalRejectionDate;
    ACProtobufURL *_objectID;
    NSString *_owningBundleID;
    NSString *_parentAccountIdentifier;
    NSMutableArray *_properties;
    NSMutableArray *_provisionedDataclasses;
    NSString *_username;
    _Bool _active;
    _Bool _authenticated;
    _Bool _supportsAuthentication;
    _Bool _visible;
}

@property (copy, nonatomic) NSDictionary *propertiesDictionary;
@property (copy, nonatomic) NSDictionary *dataclassPropertiesDictionary;
@property (retain, nonatomic) ACProtobufAccountType *accountType;
@property (nonatomic, readonly) _Bool hasCredential;
@property (retain, nonatomic) ACProtobufAccountCredential *credential;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasAccountDescription;
@property (retain, nonatomic) NSString *accountDescription;
@property (nonatomic, readonly) _Bool hasUsername;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSMutableArray *properties;
@property (nonatomic) _Bool authenticated;
@property (nonatomic, readonly) _Bool hasLastCredentialRenewalRejectionDate;
@property (retain, nonatomic) ACProtobufDate *lastCredentialRenewalRejectionDate;
@property (nonatomic) _Bool active;
@property (nonatomic) _Bool visible;
@property (nonatomic) _Bool supportsAuthentication;
@property (retain, nonatomic) NSMutableArray *dataclassProperties;
@property (nonatomic, readonly) _Bool hasObjectID;
@property (retain, nonatomic) ACProtobufURL *objectID;
@property (nonatomic, readonly) _Bool hasParentAccountIdentifier;
@property (retain, nonatomic) NSString *parentAccountIdentifier;
@property (retain, nonatomic) NSMutableArray *enabledDataclasses;
@property (retain, nonatomic) NSMutableArray *provisionedDataclasses;
@property (nonatomic, readonly) _Bool hasAuthenticationType;
@property (retain, nonatomic) NSString *authenticationType;
@property (nonatomic, readonly) _Bool hasCredentialType;
@property (retain, nonatomic) NSString *credentialType;
@property (nonatomic, readonly) _Bool hasDate;
@property (retain, nonatomic) ACProtobufDate *date;
@property (nonatomic, readonly) _Bool hasOwningBundleID;
@property (retain, nonatomic) NSString *owningBundleID;
@property (retain, nonatomic) NSMutableArray *dirtyProperties;
@property (retain, nonatomic) NSMutableArray *dirtyAccountProperties;
@property (retain, nonatomic) NSMutableArray *dirtyDataclassProperties;

+ (Class)propertiesType;
+ (Class)dataclassPropertiesType;
+ (Class)enabledDataclassesType;
+ (Class)provisionedDataclassesType;
+ (Class)dirtyPropertiesType;
+ (Class)dirtyAccountPropertiesType;
+ (Class)dirtyDataclassPropertiesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearDirtyProperties;
- (void)addProperties:(id)arg1;
- (void)addDataclassProperties:(id)arg1;
- (void)addEnabledDataclasses:(id)arg1;
- (void)addProvisionedDataclasses:(id)arg1;
- (void)addDirtyProperties:(id)arg1;
- (void)addDirtyAccountProperties:(id)arg1;
- (void)addDirtyDataclassProperties:(id)arg1;
- (unsigned long long)propertiesCount;
- (void)clearProperties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataclassPropertiesCount;
- (void)clearDataclassProperties;
- (id)dataclassPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)enabledDataclassesCount;
- (void)clearEnabledDataclasses;
- (id)enabledDataclassesAtIndex:(unsigned long long)arg1;
- (unsigned long long)provisionedDataclassesCount;
- (void)clearProvisionedDataclasses;
- (id)provisionedDataclassesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyPropertiesCount;
- (id)dirtyPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyAccountPropertiesCount;
- (void)clearDirtyAccountProperties;
- (id)dirtyAccountPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyDataclassPropertiesCount;
- (void)clearDirtyDataclassProperties;
- (id)dirtyDataclassPropertiesAtIndex:(unsigned long long)arg1;

@end
