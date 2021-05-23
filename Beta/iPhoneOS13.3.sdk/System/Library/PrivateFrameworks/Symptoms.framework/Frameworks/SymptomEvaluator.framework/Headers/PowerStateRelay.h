/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PowerStateRelay : NSObject

{
    int powerStateToken;
    int screenStateToken;
    unsigned int _batteryService;
    unsigned int _batteryNotification;
    struct IONotificationPort *_batteryPort;
    _Bool _pluggedIn;
    _Bool _screenNotDark;
    double _batteryPercentage;
}

@property _Bool pluggedIn;
@property _Bool screenNotDark;
@property double batteryPercentage;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultRelay;

- (id)init;
- (void)dealloc;
- (void)enableIOKitBatteryLevelNotifications;
- (void)disableIOKitBatteryLevelNotifications;
- (id)getBatteryProperties;
- (double)batteryPercentageFromPowerSourceDictionary:(id)arg1;
- (void)handleBatteryNotification;

@end
