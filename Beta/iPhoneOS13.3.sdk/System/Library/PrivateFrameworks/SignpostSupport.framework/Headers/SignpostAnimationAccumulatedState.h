/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, SignpostEvent;

@interface SignpostAnimationAccumulatedState : NSObject

{
    SignpostEvent *_animationBeginEvent;
    NSMutableArray *_compositorIntervals;
    NSMutableArray *_longCommitIntervals;
    NSMutableArray *_allCommitIntervals;
    NSMutableArray *_longSystemwideCommitIntervals;
    NSMutableArray *_allSystemwideCommitIntervals;
    NSMutableArray *_longTransactionLifetimes;
    NSMutableArray *_allTransactionLifetimes;
    NSMutableArray *_longFrameLatencies;
    NSMutableArray *_allFrameLatencies;
    NSMutableArray *_longHIDLatencies;
    NSMutableArray *_allHIDLatencies;
    NSMutableArray *_longRenders;
    NSMutableArray *_allRenders;
    NSMutableArray *_longFrameLifetimes;
    NSMutableArray *_longContributedFrameLifetimes;
    NSMutableArray *_allFrameLifetimes;
    NSMutableArray *_allContributedFrameLifetimes;
}

@property (nonatomic, readonly) SignpostEvent *animationBeginEvent;
@property (nonatomic, readonly) NSMutableArray *compositorIntervals;
@property (nonatomic, readonly) NSMutableArray *longCommitIntervals;
@property (nonatomic, readonly) NSMutableArray *allCommitIntervals;
@property (nonatomic, readonly) NSMutableArray *longSystemwideCommitIntervals;
@property (nonatomic, readonly) NSMutableArray *allSystemwideCommitIntervals;
@property (nonatomic, readonly) NSMutableArray *longTransactionLifetimes;
@property (nonatomic, readonly) NSMutableArray *allTransactionLifetimes;
@property (nonatomic, readonly) NSMutableArray *longFrameLatencies;
@property (nonatomic, readonly) NSMutableArray *allFrameLatencies;
@property (nonatomic, readonly) NSMutableArray *longHIDLatencies;
@property (nonatomic, readonly) NSMutableArray *allHIDLatencies;
@property (nonatomic, readonly) NSMutableArray *longRenders;
@property (nonatomic, readonly) NSMutableArray *allRenders;
@property (nonatomic, readonly) NSMutableArray *longFrameLifetimes;
@property (nonatomic, readonly) NSMutableArray *longContributedFrameLifetimes;
@property (nonatomic, readonly) NSMutableArray *allFrameLifetimes;
@property (nonatomic, readonly) NSMutableArray *allContributedFrameLifetimes;

- (id)initWithAnimationBeginEvent:(id)arg1 shouldTrackComposites:(_Bool)arg2 shouldTrackInMemoryEvents:(_Bool)arg3;
- (void)_handleCommitInterval:(id)arg1 isLong:(_Bool)arg2 isConcise:(_Bool)arg3;
- (void)_handleTransactionLifetimeInterval:(id)arg1 isLong:(_Bool)arg2 isConcise:(_Bool)arg3;
- (void)_handleHIDLatency:(id)arg1 isLong:(_Bool)arg2 isConcise:(_Bool)arg3;
- (void)_handleRenderServerRender:(id)arg1 isLong:(_Bool)arg2 isConcise:(_Bool)arg3;
- (void)_handleFrameLatency:(id)arg1 isLong:(_Bool)arg2 isConcise:(_Bool)arg3;
- (void)_handleFrameLifetime:(id)arg1 isLong:(_Bool)arg2 isConcise:(_Bool)arg3;
- (void)addCompositorInterval:(id)arg1;

@end
