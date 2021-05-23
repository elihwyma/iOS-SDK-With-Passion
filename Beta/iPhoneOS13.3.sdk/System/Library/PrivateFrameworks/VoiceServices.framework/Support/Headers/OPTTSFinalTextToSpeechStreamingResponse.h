/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface OPTTSFinalTextToSpeechStreamingResponse : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct FinalTextToSpeechStreamingResponse *_root;
}

@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) NSString *stream_id;
@property (nonatomic, readonly) int total_pkt_number;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalTextToSpeechStreamingResponse *)arg2 verify:(_Bool)arg3;
- (Offset_8cb3aebb)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalTextToSpeechStreamingResponse *)arg2;

@end
