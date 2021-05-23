/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol AVTTransitionScheduler;

@interface AVTTransitionCoordinator : NSObject

{
    double _delay;
    id <AVTTransitionScheduler> _scheduler;
    NSMutableArray *_pendingTransitions;
    NSMutableArray *_runningTransitions;
}

@property (retain, nonatomic) id <AVTTransitionScheduler> scheduler;
@property (nonatomic, readonly) NSMutableArray *pendingTransitions;
@property (nonatomic, readonly) NSMutableArray *runningTransitions;
@property (nonatomic, readonly) double delay;

+ (id)concurrentTransitionCoordinatorWithDelay:(double)arg1;
+ (id)synchronousTransitionCoordinator;
+ (CDUnknownBlockType)eventHandlerForCoordinator:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)addTransition:(id)arg1;
- (void)cancelAllTransitions;
- (void)cancelTransitionsMatchingModel:(id)arg1;
- (void)startNextTransition;
- (void)didCompleteRunningTransition:(id)arg1;
- (id)allTransitions;
- (id)transitionsMatchingModel:(id)arg1;

@end
