/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface OPTTSTextToSpeechRequest_ContextInfoEntry : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ContextInfoEntry *_root;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *value;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextInfoEntry *)arg2 verify:(_Bool)arg3;
- (Offset_247d1513)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextInfoEntry *)arg2;

@end
