/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@interface SBLowPowerAlertItem : SBAlertItem

{
    unsigned int _talkLevel;
}

+ (void)initialize;
+ (void)setBatteryLevel:(unsigned int)arg1;
+ (_Bool)_shouldIgnoreChangeToBatteryLevel:(unsigned int)arg1;
+ (unsigned int)_thresholdForLevel:(unsigned int)arg1;

- (id)init;
- (id)initWithLevel:(unsigned int)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)shouldShowInLockScreen;
- (_Bool)shouldShowInEmergencyCall;
- (_Bool)wakeDisplay;
- (void)_enableLowPowerMode;

@end
