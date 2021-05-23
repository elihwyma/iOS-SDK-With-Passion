/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTTransitionSchedulerFactory : NSObject

+ (id)synchronousTransitionSchedulerWithEventHandler:(CDUnknownBlockType)arg1;
+ (id)concurrentTransitionSchedulerWithEventHandler:(CDUnknownBlockType)arg1 delay:(double)arg2;

@end
