/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSNumber, NSString;

@interface AFVoiceInfo : NSObject <Swift>

{
    _Bool _isCustom;
    _Bool _wasInitalizedFromDictionaryRepresentation;
    NSString *_languageCode;
    long long _footprint;
    NSString *_name;
    NSNumber *_contentVersion;
    NSString *_masteredVersion;
    long long _gender;
}

@property (nonatomic) long long gender;
@property (nonatomic, readonly) _Bool wasInitalizedFromDictionaryRepresentation;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic) _Bool isCustom;
@property (nonatomic, readonly) long long footprint;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *contentVersion;
@property (nonatomic, readonly) NSString *masteredVersion;

+ (_Bool)supportsSecureCoding;
+ (long long)defaultGenderForOutputVoiceLanguageCode:(id)arg1;
+ (id)allVoicesForSiriSessionLanguage:(id)arg1;
+ (id)voiceInfoForLanguageCode:(id)arg1;
+ (long long)genderForVSSpeechGender:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(_Bool)arg3 name:(id)arg4 footprint:(long long)arg5 contentVersion:(id)arg6 masteredVersion:(id)arg7;
- (id)initWithLanguageCode:(id)arg1;
- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(_Bool)arg3;
- (id)genderString;
- (id)footprintString;
- (_Bool)isLanguageAndGenderEqual:(id)arg1;
- (_Bool)isValidForSiriSessionLanguage:(id)arg1;
- (long long)VSSpeechGender;
- (long long)VSSpeechFootprint;
- (long long)VSSpeechType;
- (id)VSVoiceAsset;
- (_Bool)isMatchForVoiceAsset:(id)arg1;

@end
