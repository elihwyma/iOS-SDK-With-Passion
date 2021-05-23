/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@interface MSBatteryPowerMonitor : NSObject

{
    struct __CFRunLoopSource *_batteryRunLoopSource;
    struct IONotificationPort *_batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
    _Bool _isExteralPowerConnected;
    double _currentLevel;
}

@property (nonatomic) double currentLevel;
@property (nonatomic, setter=setExternalPowerConnected:) _Bool isExternalPowerConnected;

+ (id)defaultMonitor;

- (id)init;
- (void)dealloc;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;
- (_Bool)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (double)batteryPercentRemaining;

@end
