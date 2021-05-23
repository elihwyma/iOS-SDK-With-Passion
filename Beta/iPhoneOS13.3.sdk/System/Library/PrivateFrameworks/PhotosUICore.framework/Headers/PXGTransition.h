/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSSet, PXGLayout;

@interface PXGTransition : NSObject

{
    _Bool _invalid;
    _Bool _animatingTowardsInitialState;
    _Bool _animatingTowardsFinalState;
    _Bool _isIntercative;
    float _fractionCompleted;
    NSSet *_animations;
    PXGLayout *_layout;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic, readonly) PXGLayout *layout;
@property (nonatomic, readonly) _Bool invalid;
@property (nonatomic, readonly) _Bool animatingTowardsInitialState;
@property (nonatomic, readonly) _Bool animatingTowardsFinalState;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionBlock;
@property (nonatomic) _Bool isIntercative;
@property (nonatomic, readonly) NSSet *animations;
@property (nonatomic) float fractionCompleted;

- (void)invalidate;
- (id)initWithAnimations:(id)arg1 layout:(id)arg2;
- (void)animateToInitialStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateToFinalStateWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
