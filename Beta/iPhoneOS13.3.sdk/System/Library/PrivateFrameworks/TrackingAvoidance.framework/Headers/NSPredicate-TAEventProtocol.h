/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSPredicate.h>

@interface NSPredicate (TAEventProtocol)

+ (id)predicateForTAEventsInDateInterval:(id)arg1;
+ (id)predicateForTAEventsClass:(Class)arg1;
+ (id)predicateForTAEventsClass:(Class)arg1 andEventSubtype:(unsigned long long)arg2;

@end
