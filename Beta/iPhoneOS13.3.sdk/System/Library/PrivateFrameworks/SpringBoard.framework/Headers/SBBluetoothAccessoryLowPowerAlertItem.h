/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBBluetoothAccessoryLowPowerAlertItem : SBAlertItem

{
    long long _batteryLevel;
    NSString *_accessoryName;
}

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)wakeDisplay;
- (id)initWithAccessory:(id)arg1 batteryLevel:(long long)arg2;

@end
