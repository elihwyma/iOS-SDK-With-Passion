/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString, OPTTSTextToSpeechRequestMeta;

@interface OPTTSStartTextToSpeechStreamingRequest : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StartTextToSpeechStreamingRequest *_root;
}

@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *stream_id;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *gender;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) long long audio_type;
@property (nonatomic, readonly) _Bool enable_word_timing_info;
@property (nonatomic, readonly) NSString *voice_name;
@property (nonatomic, readonly) NSArray *context_info;
@property (nonatomic, readonly) long long preferred_voice_type;
@property (nonatomic, readonly) OPTTSTextToSpeechRequestMeta *meta_info;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartTextToSpeechStreamingRequest *)arg2 verify:(_Bool)arg3;
- (Offset_acd6b661)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartTextToSpeechStreamingRequest *)arg2;

@end
