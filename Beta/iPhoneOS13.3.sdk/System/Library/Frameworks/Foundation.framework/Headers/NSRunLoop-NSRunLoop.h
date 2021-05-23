/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSRunLoop.h>

@interface NSRunLoop (NSRunLoop)

+ (id)currentRunLoop;
+ (id)_new:(id)arg1;
+ (id)mainRunLoop;

- (id)init;
- (void)dealloc;
- (void)run;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __CFRunLoop *)getCFRunLoop;
- (void)_enumerateInfoPairsWithBlock:(CDUnknownBlockType)arg1;
- (void)_portInvalidated:(id)arg1;
- (_Bool)_containsPort:(id)arg1 forMode:(id)arg2;
- (void)_addPort:(id)arg1 forMode:(id)arg2;
- (void)_removePort:(id)arg1 forMode:(id)arg2;
- (_Bool)runMode:(id)arg1 beforeDate:(id)arg2;
- (void)performInModes:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addPort:(id)arg1 forMode:(id)arg2;
- (void)removePort:(id)arg1 forMode:(id)arg2;
- (_Bool)containsPort:(id)arg1 forMode:(id)arg2;
- (id)portsForMode:(id)arg1;
- (void)addTimer:(id)arg1 forMode:(id)arg2;
- (void)removeTimer:(id)arg1 forMode:(id)arg2;
- (id)timersForMode:(id)arg1;
- (_Bool)containsTimer:(id)arg1 forMode:(id)arg2;
- (id)allModes;
- (id)currentMode;
- (void)_invalidateTimers;
- (id)limitDateForMode:(id)arg1;
- (void)_wakeup;
- (void)acceptInputForMode:(id)arg1 beforeDate:(id)arg2;
- (_Bool)runMode:(id)arg1 untilDate:(id)arg2;
- (void)runUntilDate:(id)arg1;
- (_Bool)runBeforeDate:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned long long)arg4 modes:(id)arg5;
- (void)cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (void)cancelPerformSelectorsWithTarget:(id)arg1;

@end
