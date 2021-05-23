/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <TextToSpeech/TTSAssetBase.h>

@class NSArray, NSString;

@interface TTSVoiceAsset : TTSAssetBase

{
    _Bool _isInstalled;
    _Bool _isBuiltInVoice;
    NSString *_name;
    NSString *_identifier;
    NSArray *_languages;
    long long _gender;
    long long _footprint;
    NSString *_voicePath;
}

@property (nonatomic, readonly) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) NSArray *languages;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) long long footprint;
@property (nonatomic, readonly) _Bool isInstalled;
@property (nonatomic, readonly) _Bool isBuiltInVoice;
@property (retain, nonatomic) NSString *voicePath;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(_Bool)arg5 isBuiltIn:(_Bool)arg6 masteredVersion:(id)arg7 compatibilityVersion:(id)arg8;

@end
