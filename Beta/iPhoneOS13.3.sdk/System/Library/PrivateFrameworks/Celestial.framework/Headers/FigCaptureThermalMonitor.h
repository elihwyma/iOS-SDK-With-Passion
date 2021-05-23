/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface FigCaptureThermalMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _registrationToken;
    CDUnknownBlockType _thermalHandler;
    struct OpaqueFigSimpleMutex *_thermalNotificationLock;
    float _maxTorchLevel;
    int _thermalLevel;
}

@property (readonly) float maxTorchLevel;
@property (readonly) int thermalLevel;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)setThermalHandler:(CDUnknownBlockType)arg1;
- (void)_thermalNotification:(int)arg1;

@end
