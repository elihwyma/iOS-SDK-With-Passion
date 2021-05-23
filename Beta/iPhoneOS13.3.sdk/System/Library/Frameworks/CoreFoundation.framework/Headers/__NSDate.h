/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSDate.h>

__attribute__((visibility("hidden")))
@interface __NSDate : NSDate

{
    double _time;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (double)timeIntervalSinceReferenceDate;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;

@end
