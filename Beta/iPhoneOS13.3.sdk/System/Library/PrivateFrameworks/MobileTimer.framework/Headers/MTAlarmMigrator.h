/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarm, NSMutableArray;

@interface MTAlarmMigrator : NSObject

{
    NSMutableArray *_alarms;
    MTAlarm *_sleepAlarm;
}

@property (retain, nonatomic) NSMutableArray *alarms;
@property (retain, nonatomic) MTAlarm *sleepAlarm;

- (void)migrateFromOldStorage;
- (void)removeFromOldStorage;
- (void)cleanUpOldNotifications;

@end
