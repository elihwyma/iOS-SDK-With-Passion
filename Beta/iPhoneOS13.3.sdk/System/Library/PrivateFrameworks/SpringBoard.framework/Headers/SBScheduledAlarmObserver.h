/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class MTAlarmManager;

@interface SBScheduledAlarmObserver : NSObject

{
    MTAlarmManager *_alarmManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)_nextAlarmChanged:(id)arg1;
- (void)_updateAlarmStatusBarItem;

@end
