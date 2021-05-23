/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarmManager, NSSet;

@protocol NAScheduler;

@interface MTNextAlarmManager : NSObject

{
    NSSet *_nextAlarms;
    CDUnknownBlockType _updateHandler;
    id <NAScheduler> _serializer;
    MTAlarmManager *_alarmManager;
}

@property (retain, nonatomic) id <NAScheduler> serializer;
@property (retain, nonatomic) NSSet *nextAlarms;
@property (retain, nonatomic) MTAlarmManager *alarmManager;
@property (copy, nonatomic) CDUnknownBlockType updateHandler;

- (id)init;
- (void)calculateNextAlarms;
- (void)_handleAlarmsDidChange;

@end
