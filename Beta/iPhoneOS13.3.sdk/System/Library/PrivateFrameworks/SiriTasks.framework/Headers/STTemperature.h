/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/STSiriModelObject.h>

@interface STTemperature : STSiriModelObject

{
    double _value;
    long long _units;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)value;
- (long long)units;
- (id)_initWithValue:(double)arg1 units:(long long)arg2;

@end
