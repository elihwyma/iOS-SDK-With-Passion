/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface SBBluetoothAccessoryBatteryMonitor : NSObject

{
    NSMutableSet *_accessoryNamesInLowPower;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilder;
- (void)_popLowPowerAlertForAccessoryIfNecessary:(id)arg1;

@end
