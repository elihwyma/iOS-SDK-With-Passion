/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface PPQuickTypeQuery : NSObject

{
    unsigned char _type;
    unsigned char _subtype;
    unsigned char _semanticTag;
    unsigned char _time;
    unsigned char _options;
    unsigned int _fields;
    NSArray *_subFields;
    NSString *_label;
    NSArray *_people;
    NSString *_localeIdentifier;
    NSString *_bundleIdentifier;
    NSArray *_recipients;
}

@property (nonatomic) unsigned char type;
@property (nonatomic) unsigned char subtype;
@property (nonatomic) unsigned char semanticTag;
@property (nonatomic) unsigned int fields;
@property (nonatomic) unsigned char time;
@property (nonatomic) unsigned char options;
@property (retain, nonatomic) NSArray *subFields;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSArray *people;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSArray *recipients;

+ (_Bool)supportsSecureCoding;
+ (unsigned char)_typeFromString:(id)arg1;
+ (id)quickTypeQueryFromLMTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)quickTypeQueryWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned int)arg4 time:(unsigned char)arg5 subFields:(id)arg6 label:(id)arg7 people:(id)arg8 localeIdentifier:(id)arg9 bundleIdentifier:(id)arg10 recipients:(id)arg11;
+ (id)quickTypeQueryWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned int)arg4 time:(unsigned char)arg5 options:(unsigned char)arg6 subFields:(id)arg7 label:(id)arg8 people:(id)arg9 localeIdentifier:(id)arg10 bundleIdentifier:(id)arg11 recipients:(id)arg12;
+ (unsigned char)_subtypeFromString:(id)arg1;
+ (unsigned char)_semanticTagFromString:(id)arg1;
+ (unsigned int)_fieldsFromStrings:(id)arg1;
+ (unsigned char)_timeFromString:(id)arg1;
+ (id)_subfieldsFromString:(id)arg1;
+ (id)_labelFromLMFieldString:(id)arg1 qualifiers:(id)arg2;
+ (id)_peopleNamesFromLMQualifiers:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned int)arg4 time:(unsigned char)arg5 options:(unsigned char)arg6 subFields:(id)arg7 label:(id)arg8 people:(id)arg9 localeIdentifier:(id)arg10 bundleIdentifier:(id)arg11 recipients:(id)arg12;
- (_Bool)isEqualToQuickTypeQuery:(id)arg1;
- (_Bool)isResultEquivelentToQuickTypeQuery:(id)arg1;

@end
