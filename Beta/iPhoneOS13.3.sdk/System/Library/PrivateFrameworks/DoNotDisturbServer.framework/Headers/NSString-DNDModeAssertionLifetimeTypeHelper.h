/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSString.h>

@interface NSString (DNDModeAssertionLifetimeTypeHelper)

+ (id)dnds_stringForLifetimeType:(unsigned long long)arg1;
+ (id)dnds_stringForScheduleLifetimeBehavior:(unsigned long long)arg1;
+ (id)dnds_stringForInvalidationReason:(unsigned long long)arg1;
+ (id)dnds_stringForInvalidationReasonOverride:(unsigned long long)arg1;
+ (id)dnds_stringForPredicateType:(unsigned long long)arg1;

- (unsigned long long)dnds_lifetimeTypeValue;
- (unsigned long long)dnds_scheduleLifetimeBehaviorValue;
- (unsigned long long)dnds_invalidationReasonValue;
- (unsigned long long)dnds_invalidationReasonOverrideValue;
- (unsigned long long)dnds_predicateTypeValue;

@end
