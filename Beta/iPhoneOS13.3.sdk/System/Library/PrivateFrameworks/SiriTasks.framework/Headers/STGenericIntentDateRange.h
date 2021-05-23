/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface STGenericIntentDateRange : NSObject

{
    NSString *_name;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

@end
