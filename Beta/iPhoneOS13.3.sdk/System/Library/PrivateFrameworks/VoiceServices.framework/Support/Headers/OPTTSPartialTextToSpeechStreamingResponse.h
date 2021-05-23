/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface OPTTSPartialTextToSpeechStreamingResponse : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct PartialTextToSpeechStreamingResponse *_root;
}

@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) NSString *stream_id;
@property (nonatomic, readonly) int current_pkt_number;
@property (nonatomic, readonly) NSData *audio;
@property (nonatomic, readonly) NSArray *word_timing_info;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialTextToSpeechStreamingResponse *)arg2 verify:(_Bool)arg3;
- (Offset_cde40885)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialTextToSpeechStreamingResponse *)arg2;
- (void)audio:(CDUnknownBlockType)arg1;

@end
