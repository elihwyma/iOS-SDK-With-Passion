/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSDateInterval.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _NSConcreteDateInterval : NSDateInterval

{
    NSDate *_startDate;
    double _duration;
}

- (id)init;
- (void)dealloc;
- (id)startDate;
- (id)endDate;
- (double)duration;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

@end
