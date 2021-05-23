/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSTimer.h>

@interface NSTimer (PhotosUICore)

+ (void)blockInvoke:(id)arg1;
+ (id)px_scheduledTimerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)px_timerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)px_timerWithFireDate:(id)arg1 interval:(double)arg2 repeats:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
+ (id)px_scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;

@end
