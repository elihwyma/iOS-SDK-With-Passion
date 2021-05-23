/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface OPTTSTextToSpeechVoice : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechVoice *_root;
}

@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *gender;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSString *quality;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoice *)arg2 verify:(_Bool)arg3;
- (Offset_b4fd9e28)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoice *)arg2;
- (id)vs_voice;

@end
