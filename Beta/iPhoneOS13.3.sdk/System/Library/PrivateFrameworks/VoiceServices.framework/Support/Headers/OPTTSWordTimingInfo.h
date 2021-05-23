/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface OPTTSWordTimingInfo : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct WordTimingInfo *_root;
}

@property (nonatomic, readonly) NSString *word;
@property (nonatomic, readonly) unsigned int sample_idx;
@property (nonatomic, readonly) unsigned int offset;
@property (nonatomic, readonly) unsigned int length;
@property (nonatomic, readonly) float timestamp;

+ (id)vs_wordTimingInfos:(id)arg1 withText:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WordTimingInfo *)arg2 verify:(_Bool)arg3;
- (Offset_79ee9959)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WordTimingInfo *)arg2;

@end
