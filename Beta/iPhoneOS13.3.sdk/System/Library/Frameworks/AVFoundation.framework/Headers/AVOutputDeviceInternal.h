/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol AVOutputDeviceImpl;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceInternal : NSObject

{
    id <AVOutputDeviceImpl> impl;
    NSString *name;
    NSString *ID;
    long long deviceType;
    long long deviceSubType;
    NSString *manufacturer;
    NSString *modelID;
    NSString *serialNumber;
    NSString *firmwareVersion;
    NSData *MACAddress;
    unsigned long long deviceFeatures;
}

@end
