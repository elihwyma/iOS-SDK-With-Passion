/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol TTSSpeechService;

@interface TTSSpeechVoice : NSObject

{
    id <TTSSpeechService> _service;
    _Bool _isDefault;
    _Bool _isFallbackDefault;
    _Bool _excludeInAvailableVoiceList;
    _Bool _canBeDownloaded;
    _Bool _isCombinedFootprint;
    NSString *_name;
    NSString *_language;
    NSString *_identifier;
    long long _footprint;
    long long _gender;
    NSString *_nonCombinedVoiceId;
    NSString *_serviceIdentifier;
}

@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long footprint;
@property (nonatomic, readonly) _Bool isDefault;
@property (nonatomic, readonly) _Bool isFallbackDefault;
@property (nonatomic, readonly) _Bool excludeInAvailableVoiceList;
@property (nonatomic) long long gender;
@property (nonatomic) _Bool canBeDownloaded;
@property (nonatomic, readonly) _Bool isCombinedFootprint;
@property (retain, nonatomic) NSString *nonCombinedVoiceId;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;

@end
