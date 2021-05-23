/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class NSLock, NSThread;

@protocol BKSAccelerometerDelegate;

@interface BKSAccelerometer : NSObject

{
    id <BKSAccelerometerDelegate> _delegate;
    struct __CFRunLoopSource *_accelerometerEventsSource;
    struct __CFRunLoop *_accelerometerEventsRunLoop;
    double _updateInterval;
    NSLock *_lock;
    int _orientationCheckToken;
    int _orientationNotificationsToken;
    NSThread *_orientationEventsThread;
    unsigned int _orientationPort;
    _Bool _passiveOrientationEvents;
    _Bool _orientationEventsEnabled;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
}

@property (nonatomic) _Bool accelerometerEventsEnabled;
@property (nonatomic) double updateInterval;
@property (nonatomic) float xThreshold;
@property (nonatomic) float yThreshold;
@property (nonatomic) float zThreshold;
@property (nonatomic) _Bool passiveOrientationEvents;
@property (nonatomic) _Bool orientationEventsEnabled;
@property (weak, nonatomic) id <BKSAccelerometerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)_checkIn;
- (int)currentDeviceOrientation;
- (id)_orientationEventsThread;
- (void)_checkOut;
- (void)_serverWasRestarted;
- (void)_updateOrientationServer;
- (void)_orientationDidChange;

@end
