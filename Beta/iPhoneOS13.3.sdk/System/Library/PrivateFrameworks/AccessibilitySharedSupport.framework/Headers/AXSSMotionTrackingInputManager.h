/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class AXSSMotionTrackingCameraManager, AXSSMotionTrackingHIDManager, AXSSMotionTrackingInput, AXSSMotionTrackingInputConfiguration, NSArray, NSMutableArray, NSString;

@protocol AXSSMotionTrackingInputManagerDelegate;

@interface AXSSMotionTrackingInputManager : NSObject

{
    _Bool __monitoring;
    AXSSMotionTrackingInputConfiguration *_configuration;
    AXSSMotionTrackingInput *_inputToUse;
    id <AXSSMotionTrackingInputManagerDelegate> _delegate;
    AXSSMotionTrackingCameraManager *__cameraManager;
    NSMutableArray *__compatibleCameraInputs;
    NSMutableArray *__allCameraInputs;
    AXSSMotionTrackingHIDManager *__hidManager;
    NSMutableArray *__hidInputs;
    NSMutableArray *__compatibleInputs;
    NSMutableArray *__allInputs;
}

@property (nonatomic) _Bool _monitoring;
@property (retain, nonatomic) AXSSMotionTrackingCameraManager *_cameraManager;
@property (retain, nonatomic) NSMutableArray *_compatibleCameraInputs;
@property (retain, nonatomic) NSMutableArray *_allCameraInputs;
@property (retain, nonatomic) AXSSMotionTrackingHIDManager *_hidManager;
@property (retain, nonatomic) NSMutableArray *_hidInputs;
@property (nonatomic, readonly) _Bool _supportsHIDInputs;
@property (retain, nonatomic) AXSSMotionTrackingInput *inputToUse;
@property (retain, nonatomic) NSMutableArray *_compatibleInputs;
@property (retain, nonatomic) NSMutableArray *_allInputs;
@property (nonatomic, readonly) _Bool _supportsCameraInputs;
@property (copy, nonatomic) AXSSMotionTrackingInputConfiguration *configuration;
@property (copy, nonatomic, readonly) NSArray *compatibleInputs;
@property (copy, nonatomic, readonly) NSArray *allInputs;
@property (weak, nonatomic) id <AXSSMotionTrackingInputManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithConfiguration:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)_updateMonitoring;
- (void)_inputUpdated;
- (_Bool)_supportsMotionTrackingType:(unsigned long long)arg1;
- (id)_compatibleCameraInputMatchingCaptureDeviceUniqueID:(id)arg1;
- (void)motionTrackingCameraManager:(id)arg1 updatedCompatibleCaptureDevices:(id)arg2;
- (void)motionTrackingHIDManager:(id)arg1 updatedDevices:(id)arg2;

@end
