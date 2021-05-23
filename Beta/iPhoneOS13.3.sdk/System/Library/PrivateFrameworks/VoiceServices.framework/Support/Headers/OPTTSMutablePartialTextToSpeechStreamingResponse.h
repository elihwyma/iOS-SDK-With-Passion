/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/OPTTSPartialTextToSpeechStreamingResponse.h>

@class NSArray, NSData, NSString;

@interface OPTTSMutablePartialTextToSpeechStreamingResponse : OPTTSPartialTextToSpeechStreamingResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *stream_id;
@property (nonatomic) int current_pkt_number;
@property (copy, nonatomic) NSData *audio;
@property (copy, nonatomic) NSArray *word_timing_info;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)audio:(CDUnknownBlockType)arg1;

@end
