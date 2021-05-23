/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WDTimePeriod : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)timePeriodWithSample:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sleep_titleString;

@end
