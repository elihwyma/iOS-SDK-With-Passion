/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSString;

@interface STReminderListObject : STSiriModelObject

{
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;

- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setName:(id)arg1;
- (id)_aceContextObjectValue;
- (id)_aceValue;

@end
