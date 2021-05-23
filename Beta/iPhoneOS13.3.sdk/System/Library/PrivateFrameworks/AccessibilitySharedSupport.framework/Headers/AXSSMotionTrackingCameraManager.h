/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceDiscoverySession, NSArray, NSMutableArray;

@protocol AXSSMotionTrackingCameraManagerDelegate;

@interface AXSSMotionTrackingCameraManager : NSObject

{
    _Bool __monitoring;
    id <AXSSMotionTrackingCameraManagerDelegate> _delegate;
    NSMutableArray *__compatibleCaptureDevices;
    NSMutableArray *__allCaptureDevices;
    AVCaptureDeviceDiscoverySession *__captureDeviceDiscoverySession;
}

@property (nonatomic) _Bool _monitoring;
@property (retain, nonatomic) NSMutableArray *_compatibleCaptureDevices;
@property (retain, nonatomic) NSMutableArray *_allCaptureDevices;
@property (retain, nonatomic) AVCaptureDeviceDiscoverySession *_captureDeviceDiscoverySession;
@property (copy, nonatomic, readonly) NSArray *compatibleCaptureDevices;
@property (copy, nonatomic, readonly) NSArray *allCaptureDevices;
@property (nonatomic, readonly) AVCaptureDevice *defaultCaptureDevice;
@property (weak, nonatomic) id <AXSSMotionTrackingCameraManagerDelegate> delegate;

+ (id)_sortedCaptureDevicesFromDevices:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)_captureDeviceConnected:(id)arg1;
- (void)_captureDeviceDisconnected:(id)arg1;
- (void)_startDiscoverySession;
- (void)_captureDeviceUpdated;
- (void)_stopDiscoverySession;
- (void)_allCaptureDevicesChanged:(id)arg1;
- (void)_resetDiscoverySession;

@end
