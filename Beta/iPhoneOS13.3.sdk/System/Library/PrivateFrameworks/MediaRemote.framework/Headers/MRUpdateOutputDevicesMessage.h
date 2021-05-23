/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRUpdateOutputDevicesMessage : MRProtocolMessage

{
    NSArray *_outputDevices;
}

@property (nonatomic, readonly) NSArray *outputDevices;

- (unsigned long long)type;
- (id)initWithOutputDevices:(id)arg1;

@end
