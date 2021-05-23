/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class VCAudioPayloadConfig;

__attribute__((visibility("hidden")))
@interface VCAudioTier : NSObject

{
    unsigned int networkBitrate;
    unsigned int audioCodecBitrate;
    unsigned int packetsPerBundle;
    unsigned int redNumPayloads;
    unsigned int redMaxDelay20ms;
    VCAudioPayloadConfig *payloadConfig;
    int _operatingMode;
    _Bool _bundlingAppliedByCodec;
}

@property (readonly) unsigned int networkBitrate;
@property (readonly) unsigned int audioCodecBitrate;
@property (readonly) unsigned int packetsPerBundle;
@property (readonly) unsigned int redNumPayloads;
@property (readonly) unsigned int redMaxDelay20ms;
@property (readonly) VCAudioPayloadConfig *payloadConfig;

+ (id)newAudioTierForPayloadConfig:(id)arg1 operatingMode:(int)arg2 audioCodecBitrate:(unsigned int)arg3 packetsPerBundle:(unsigned int)arg4 redNumPayloads:(unsigned int)arg5 headerSize:(unsigned int)arg6;
+ (_Bool)bundlingAppliedByCodecForPayload:(int)arg1 operatingMode:(int)arg2;

- (id)description;
- (_Bool)isEqualTo:(id)arg1;
- (id)initWithNetworkBitrate:(unsigned int)arg1 operatingMode:(int)arg2 audioCodecBitrate:(unsigned int)arg3 packetsPerBundle:(unsigned int)arg4 redNumPayloads:(unsigned int)arg5 payloadConfig:(id)arg6;

@end
