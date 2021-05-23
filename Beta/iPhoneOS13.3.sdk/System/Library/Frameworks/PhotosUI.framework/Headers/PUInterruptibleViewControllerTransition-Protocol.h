/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@protocol PUInterruptibleViewControllerTransition <Swift>

@property (nonatomic, readonly, getter=isTransitionPaused) _Bool transitionPaused;

- (unsigned short)pauseTransition;
- (unsigned short)updatePausedTransitionWithProgress:interactionProgress: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeTransition: /* Error: Ran out of types for this method. */;

@end
