/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeDidChangeMessage : MRProtocolMessage

@property (nonatomic, readonly) float volume;
@property (nonatomic, readonly) NSString *endpointUID;
@property (nonatomic, readonly) NSString *outputDeviceUID;

- (unsigned long long)type;
- (id)initWithVolume:(float)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3;

@end
