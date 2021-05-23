/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface EKAvailabilitySpanDate : NSObject

{
    NSDate *_spanDate;
    long long _dateType;
    long long _spanType;
}

@property (retain, nonatomic) NSDate *spanDate;
@property long long dateType;
@property long long spanType;

+ (unsigned int)valueForSpanType:(long long)arg1;

- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithDate:(id)arg1 dateType:(long long)arg2 spanType:(long long)arg3;

@end
