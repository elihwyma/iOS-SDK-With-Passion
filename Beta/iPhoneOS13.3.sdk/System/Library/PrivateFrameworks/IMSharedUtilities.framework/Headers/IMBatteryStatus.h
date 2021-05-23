/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@protocol IMBatteryStatusTestDelegate;

@interface IMBatteryStatus : NSObject

{
    id <IMBatteryStatusTestDelegate> _testDelegate;
}

@property (weak, nonatomic) id <IMBatteryStatusTestDelegate> testDelegate;
@property (readonly, getter=isCharging) _Bool charging;

@end
