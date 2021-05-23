/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSTimer.h>

__attribute__((visibility("hidden")))
@interface __NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)init;
- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (void)invalidate;
- (id)userInfo;
- (_Bool)isValid;
- (unsigned long long)_cfTypeID;
- (double)timeInterval;
- (double)tolerance;
- (void)setTolerance:(double)arg1;
- (id)fireDate;
- (void)setFireDate:(id)arg1;
- (void)fire;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;

@end
