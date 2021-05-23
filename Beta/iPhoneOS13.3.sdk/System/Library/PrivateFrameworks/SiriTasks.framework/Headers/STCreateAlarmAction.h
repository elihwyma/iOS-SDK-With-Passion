/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <SiriTasks/STAlarmAction.h>

@class STAlarm;

@interface STCreateAlarmAction : STAlarmAction

{
    STAlarm *_alarm;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)alarm;
- (id)_initWithAlarm:(id)arg1;

@end
