/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QLPUAnimationGroup : NSObject

{
    _Bool _paused;
    QLPUAnimationGroup *_superAnimationGroup;
    NSMutableArray *_subAnimationGroups;
    CDUnknownBlockType _completionHandler;
}

@property (weak, nonatomic) QLPUAnimationGroup *superAnimationGroup;
@property (nonatomic, readonly) NSMutableArray *subAnimationGroups;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly, getter=isReadyToComplete) _Bool readyToComplete;
@property (nonatomic) double elapsedTime;
@property (nonatomic, getter=isPaused) _Bool paused;

+ (void)pushAnimationGroup:(id)arg1;
+ (void)popAnimationGroup:(id)arg1;
+ (id)animationGroupWithAnimations:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (id)description;
- (void)complete;
- (void)finishImmediately;
- (void)completeIfNeeded;
- (void)addSubAnimationGroup:(id)arg1;
- (void)pauseAnimations;
- (void)resumeAnimations;

@end
