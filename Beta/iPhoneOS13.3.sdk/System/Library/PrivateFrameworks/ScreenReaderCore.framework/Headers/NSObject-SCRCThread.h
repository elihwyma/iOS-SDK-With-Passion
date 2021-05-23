/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@interface NSObject (SCRCThread)

+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;

- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
- (id)performSelector:(SEL)arg1 withObjectsAsArray:(id)arg2;
- (void)_scr_safeGetValueForKeyPath:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForKeyPath:(id)arg1;
- (id)_getRetainedValueForKeyPathOnMainThread:(id)arg1 copy:(_Bool)arg2;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)_getRetainedValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copy:(_Bool)arg4;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (void)_scr_safeGetValueForSelector:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForBlock:(id)arg1 lock:(id)arg2;
- (void)_scr_safePerformBlock:(id)arg1 lock:(id)arg2;
- (id)threadDescription;
- (id)valueForKeyPathOnMainThread:(id)arg1;
- (id)copyValueForKeyPathOnMainThread:(id)arg1;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)valueForSelector:(SEL)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copyValue:(_Bool)arg4 withObjects:(id)arg5;
- (id)valueForBlock:(CDUnknownBlockType)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (void)performAsyncBlock:(CDUnknownBlockType)arg1 forThreadKey:(id)arg2;

@end
