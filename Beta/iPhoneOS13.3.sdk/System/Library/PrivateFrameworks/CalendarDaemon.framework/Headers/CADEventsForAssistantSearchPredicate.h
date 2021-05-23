/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/EKPredicate.h>

@class NSArray, NSString;

@interface CADEventsForAssistantSearchPredicate : EKPredicate

{
    NSString *_location;
    NSString *_notes;
    NSArray *_participants;
    long long _limit;
}

@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSArray *participants;
@property (nonatomic) long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (id)initWithTimeZone:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 notes:(id)arg6 participants:(id)arg7 limit:(long long)arg8;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end
