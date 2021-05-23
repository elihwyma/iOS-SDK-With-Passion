/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class CAMMotionController, UIWindow;

@protocol OS_dispatch_queue;

@interface JTOrientationMonitor : NSObject

{
    UIWindow *_window;
    long long _windowInterfaceOrientation_internal;
    CAMMotionController *_motionController;
    long long _captureInterfaceOrientation_internal;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) long long windowInterfaceOrientation_internal;
@property (retain, nonatomic) CAMMotionController *motionController;
@property (nonatomic) long long captureInterfaceOrientation_internal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) long long windowInterfaceOrientation;
@property (nonatomic, readonly) long long captureInterfaceOrientation;
@property (nonatomic, readonly) long long statusBarOrientation;

+ (id)sharedInstance;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initializeWithWindow:(id)arg1;
+ (unsigned int)rotationFromCaptureDevicePosition:(long long)arg1 captureVideoOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3;
+ (id)CFX_sharedInstanceWithWindow:(id)arg1;

- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (void)CFX_setWindowInterfaceOrientation:(long long)arg1;
- (void)applicationDidChangeStatusBarOrientationNotification:(id)arg1;
- (void)camMotionControllerCaptureOrientationChangedNotification:(id)arg1;
- (void)CFX_setCaptureInterfaceOrientation:(long long)arg1;

@end
