/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTSynchronousTransitionScheduler : NSObject

{
    _Bool _isRunningEvent;
    CDUnknownBlockType _eventHandler;
}

@property (nonatomic) _Bool isRunningEvent;
@property (copy, nonatomic, readonly) CDUnknownBlockType eventHandler;

- (void)stop;
- (id)initWithEventHandler:(CDUnknownBlockType)arg1;
- (void)scheduleEvent;
- (void)didCompleteEvent;

@end
