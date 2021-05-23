/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class CLLocationManager, CMMotionManager, NSTimer;

__attribute__((visibility("hidden")))
@interface WebCoreMotionManager : NSObject

{
    CMMotionManager *m_motionManager;
    CLLocationManager *m_locationManager;
    struct HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *>> m_deviceMotionClients;
    struct HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *>> m_deviceOrientationClients;
    NSTimer *m_updateTimer;
    _Bool m_gyroAvailable;
    _Bool m_headingAvailable;
    _Bool m_initialized;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)update;
- (_Bool)headingAvailable;
- (void)addMotionClient:(struct DeviceMotionClientIOS *)arg1;
- (void)removeMotionClient:(struct DeviceMotionClientIOS *)arg1;
- (_Bool)gyroAvailable;
- (void)addOrientationClient:(struct DeviceOrientationClientIOS *)arg1;
- (void)removeOrientationClient:(struct DeviceOrientationClientIOS *)arg1;
- (void)initializeOnMainThread;
- (void)checkClientStatus;
- (void)sendMotionData:(id)arg1 withHeading:(id)arg2;
- (void)sendAccelerometerData:(id)arg1;

@end
