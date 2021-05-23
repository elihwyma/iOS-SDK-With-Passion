/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString, OPTTSAudioDescription, OPTTSTextToSpeechMeta;

@interface OPTTSTextToSpeechResponse : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechResponse *_root;
}

@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) long long audio_type;
@property (nonatomic, readonly) int sample_rate;
@property (nonatomic, readonly) NSData *audio;
@property (nonatomic, readonly) OPTTSAudioDescription *decoder_description;
@property (nonatomic, readonly) OPTTSAudioDescription *playback_description;
@property (nonatomic, readonly) NSArray *word_timing_info;
@property (nonatomic, readonly) OPTTSTextToSpeechMeta *meta_info;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResponse *)arg2 verify:(_Bool)arg3;
- (Offset_84bb9af3)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResponse *)arg2;
- (void)audio:(CDUnknownBlockType)arg1;

@end
