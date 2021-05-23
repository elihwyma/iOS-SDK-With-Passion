/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface STDowntime : NSManagedObject

@property (copy, nonatomic) NSString *calendarIdentifier;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool canAskForMoreTime;
@property (copy, nonatomic) NSSet *schedule;

- (void)setStartHour:(long long)arg1 startMinute:(long long)arg2 endHour:(long long)arg3 endMinute:(long long)arg4;

@end
