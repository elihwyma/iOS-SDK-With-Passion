/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PPPBDateComponents;

@interface PPPBContact : PBCodable

{
    long long _createdAt;
    PPPBDateComponents *_birthday;
    int _displayNameOrder;
    NSMutableArray *_emailAddresses;
    NSString *_familyName;
    NSString *_givenName;
    NSString *_identifier;
    NSString *_middleName;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSString *_nickname;
    PPPBDateComponents *_nonGregorianBirthday;
    NSString *_organizationName;
    NSMutableArray *_phoneNumbers;
    NSMutableArray *_postalAddresses;
    NSMutableArray *_socialProfiles;
    NSString *_sortingFamilyName;
    NSString *_sortingGivenName;
    struct {
        unsigned int createdAt:1;
        unsigned int displayNameOrder:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasGivenName;
@property (retain, nonatomic) NSString *givenName;
@property (nonatomic, readonly) _Bool hasMiddleName;
@property (retain, nonatomic) NSString *middleName;
@property (nonatomic, readonly) _Bool hasFamilyName;
@property (retain, nonatomic) NSString *familyName;
@property (nonatomic, readonly) _Bool hasNickname;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;
@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *postalAddresses;
@property (nonatomic, readonly) _Bool hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;
@property (nonatomic, readonly) _Bool hasBirthday;
@property (retain, nonatomic) PPPBDateComponents *birthday;
@property (nonatomic, readonly) _Bool hasNonGregorianBirthday;
@property (retain, nonatomic) PPPBDateComponents *nonGregorianBirthday;
@property (retain, nonatomic) NSMutableArray *socialProfiles;
@property (nonatomic, readonly) _Bool hasNamePrefix;
@property (retain, nonatomic) NSString *namePrefix;
@property (nonatomic, readonly) _Bool hasNameSuffix;
@property (retain, nonatomic) NSString *nameSuffix;
@property (nonatomic) _Bool hasDisplayNameOrder;
@property (nonatomic) int displayNameOrder;
@property (nonatomic, readonly) _Bool hasSortingGivenName;
@property (retain, nonatomic) NSString *sortingGivenName;
@property (nonatomic, readonly) _Bool hasSortingFamilyName;
@property (retain, nonatomic) NSString *sortingFamilyName;
@property (nonatomic) _Bool hasCreatedAt;
@property (nonatomic) long long createdAt;

+ (Class)phoneNumbersType;
+ (Class)emailAddressesType;
+ (Class)postalAddressesType;
+ (Class)socialProfilesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearPhoneNumbers;
- (void)addPhoneNumbers:(id)arg1;
- (unsigned long long)phoneNumbersCount;
- (id)phoneNumbersAtIndex:(unsigned long long)arg1;
- (void)clearEmailAddresses;
- (void)addEmailAddresses:(id)arg1;
- (unsigned long long)emailAddressesCount;
- (id)emailAddressesAtIndex:(unsigned long long)arg1;
- (void)clearPostalAddresses;
- (void)addPostalAddresses:(id)arg1;
- (unsigned long long)postalAddressesCount;
- (id)postalAddressesAtIndex:(unsigned long long)arg1;
- (void)clearSocialProfiles;
- (void)addSocialProfiles:(id)arg1;
- (unsigned long long)socialProfilesCount;
- (id)socialProfilesAtIndex:(unsigned long long)arg1;

@end
