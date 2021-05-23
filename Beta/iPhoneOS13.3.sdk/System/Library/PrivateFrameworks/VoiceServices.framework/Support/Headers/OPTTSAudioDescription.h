/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary;

@interface OPTTSAudioDescription : NSObject

{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AudioDescription *_root;
}

@property (nonatomic, readonly) double sample_rate;
@property (nonatomic, readonly) unsigned int format_id;
@property (nonatomic, readonly) unsigned int format_flags;
@property (nonatomic, readonly) unsigned int bytes_per_packet;
@property (nonatomic, readonly) unsigned int frames_per_packet;
@property (nonatomic, readonly) unsigned int bytes_per_frame;
@property (nonatomic, readonly) unsigned int channels_per_frame;
@property (nonatomic, readonly) unsigned int bits_per_channel;
@property (nonatomic, readonly) unsigned int reserved;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct AudioStreamBasicDescription)audioStreamBasicDescription;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioDescription *)arg2 verify:(_Bool)arg3;
- (Offset_407e0587)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioDescription *)arg2;

@end
