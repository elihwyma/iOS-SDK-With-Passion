/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, OPTTSBeginTextToSpeechStreamingResponse, OPTTSFinalTextToSpeechStreamingResponse, OPTTSPartialTextToSpeechStreamingResponse;

@interface OPTTSTextToSpeechRouterStreamingStreamingResponse : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechRouterStreamingStreamingResponse *_root;
}

@property (nonatomic, readonly) long long content_type;
@property (nonatomic, readonly) OPTTSBeginTextToSpeechStreamingResponse *contentAsOPTTSBeginTextToSpeechStreamingResponse;
@property (nonatomic, readonly) OPTTSPartialTextToSpeechStreamingResponse *contentAsOPTTSPartialTextToSpeechStreamingResponse;
@property (nonatomic, readonly) OPTTSFinalTextToSpeechStreamingResponse *contentAsOPTTSFinalTextToSpeechStreamingResponse;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingResponse *)arg2 verify:(_Bool)arg3;
- (Offset_8714228f)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingResponse *)arg2;

@end
