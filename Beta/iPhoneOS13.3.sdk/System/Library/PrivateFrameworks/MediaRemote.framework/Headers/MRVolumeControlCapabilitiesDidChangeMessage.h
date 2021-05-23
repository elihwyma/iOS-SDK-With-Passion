/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int capabilities;
@property (nonatomic, readonly) NSString *endpointUID;
@property (nonatomic, readonly) NSString *outputDeviceUID;

- (unsigned long long)type;
- (id)initWithCapabilities:(unsigned int)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3;

@end
