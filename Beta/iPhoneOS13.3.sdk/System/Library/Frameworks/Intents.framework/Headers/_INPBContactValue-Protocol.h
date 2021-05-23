/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBContactHandle, _INPBImageValue, _INPBValueMetadata;

@protocol _INPBContactValue <Swift>

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

+ (unsigned short)aliasesType;

- (unsigned short)suggestionTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsSuggestionType: /* Error: Ran out of types for this method. */;
- (unsigned short)addAliases: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAliases;
- (unsigned short)aliasesAtIndex: /* Error: Ran out of types for this method. */;

@end
