/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSTimeZone.h>

__attribute__((visibility("hidden")))
@interface __NSPlaceholderTimeZone : NSTimeZone

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)name;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (id)data;
- (long long)secondsFromGMTForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (_Bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)__initWithName:(id)arg1 data:(id)arg2 cache:(_Bool)arg3;
- (id)__initWithName:(id)arg1 cache:(_Bool)arg2;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)initWithName:(id)arg1;

@end
