/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioRelayIOControllerSettings : NSObject

{
    struct AudioStreamBasicDescription _audioFormat;
    struct _VCRemoteCodecInfo _remoteCodecInfo;
}

@property (nonatomic, readonly) const struct AudioStreamBasicDescription *audioFormat;
@property (nonatomic, readonly) const struct _VCRemoteCodecInfo *remoteCodecInfo;
@property (nonatomic, readonly) unsigned int samplesPerFrame;

- (id)initWithAudioFormat:(const struct AudioStreamBasicDescription *)arg1 remoteCodecInfo:(const struct _VCRemoteCodecInfo *)arg2;

@end
