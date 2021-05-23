/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol TPSCloudCallingDeviceControllerDelegate;

@interface TPSCloudCallingDeviceController : NSObject

{
    _Bool _enabled;
    id <TPSCloudCallingDeviceControllerDelegate> _delegate;
    NSArray *_devices;
}

@property (copy, nonatomic) NSArray *devices;
@property (weak, nonatomic) id <TPSCloudCallingDeviceControllerDelegate> delegate;
@property (nonatomic) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)didChangeCloudCallingDevices;

@end
