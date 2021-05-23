/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualTouchDeviceDescriptor;

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage

{
    MRVirtualTouchDeviceDescriptor *_deviceDescriptor;
}

@property (copy, nonatomic, readonly) MRVirtualTouchDeviceDescriptor *deviceDescriptor;

- (unsigned long long)type;
- (id)initWithDeviceDescriptor:(id)arg1;

@end
