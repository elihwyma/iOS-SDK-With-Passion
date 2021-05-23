/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSDate.h>

@interface NSDate (Additions)

- (_Bool)isBeforeDate:(id)arg1;
- (id)displayString;
- (id)beginningOfDay;
- (id)beginningOfPreviousDay;
- (id)displayStringWithTime:(_Bool)arg1;
- (id)dateStringWithDotSeparators;
- (long long)compareDay:(id)arg1;
- (int)daysOfTheYearFromDate:(id)arg1;
- (int)approximateDaysOfTheYearFromDate:(id)arg1;

@end
