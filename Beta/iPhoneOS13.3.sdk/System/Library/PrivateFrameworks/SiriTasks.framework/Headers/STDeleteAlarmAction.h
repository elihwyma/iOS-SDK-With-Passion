/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <SiriTasks/STAlarmAction.h>

@class NSArray;

@interface STDeleteAlarmAction : STAlarmAction

{
    NSArray *_alarmIds;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)alarmIds;
- (id)_initWithAlarmIds:(id)arg1;

@end
