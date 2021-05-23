/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber, NSString, NSURL;

@interface STAlarmModification : STSiriModelObject

{
    long long _addedFrequency;
    NSURL *_alarmId;
    NSNumber *_enabled;
    NSNumber *_hour;
    NSString *_label;
    NSNumber *_minute;
    long long _removedFrequency;
}

+ (_Bool)supportsSecureCoding;

- (id)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)hour;
- (id)minute;
- (id)label;
- (id)alarmId;
- (long long)addedFrequency;
- (long long)removedFrequency;
- (id)_initWithAddedFrequency:(long long)arg1 alarmId:(id)arg2 enabled:(id)arg3 hour:(id)arg4 label:(id)arg5 minute:(id)arg6 removedFrequency:(long long)arg7;

@end
