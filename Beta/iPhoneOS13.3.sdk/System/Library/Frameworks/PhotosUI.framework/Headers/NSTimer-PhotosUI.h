/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSTimer.h>

@interface NSTimer (PhotosUI)

+ (void)blockInvoke:(id)arg1;
+ (id)pu_scheduledTimerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)pu_timerWithFireDate:(id)arg1 interval:(double)arg2 repeats:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
+ (id)pu_scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;

@end
