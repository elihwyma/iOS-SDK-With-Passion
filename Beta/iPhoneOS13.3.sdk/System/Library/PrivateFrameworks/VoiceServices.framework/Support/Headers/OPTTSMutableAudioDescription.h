/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/OPTTSAudioDescription.h>

@interface OPTTSMutableAudioDescription : OPTTSAudioDescription

@property (nonatomic) double sample_rate;
@property (nonatomic) unsigned int format_id;
@property (nonatomic) unsigned int format_flags;
@property (nonatomic) unsigned int bytes_per_packet;
@property (nonatomic) unsigned int frames_per_packet;
@property (nonatomic) unsigned int bytes_per_frame;
@property (nonatomic) unsigned int channels_per_frame;
@property (nonatomic) unsigned int bits_per_channel;
@property (nonatomic) unsigned int reserved;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
