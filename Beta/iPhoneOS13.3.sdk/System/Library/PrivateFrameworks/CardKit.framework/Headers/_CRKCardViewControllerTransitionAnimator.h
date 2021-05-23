/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <Foundation/NSObject.h>

@protocol _CRKCardViewControllerTransitionAnimatorDelegate;

@interface _CRKCardViewControllerTransitionAnimator : NSObject

{
    id <_CRKCardViewControllerTransitionAnimatorDelegate> _delegate;
}

@property (weak, nonatomic) id <_CRKCardViewControllerTransitionAnimatorDelegate> delegate;

+ (id)sectionShuffleTransitionAnimator;

- (void)_prepareAnimationFromCardViewController:(id)arg1 toCardViewController:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)transitionFromCardViewController:(id)arg1 toCardViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end
