/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBContactHandle, _INPBImageValue, _INPBValueMetadata;

@interface _INPBContactValue : PBCodable <Swift>

{
    struct {
        unsigned int isMe:1;
        unsigned int suggestionType:1;
    } _has;
    _Bool _isMe;
    _Bool __encodeLegacyGloryData;
    int _suggestionType;
    NSArray *_aliases;
    _INPBContactHandle *_contactHandle;
    NSString *_customIdentifier;
    NSString *_firstName;
    NSString *_fullName;
    NSString *_handle;
    _INPBImageValue *_image;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSString *_nickName;
    NSString *_phonemeData;
    NSString *_phoneticFirstName;
    NSString *_phoneticLastName;
    NSString *_phoneticMiddleName;
    NSString *_phoneticNamePrefix;
    NSString *_phoneticNameSuffix;
    NSString *_relationship;
    _INPBValueMetadata *_valueMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *aliases;
@property (nonatomic, readonly) unsigned long long aliasesCount;
@property (retain, nonatomic) _INPBContactHandle *contactHandle;
@property (nonatomic, readonly) _Bool hasContactHandle;
@property (copy, nonatomic) NSString *customIdentifier;
@property (nonatomic, readonly) _Bool hasCustomIdentifier;
@property (copy, nonatomic) NSString *firstName;
@property (nonatomic, readonly) _Bool hasFirstName;
@property (copy, nonatomic) NSString *fullName;
@property (nonatomic, readonly) _Bool hasFullName;
@property (copy, nonatomic) NSString *handle;
@property (nonatomic, readonly) _Bool hasHandle;
@property (retain, nonatomic) _INPBImageValue *image;
@property (nonatomic, readonly) _Bool hasImage;
@property (nonatomic) _Bool isMe;
@property (nonatomic) _Bool hasIsMe;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic, readonly) _Bool hasLastName;
@property (copy, nonatomic) NSString *middleName;
@property (nonatomic, readonly) _Bool hasMiddleName;
@property (copy, nonatomic) NSString *namePrefix;
@property (nonatomic, readonly) _Bool hasNamePrefix;
@property (copy, nonatomic) NSString *nameSuffix;
@property (nonatomic, readonly) _Bool hasNameSuffix;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic, readonly) _Bool hasNickName;
@property (copy, nonatomic) NSString *phonemeData;
@property (nonatomic, readonly) _Bool hasPhonemeData;
@property (copy, nonatomic) NSString *phoneticFirstName;
@property (nonatomic, readonly) _Bool hasPhoneticFirstName;
@property (copy, nonatomic) NSString *phoneticLastName;
@property (nonatomic, readonly) _Bool hasPhoneticLastName;
@property (copy, nonatomic) NSString *phoneticMiddleName;
@property (nonatomic, readonly) _Bool hasPhoneticMiddleName;
@property (copy, nonatomic) NSString *phoneticNamePrefix;
@property (nonatomic, readonly) _Bool hasPhoneticNamePrefix;
@property (copy, nonatomic) NSString *phoneticNameSuffix;
@property (nonatomic, readonly) _Bool hasPhoneticNameSuffix;
@property (copy, nonatomic) NSString *relationship;
@property (nonatomic, readonly) _Bool hasRelationship;
@property (nonatomic) int suggestionType;
@property (nonatomic) _Bool hasSuggestionType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

+ (_Bool)supportsSecureCoding;
+ (Class)aliasesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)suggestionTypeAsString:(int)arg1;
- (int)StringAsSuggestionType:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)clearAliases;
- (id)aliasesAtIndex:(unsigned long long)arg1;

@end
