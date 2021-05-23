/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface OPTTSTextToSpeechRequestMeta : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechRequestMeta *_root;
}

@property (nonatomic, readonly) long long channel_type;
@property (nonatomic, readonly) NSString *app_id;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestMeta *)arg2 verify:(_Bool)arg3;
- (Offset_ad483e0b)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestMeta *)arg2;

@end
