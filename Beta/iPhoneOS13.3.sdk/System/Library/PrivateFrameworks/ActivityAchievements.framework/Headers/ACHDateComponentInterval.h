/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

#import <Foundation/NSObject.h>

@class NSDateComponents;

@interface ACHDateComponentInterval : NSObject

{
    NSDateComponents *_startDateComponents;
    NSDateComponents *_endDateComponents;
}

@property (nonatomic, readonly) NSDateComponents *startDateComponents;
@property (nonatomic, readonly) NSDateComponents *endDateComponents;

- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
- (_Bool)containsDateComponents:(id)arg1 inCalendar:(id)arg2;
- (unsigned long long)countOfDaysContainedInIntervalInCalendar:(id)arg1;

@end
