/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@protocol AVTTransitionScheduler

@property (copy, nonatomic, readonly) CDUnknownBlockType eventHandler;

- (unsigned short)stop;
- (unsigned short)initWithEventHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)scheduleEvent;
- (unsigned short)didCompleteEvent;

@end
