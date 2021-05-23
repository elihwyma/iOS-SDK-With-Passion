/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/OPTTSTextToSpeechRequest.h>

@class NSArray, NSString, OPTTSTextToSpeechRequestMeta;

@interface OPTTSMutableTextToSpeechRequest : OPTTSTextToSpeechRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long audio_type;
@property (nonatomic) _Bool enable_word_timing_info;
@property (copy, nonatomic) NSString *voice_name;
@property (copy, nonatomic) NSArray *context_info;
@property (nonatomic) long long preferred_voice_type;
@property (copy, nonatomic) OPTTSTextToSpeechRequestMeta *meta_info;

+ (id)genderStringFromGender:(long long)arg1;
+ (id)requestFromVSRequest:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
