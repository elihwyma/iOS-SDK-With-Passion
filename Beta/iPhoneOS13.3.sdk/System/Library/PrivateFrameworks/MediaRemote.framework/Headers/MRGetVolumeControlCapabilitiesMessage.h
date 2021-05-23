/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRGetVolumeControlCapabilitiesMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *outputDeviceUID;

- (unsigned long long)type;
- (id)initWithOutputDeviceUID:(id)arg1;

@end
