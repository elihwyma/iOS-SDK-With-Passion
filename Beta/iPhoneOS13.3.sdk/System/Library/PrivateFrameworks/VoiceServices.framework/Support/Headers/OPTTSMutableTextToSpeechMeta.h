/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/OPTTSTextToSpeechMeta.h>

@class OPTTSTextToSpeechResource, OPTTSTextToSpeechVoice;

@interface OPTTSMutableTextToSpeechMeta : OPTTSTextToSpeechMeta

@property (copy, nonatomic) OPTTSTextToSpeechVoice *voice;
@property (copy, nonatomic) OPTTSTextToSpeechResource *resource;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
