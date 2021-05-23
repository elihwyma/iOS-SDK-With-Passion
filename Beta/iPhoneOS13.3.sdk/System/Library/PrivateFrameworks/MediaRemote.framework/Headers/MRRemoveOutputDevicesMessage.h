/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRRemoveOutputDevicesMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *outputDeviceUIDs;

- (unsigned long long)type;
- (id)initWithOutputDeviceUIDs:(id)arg1;

@end
