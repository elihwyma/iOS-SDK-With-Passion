/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFObservable.h>

@protocol SBFObservable, SBFScheduler;

@interface _SBFScheduledObservable : SBFObservable

{
    id <SBFObservable> _observable;
    id <SBFScheduler> _scheduler;
}

- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 scheduler:(id)arg2;

@end
