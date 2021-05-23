/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface FigCapturePowerMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _registrationToken;
    CDUnknownBlockType _torchHandler;
    struct OpaqueFigSimpleMutex *_maxTorchLevelLock;
    float _maxTorchLevel;
}

@property (readonly) float maxTorchLevel;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)_powerNotification:(unsigned int)arg1;
- (void)setPowerHandler:(CDUnknownBlockType)arg1;

@end
