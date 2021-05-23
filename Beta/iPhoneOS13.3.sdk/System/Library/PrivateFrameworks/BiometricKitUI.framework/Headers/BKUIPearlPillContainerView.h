/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView;

@interface BKUIPearlPillContainerView : UIView

{
    NSMutableArray *_pillViews;
    UIImageView *_successAnimation;
    long long _numberOfVisiblePillViews;
    long long _clockwise;
    long long _counterwise;
    long long _lastAngle;
    _Bool _hasPillStateStash;
    unsigned long long _stashedPillStates[120];
    int _state;
    double _radius;
    struct CGPoint _enrollViewCenter;
}

@property (nonatomic) int state;
@property (nonatomic) struct CGPoint enrollViewCenter;
@property (nonatomic, readonly) double radius;

- (id)init;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)resetPillsAnimated:(_Bool)arg1;
- (unsigned long long)_numberOfVisiblePillViews;
- (void)setAllPillState:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unstashPillStatesAnimated:(_Bool)arg1;
- (long long)_indexForPillAtAngle:(double)arg1;
- (_Bool)fillPillsAroundAngle:(double)arg1 forTutorial:(_Bool)arg2;
- (void)_animateToFirstEnrollFinishedCompletion:(CDUnknownBlockType)arg1;
- (void)_animateToSecondEnrollInProgressCompletion:(CDUnknownBlockType)arg1;
- (void)_animateToSecondEnrollFinishedCompletion:(CDUnknownBlockType)arg1;
- (void)_animateToFinishedCompletion:(CDUnknownBlockType)arg1;
- (double)percentOfPillsCompleted;
- (void)stashPillStates;
- (_Bool)unstashPillStatesIfNeededAnimated:(_Bool)arg1;
- (_Bool)fillPillsAroundAngle:(double)arg1;
- (id)unfilledDirections;
- (void)setRadius:(double)arg1 center:(struct CGPoint)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateToState:(int)arg1 completion:(CDUnknownBlockType)arg2;

@end
