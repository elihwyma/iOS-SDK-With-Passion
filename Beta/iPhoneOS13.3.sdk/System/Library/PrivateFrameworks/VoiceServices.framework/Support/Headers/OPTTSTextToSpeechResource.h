/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface OPTTSTextToSpeechResource : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechResource *_root;
}

@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *version;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResource *)arg2 verify:(_Bool)arg3;
- (Offset_ccd79ebd)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResource *)arg2;
- (id)vs_voiceResource;

@end
