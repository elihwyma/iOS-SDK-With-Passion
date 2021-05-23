/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRGetVolumeMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *outputDeviceUID;

- (id)init;
- (unsigned long long)type;
- (id)initWithOutputDeviceUID:(id)arg1;

@end
