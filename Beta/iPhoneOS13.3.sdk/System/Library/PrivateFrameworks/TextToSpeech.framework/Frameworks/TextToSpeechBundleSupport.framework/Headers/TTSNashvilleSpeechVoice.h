/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

#import <TTSSpeechVoice.h>

@interface TTSNashvilleSpeechVoice : TTSSpeechVoice

{
    _Bool _overrideDefault;
    _Bool _overrideFallbackDefault;
    _Bool _overrideExcludeInAvailableVoiceList;
    long long _voiceType;
}

@property (nonatomic) long long voiceType;
@property (nonatomic) _Bool overrideDefault;
@property (nonatomic) _Bool overrideFallbackDefault;
@property (nonatomic) _Bool overrideExcludeInAvailableVoiceList;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isDefault;
- (_Bool)isFallbackDefault;
- (_Bool)isCombinedFootprint;
- (_Bool)excludeInAvailableVoiceList;

@end
