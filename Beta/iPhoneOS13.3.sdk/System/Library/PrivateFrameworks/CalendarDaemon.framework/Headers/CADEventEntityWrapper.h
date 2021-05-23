/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADEntityWrapper.h>

@interface CADEventEntityWrapper : CADEntityWrapper

{
    double _occurrenceDate;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)occurrenceDate;
- (id)initWithCalEntity:(void *)arg1 propertiesToLoad:(id)arg2 occurrenceDate:(double)arg3;

@end
