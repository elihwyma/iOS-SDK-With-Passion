/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MRSetVolumeMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *outputDeviceUID;
@property (nonatomic, readonly) float volume;

- (unsigned long long)type;
- (id)initWithVolume:(float)arg1 outputDeviceUID:(id)arg2;
- (id)initWithVolume:(float)arg1;

@end
