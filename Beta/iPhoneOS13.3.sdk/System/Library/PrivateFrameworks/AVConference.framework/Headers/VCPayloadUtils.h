/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPayloadUtils : NSObject

+ (unsigned int)bitrateForAMRCodecMode:(int)arg1;
+ (unsigned int)bitrateForAMRWBCodecMode:(int)arg1;
+ (unsigned int)bitrateForEVSCodecMode:(int)arg1;
+ (long long)codecTypeForPayload:(int)arg1;
+ (unsigned int)bitrateForCodecType:(long long)arg1 mode:(int)arg2;
+ (_Bool)isUseCaseWatchContinuity:(int)arg1 primaryPayload:(int)arg2;
+ (_Bool)isPayloadSupportedInFaceTime:(int)arg1;
+ (unsigned int)sampleRateForPayload:(int)arg1;
+ (unsigned int)blockSizeForPayload:(int)arg1;
+ (_Bool)canSetBitrateForPayload:(int)arg1;
+ (_Bool)shouldUseCookieForPayload:(int)arg1;
+ (_Bool)canBundleExternallyForPayload:(int)arg1 forBundlingScheme:(int)arg2 operatingMode:(int)arg3;
+ (unsigned int)internalBundleFactorForPayload:(int)arg1;
+ (_Bool)shouldEnablePacketSizeLimitForPayload:(int)arg1;
+ (float)qualityForPayload:(int)arg1 forBitrate:(unsigned int)arg2;
+ (int)payloadForCodecType:(long long)arg1;
+ (_Bool)supportsCodecRateModesForCodecType:(long long)arg1;
+ (long long)ctAudioCodecTypeForMediaStreamCodec:(long long)arg1;
+ (long long)ctAudioCodecEVSBandwidthForMediaStreamCodec:(long long)arg1;
+ (long long)ctAudioCodecEVSBitrateForBitrate:(unsigned int)arg1;

@end
