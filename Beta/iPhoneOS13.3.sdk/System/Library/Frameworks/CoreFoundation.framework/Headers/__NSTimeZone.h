/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSTimeZone.h>

__attribute__((visibility("hidden")))
@interface __NSTimeZone : NSTimeZone

{
    struct __CFString *_name;
    struct __CFData *_data;
    void **_ucal;
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (id)name;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (id)data;
- (long long)secondsFromGMTForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (_Bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)localizedName:(long long)arg1 locale:(id)arg2;

@end
