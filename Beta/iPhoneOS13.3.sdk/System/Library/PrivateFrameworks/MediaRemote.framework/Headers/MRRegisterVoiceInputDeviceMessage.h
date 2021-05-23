/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualVoiceInputDeviceDescriptor;

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage

{
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;
}

@property (nonatomic, readonly) MRVirtualVoiceInputDeviceDescriptor *descriptor;

- (unsigned long long)type;
- (id)initWithDescriptor:(id)arg1;

@end
