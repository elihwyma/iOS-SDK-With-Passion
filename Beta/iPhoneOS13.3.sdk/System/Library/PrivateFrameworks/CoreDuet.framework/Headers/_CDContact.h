/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString, _CDContactStatistics;

@interface _CDContact : NSObject

{
    unsigned long long _type;
    NSString *_identifier;
    NSString *_customIdentifier;
    NSString *_personId;
    unsigned long long _personIdType;
    NSString *_displayName;
    unsigned long long _displayType;
    _CDContactStatistics *_statistics;
}

@property (retain) NSString *identifierType;
@property (retain) _CDContactStatistics *statistics;
@property unsigned long long type;
@property (retain) NSString *identifier;
@property (retain) NSString *customIdentifier;
@property (readonly) NSString *handle;
@property (retain) NSString *personId;
@property unsigned long long personIdType;
@property (retain) NSString *displayName;
@property unsigned long long displayType;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)convertHandleType:(long long)arg1;
+ (unsigned long long)convertDisplayType:(long long)arg1;
+ (unsigned long long)typeFromString:(id)arg1;
+ (id)typeAsCNContactPropertyKey:(unsigned long long)arg1;
+ (id)contactWithIdentifier:(id)arg1 type:(unsigned long long)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5;
+ (id)predicateForContactWithType:(unsigned long long)arg1;
+ (id)predicateForContactWithPersonId:(id)arg1 personIdType:(unsigned long long)arg2;
+ (id)predicateForContactWithIdentifier:(id)arg1;
+ (id)predicateForContactWithDisplayName:(id)arg1;
+ (id)predicateForContact:(id)arg1;
+ (id)contactPropertiesForContacts:(id)arg1;
+ (id)contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2;
+ (id)_contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2;
+ (id)_CDValueForContactProperty:(id)arg1;
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 personId:(id)arg3 personIdType:(unsigned long long)arg4;
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5;
+ (id)normalizedStringKey:(id)arg1;
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customIdentifier:(id)arg3 displayName:(id)arg4 displayType:(unsigned long long)arg5 personId:(id)arg6 personIdType:(unsigned long long)arg7;
- (id)initWithINPerson:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5;
- (_Bool)mayRepresentSamePersonAs:(id)arg1;
- (void)mergeWithContact:(id)arg1;
- (_Bool)mayContainPrefix:(id)arg1;
- (id)initWithContactProperty:(id)arg1;
- (id)contactProperty;
- (id)contactPropertyWithMechanismHint:(long long)arg1;
- (id)contactPropertyWithOptionalMechanismHint:(long long *)arg1;

@end
