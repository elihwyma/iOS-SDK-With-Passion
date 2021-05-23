/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PPPBContactNameRecord : PBCodable

{
    double _score;
    unsigned char _changeType;
    NSMutableArray *_cityNames;
    NSString *_firstName;
    NSString *_identifier;
    NSString *_jobTitle;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_nickname;
    NSString *_organizationName;
    NSString *_phoneticFirstName;
    NSString *_phoneticLastName;
    NSString *_phoneticMiddleName;
    NSMutableArray *_relatedNames;
    unsigned char _source;
    NSString *_sourceIdentifier;
    NSMutableArray *_streetNames;
    struct {
        unsigned int score:1;
        unsigned int changeType:1;
        unsigned int source:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasScore;
@property (nonatomic) double score;
@property (nonatomic) _Bool hasSource;
@property (nonatomic) unsigned char source;
@property (nonatomic) _Bool hasChangeType;
@property (nonatomic) unsigned char changeType;
@property (nonatomic, readonly) _Bool hasSourceIdentifier;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic, readonly) _Bool hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (nonatomic, readonly) _Bool hasPhoneticFirstName;
@property (retain, nonatomic) NSString *phoneticFirstName;
@property (nonatomic, readonly) _Bool hasMiddleName;
@property (retain, nonatomic) NSString *middleName;
@property (nonatomic, readonly) _Bool hasPhoneticMiddleName;
@property (retain, nonatomic) NSString *phoneticMiddleName;
@property (nonatomic, readonly) _Bool hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (nonatomic, readonly) _Bool hasPhoneticLastName;
@property (retain, nonatomic) NSString *phoneticLastName;
@property (nonatomic, readonly) _Bool hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;
@property (nonatomic, readonly) _Bool hasJobTitle;
@property (retain, nonatomic) NSString *jobTitle;
@property (nonatomic, readonly) _Bool hasNickname;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSMutableArray *relatedNames;
@property (retain, nonatomic) NSMutableArray *streetNames;
@property (retain, nonatomic) NSMutableArray *cityNames;

+ (Class)relatedNamesType;
+ (Class)streetNamesType;
+ (Class)cityNamesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sourceAsString:(unsigned char)arg1;
- (unsigned char)StringAsSource:(id)arg1;
- (id)changeTypeAsString:(unsigned char)arg1;
- (unsigned char)StringAsChangeType:(id)arg1;
- (void)clearRelatedNames;
- (void)addRelatedNames:(id)arg1;
- (unsigned long long)relatedNamesCount;
- (id)relatedNamesAtIndex:(unsigned long long)arg1;
- (void)clearStreetNames;
- (void)addStreetNames:(id)arg1;
- (unsigned long long)streetNamesCount;
- (id)streetNamesAtIndex:(unsigned long long)arg1;
- (void)clearCityNames;
- (void)addCityNames:(id)arg1;
- (unsigned long long)cityNamesCount;
- (id)cityNamesAtIndex:(unsigned long long)arg1;

@end
