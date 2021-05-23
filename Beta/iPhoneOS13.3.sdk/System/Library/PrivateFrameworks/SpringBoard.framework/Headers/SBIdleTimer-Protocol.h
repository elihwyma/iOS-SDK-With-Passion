/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBIdleTimer <Swift>

@property (nonatomic, readonly, getter=isDisabled) _Bool disabled;

- (unsigned short)reset;
- (unsigned short)addIdleTimerObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeIdleTimerObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllIdleTimerObservers;

@end
