/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject

{
    AVInternalDeviceList *_internalList;
}

@property (copy, nonatomic) CDUnknownBlockType changeListener;

+ (id)currentInputDevice;
+ (_Bool)setInputDevice:(id)arg1;
+ (id)defaultInputDevice;
+ (id)defaultOutputDevice;
+ (id)deviceForUID:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)devices;
- (id)inputDevices;
- (id)outputDevices;

@end
