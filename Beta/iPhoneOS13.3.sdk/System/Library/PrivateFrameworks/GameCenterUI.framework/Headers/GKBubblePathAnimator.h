/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@interface GKBubblePathAnimator : NSObject

@property (nonatomic, readonly) long long animatorType;

+ (id)sharedBubblePathAnimator;
+ (id)hiTimingFunction;

- (void)animateTransition:(id)arg1;
- (_Bool)bubblesOnscreenAtBeginning;
- (_Bool)bubblesOnscreenAtEnd;
- (void)animateTransition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)minimumDurationForViewAnimations;
- (id)effectiveViewForContext:(id)arg1;

@end
