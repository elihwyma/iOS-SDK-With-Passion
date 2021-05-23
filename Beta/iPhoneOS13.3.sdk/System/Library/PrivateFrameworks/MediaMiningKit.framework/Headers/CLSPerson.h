/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSPrimitive.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface CLSPerson : CLSPrimitive

{
    NSMutableArray *_homeAddresses;
    NSMutableArray *_workAddresses;
    _Bool _isFavorite;
    _Bool _isUserCreated;
    _Bool _hasContactProfilePicture;
    _Bool _hasPhoneNumber;
    NSString *_PHIdentifier;
    NSString *_CNIdentifier;
    NSString *_fullName;
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSString *_nickname;
    unsigned long long _gender;
    unsigned long long _ageCategory;
    NSDate *_birthdayDate;
    NSDate *_potentialBirthdayDate;
    NSDate *_anniversaryDate;
    NSString *_companyName;
    NSMutableDictionary *_socialProfiles;
    NSSet *_emailAddresses;
    NSSet *_phoneNumbers;
    unsigned long long _relationship;
    NSArray *_sourceURLs;
    NSString *_inferredLastName;
}

@property (retain, nonatomic) NSString *inferredLastName;
@property (retain, nonatomic) NSString *CNIdentifier;
@property (retain, nonatomic) NSString *PHIdentifier;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *middleName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSDate *birthdayDate;
@property (retain, nonatomic) NSDate *potentialBirthdayDate;
@property (retain, nonatomic) NSDate *anniversaryDate;
@property (retain, nonatomic) NSString *companyName;
@property (retain, nonatomic) NSMutableDictionary *socialProfiles;
@property (retain, nonatomic) NSSet *emailAddresses;
@property (retain, nonatomic) NSSet *phoneNumbers;
@property (nonatomic) unsigned long long relationship;
@property (nonatomic) unsigned long long gender;
@property (nonatomic) unsigned long long ageCategory;
@property (nonatomic) _Bool isFavorite;
@property (nonatomic) _Bool isUserCreated;
@property (nonatomic) _Bool hasContactProfilePicture;
@property (nonatomic) _Bool hasPhoneNumber;
@property (nonatomic, readonly) NSArray *sourceURLs;
@property (nonatomic, readonly) _Bool isMe;

+ (_Bool)supportsSecureCoding;
+ (id)person;
+ (id)relationshipRegularExpressionForRelationship:(unsigned long long)arg1 locale:(id)arg2;
+ (id)personWithCNIdentifier:(id)arg1;
+ (id)personWithPHIdentifier:(id)arg1;
+ (id)personWithPHPerson:(id)arg1;
+ (id)presentationStringForPeople:(id)arg1;
+ (id)presentationStringForPeople:(id)arg1 withScores:(id)arg2;
+ (_Bool)isParentRelationship:(unsigned long long)arg1;
+ (_Bool)isChildRelationship:(unsigned long long)arg1;
+ (_Bool)isSiblingRelationship:(unsigned long long)arg1;
+ (_Bool)isFamilyRelationship:(unsigned long long)arg1;
+ (id)_personRelationshipVocabularyByLocaleDictionary;
+ (id)descriptionForPersonRelationship:(unsigned long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPerson:(id)arg1;
- (_Bool)isOrganization;
- (_Bool)isSamePersonAs:(id)arg1;
- (void)mergeWithPerson:(id)arg1;
- (id)_addressArrayFromAddressType:(unsigned long long)arg1;
- (void)addAddresses:(id)arg1 ofType:(unsigned long long)arg2;
- (void)_enumerateAddresses:(id)arg1 as:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)prefetchPersonAddressesIfNeeded;
- (unsigned long long)countOfAddressesOfType:(unsigned long long)arg1;
- (void)enumerateAddressesOfType:(unsigned long long)arg1 asCLLocationsWithBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAddressesOfType:(unsigned long long)arg1 asPlacemarkWithBlock:(CDUnknownBlockType)arg2;
- (void)sanitize;
- (id)_relationshipAsString;
- (id)presentationString;
- (id)pluralPresentationString;
- (void)setSourceService:(id)arg1 andID:(id)arg2;
- (_Bool)isLocationCoordinate:(struct CLLocationCoordinate2D)arg1 closeToAddressesOfType:(unsigned long long)arg2;
- (_Bool)isLocationCoordinate:(struct CLLocationCoordinate2D)arg1 farAwayFromAddressesOfType:(unsigned long long)arg2;
- (_Bool)hasSameFamilyNameAsPerson:(id)arg1;
- (unsigned long long)relationshipHintFromNameUsingLocales:(id)arg1;
- (id)_motherAndFatherRelationships;

@end
