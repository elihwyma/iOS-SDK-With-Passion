/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSString;

@interface STAlarm : STSiriModelObject

{
    _Bool _enabled;
    long long _daysOfWeek;
    long long _hourOfDay;
    long long _minuteOfHour;
    NSString *_label;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) long long daysOfWeek;
@property (nonatomic) long long hourOfDay;
@property (nonatomic) long long minuteOfHour;
@property (copy, nonatomic) NSString *label;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
