/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <DoNotDisturb/DNDModeAssertionLifetime.h>

@class NSDate, NSString;

@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime

{
    _Bool _onlyDuringEvent;
    NSString *_eventUniqueID;
    NSDate *_occurrenceDate;
}

@property (copy, nonatomic, readonly) NSString *eventUniqueID;
@property (copy, nonatomic, readonly) NSDate *occurrenceDate;
@property (nonatomic, readonly, getter=isOnlyDuringEvent) _Bool onlyDuringEvent;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)lifetimeType;
- (id)initWithEventUniqueID:(id)arg1 occurrenceDate:(id)arg2 onlyDuringEvent:(_Bool)arg3;

@end
