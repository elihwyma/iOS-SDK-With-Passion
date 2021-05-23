/*
 Image: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
 */

#import <Foundation/NSObject.h>

@interface DAECalendarAvailabilitySpan : NSObject

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)startDate;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3;

@end
