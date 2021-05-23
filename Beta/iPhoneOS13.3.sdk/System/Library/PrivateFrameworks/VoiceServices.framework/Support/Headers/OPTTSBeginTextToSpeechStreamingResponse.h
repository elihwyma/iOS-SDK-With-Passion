/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString, OPTTSAudioDescription, OPTTSTextToSpeechMeta;

@interface OPTTSBeginTextToSpeechStreamingResponse : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BeginTextToSpeechStreamingResponse *_root;
}

@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) NSString *stream_id;
@property (nonatomic, readonly) long long audio_type;
@property (nonatomic, readonly) OPTTSAudioDescription *decoder_description;
@property (nonatomic, readonly) OPTTSAudioDescription *playback_description;
@property (nonatomic, readonly) OPTTSTextToSpeechMeta *meta_info;
@property (nonatomic, readonly) float streaming_playback_buffer_size_in_seconds;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BeginTextToSpeechStreamingResponse *)arg2 verify:(_Bool)arg3;
- (Offset_afb4d078)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BeginTextToSpeechStreamingResponse *)arg2;

@end
