/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol VCSessionDownlinkBandwidthAllocatorClient;

__attribute__((visibility("hidden")))
@interface VCSessionBandwidthAllocationTableEntry : NSObject

{
    id <VCSessionDownlinkBandwidthAllocatorClient> _client;
    unsigned int _maxNetworkBitrate;
    unsigned int _maxMediaBitrate;
    unsigned int _qualityIndex;
    _Bool _isLowestQualityAudio;
    unsigned char _type;
    unsigned int _streamID;
    unsigned int _actualNetworkBitrate;
    _Bool _hasRepairStreamID;
    unsigned int _repairStreamID;
    unsigned int _repairMaxNetworkBitrate;
    _Bool _enabled;
}

@property (readonly) id <VCSessionDownlinkBandwidthAllocatorClient> client;
@property (readonly) unsigned int maxNetworkBitrate;
@property (readonly) unsigned int maxMediaBitrate;
@property (readonly) unsigned int qualityIndex;
@property _Bool isLowestQualityAudio;
@property (readonly) unsigned char type;
@property (readonly) unsigned int streamID;
@property unsigned int actualNetworkBitrate;
@property (readonly) unsigned int repairStreamID;
@property (readonly) unsigned int repairMaxNetworkBitrate;
@property (readonly) _Bool hasRepairStreamID;
@property (getter=isEnabled) _Bool enabled;

+ (long long)compareAudioEntry:(id)arg1 audioEntry:(id)arg2;
+ (long long)compareAudioEntry:(id)arg1 videoEntry:(id)arg2;
+ (long long)compareVideoEntry:(id)arg1 videoEntry:(id)arg2;

- (void)dealloc;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 networkBitrate:(unsigned int)arg3 mediaBitrate:(unsigned int)arg4 qualityIndex:(unsigned int)arg5 streamID:(unsigned int)arg6;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 networkBitrate:(unsigned int)arg3 mediaBitrate:(unsigned int)arg4 qualityIndex:(unsigned int)arg5 streamID:(unsigned int)arg6 hasRepairStreamID:(_Bool)arg7 repairStreamID:(unsigned int)arg8 repairMaxNetworkBitrate:(unsigned int)arg9 enabled:(_Bool)arg10;

@end
