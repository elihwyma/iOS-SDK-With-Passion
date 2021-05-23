/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRVirtualVoiceInputDeviceDescriptor, NSData;

@interface MRVirtualVoiceInputDevice : NSObject

{
    unsigned int _deviceID;
    unsigned int _recordingState;
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;
}

@property (nonatomic, readonly) unsigned int deviceID;
@property (copy, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;
@property (nonatomic) unsigned int recordingState;
@property (nonatomic, readonly) NSData *data;

- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithDeviceID:(unsigned int)arg1;

@end
