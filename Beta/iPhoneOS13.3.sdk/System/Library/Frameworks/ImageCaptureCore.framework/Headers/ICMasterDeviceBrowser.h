/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSObject.h>

@class MSCameraDeviceManager, NSMutableArray, PTPCameraDeviceManager;

__attribute__((visibility("hidden")))
@interface ICMasterDeviceBrowser : NSObject

{
    NSMutableArray *_devices;
    NSMutableArray *_browsers;
    NSMutableArray *_suspendedBrowsers;
    long long _numberOfBrowsingBrowsers;
    PTPCameraDeviceManager *_ptpDevManager;
    MSCameraDeviceManager *_msDevManager;
}

@property (readonly) NSMutableArray *devices;
@property (readonly) NSMutableArray *browsers;

+ (_Bool)exists;
+ (id)defaultBrowser;

- (id)init;
- (void)dealloc;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (int)start:(id)arg1;
- (void)stop:(id)arg1;
- (void)addBrowser:(id)arg1;
- (_Bool)startPTPCameraBrowser;
- (_Bool)startMSCameraBrowser;
- (void)removeBrowser:(id)arg1;
- (id)deviceWithDelegate:(id)arg1;

@end
