/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <SiriTasks/STAlarmAction.h>

@class NSArray;

@interface STUpdateAlarmAction : STAlarmAction

{
    NSArray *_modifications;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)modifications;
- (id)_initWithModifications:(id)arg1;

@end
