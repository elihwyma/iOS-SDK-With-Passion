/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@interface MRLegacyVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int capabilities;

- (unsigned long long)type;
- (id)initWithCapabilities:(unsigned int)arg1;

@end
