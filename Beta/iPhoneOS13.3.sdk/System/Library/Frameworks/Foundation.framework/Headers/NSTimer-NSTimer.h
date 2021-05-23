/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSTimer.h>

@interface NSTimer (NSTimer)

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(_Bool)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(_Bool)arg3;
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)timerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;

- (void)invalidate;
- (id)userInfo;
- (_Bool)isValid;
- (double)timeInterval;
- (double)tolerance;
- (void)setTolerance:(double)arg1;
- (id)fireDate;
- (void)setFireDate:(id)arg1;
- (void)fire;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;
- (double)_cffireTime;
- (double)interval;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (struct __CFString *)copyDebugDescription;
- (long long)order;
- (double)fireTime;
- (void)setFireTime:(double)arg1;
- (CDStruct_e097db04)context;

@end
