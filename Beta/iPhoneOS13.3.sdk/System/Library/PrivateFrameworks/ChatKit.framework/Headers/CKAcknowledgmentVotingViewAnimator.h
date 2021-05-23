/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSArray, UIView;

@protocol CKAcknowledgmentVotingViewAnimatorDelegate;

@interface CKAcknowledgmentVotingViewAnimator : NSObject

{
    UIView *_animationContainerView;
    id <CKAcknowledgmentVotingViewAnimatorDelegate> _delegate;
    NSArray *_sectionAnimators;
    NSArray *_animatorModelItems;
}

@property (retain, nonatomic) UIView *animationContainerView;
@property (copy, nonatomic) NSArray *sectionAnimators;
@property (copy, nonatomic) NSArray *animatorModelItems;
@property (weak, nonatomic) id <CKAcknowledgmentVotingViewAnimatorDelegate> delegate;

- (id)initWithCollectionView:(id)arg1 animatorModelItems:(id)arg2 acknowledgmentTypes:(id)arg3;
- (void)startAnimationWithDelay:(double)arg1;

@end
