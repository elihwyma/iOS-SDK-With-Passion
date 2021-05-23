/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, OPTTSStartTextToSpeechStreamingRequest;

@interface OPTTSTextToSpeechRouterStreamingStreamingRequest : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechRouterStreamingStreamingRequest *_root;
}

@property (nonatomic, readonly) long long content_type;
@property (nonatomic, readonly) OPTTSStartTextToSpeechStreamingRequest *contentAsOPTTSStartTextToSpeechStreamingRequest;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingRequest *)arg2 verify:(_Bool)arg3;
- (Offset_5ef787ef)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingRequest *)arg2;

@end
