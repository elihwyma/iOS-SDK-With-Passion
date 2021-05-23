/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@interface MRGetVolumeResultMessage : MRProtocolMessage

@property (nonatomic, readonly) float volume;

- (unsigned long long)type;
- (id)initWithVolume:(float)arg1;

@end
