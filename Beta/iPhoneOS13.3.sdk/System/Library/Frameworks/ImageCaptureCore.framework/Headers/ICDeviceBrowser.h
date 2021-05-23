/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject

{
    id _privateData;
    unsigned long long _browsedDeviceTypeMask;
    NSArray *_devices;
}

@property (nonatomic) NSArray *devices;
@property id <ICDeviceBrowserDelegate> delegate;
@property (readonly, getter=isBrowsing) _Bool browsing;
@property unsigned long long browsedDeviceTypeMask;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (id)internalDevices;

@end
