/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/OPTTSBeginTextToSpeechStreamingResponse.h>

@class NSString, OPTTSAudioDescription, OPTTSTextToSpeechMeta;

@interface OPTTSMutableBeginTextToSpeechStreamingResponse : OPTTSBeginTextToSpeechStreamingResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *stream_id;
@property (nonatomic) long long audio_type;
@property (copy, nonatomic) OPTTSAudioDescription *decoder_description;
@property (copy, nonatomic) OPTTSAudioDescription *playback_description;
@property (copy, nonatomic) OPTTSTextToSpeechMeta *meta_info;
@property (nonatomic) float streaming_playback_buffer_size_in_seconds;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
