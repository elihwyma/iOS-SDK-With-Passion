/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, OPTTSTextToSpeechResource, OPTTSTextToSpeechVoice;

@interface OPTTSTextToSpeechMeta : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechMeta *_root;
}

@property (nonatomic, readonly) OPTTSTextToSpeechVoice *voice;
@property (nonatomic, readonly) OPTTSTextToSpeechResource *resource;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechMeta *)arg2 verify:(_Bool)arg3;
- (Offset_256a1c65)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechMeta *)arg2;

@end
