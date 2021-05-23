/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/OPTTSTextToSpeechResponse.h>

@class NSArray, NSData, NSString, OPTTSAudioDescription, OPTTSTextToSpeechMeta;

@interface OPTTSMutableTextToSpeechResponse : OPTTSTextToSpeechResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (nonatomic) long long audio_type;
@property (nonatomic) int sample_rate;
@property (copy, nonatomic) NSData *audio;
@property (copy, nonatomic) OPTTSAudioDescription *decoder_description;
@property (copy, nonatomic) OPTTSAudioDescription *playback_description;
@property (copy, nonatomic) NSArray *word_timing_info;
@property (copy, nonatomic) OPTTSTextToSpeechMeta *meta_info;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)audio:(CDUnknownBlockType)arg1;

@end
