/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/_SBIconProgressTransition.h>

@interface _SBIconProgressFractionTransition : _SBIconProgressTransition

{
    double _targetFraction;
}

+ (id)newTransitionToFraction:(double)arg1;

- (_Bool)isCompleteWithView:(id)arg1;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (void)updateToFraction:(double)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;
- (void)_updateView:(id)arg1 forDisplayedFraction:(double)arg2;

@end
