/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFocusTest.h>

@protocol UIFocusEnvironment, _UIFocusMoveTestDataSource, _UIFocusMoveTestDelegate;

@interface _UIFocusMoveTest : _UIFocusTest

{
    unsigned long long _activeNumberOfIterations;
    unsigned long long _currentIteration;
    unsigned long long _currentMove;
    struct {
        unsigned int isPerformingFocusMovement:1;
        unsigned int delegateRespondsToWillStartIteration:1;
        unsigned int delegateRespondsToDidFinishIteration:1;
        unsigned int delegateRespondsToWillMoveFocusAlongHeadingForMoveDuringIteration:1;
        unsigned int delegateRespondsToDidMoveFocusAlongHeadingForMoveDuringIteration:1;
        unsigned int dataSourceRespondsToNumberOfIterations:1;
        unsigned int dataSourceRespondsToMaximumNumberOfMovesDuringIteration:1;
        unsigned int dataSourceRespondsToDelayBeforeMoveDuringIteration:1;
        unsigned int dataSourceRespondsToHeadingForMoveDuringIteration:1;
        unsigned int dataSourceRespondsToShouldResetFocusBeforeIteration:1;
    } _flags;
    _Bool _resetsFocusBeforeIterations;
    id <UIFocusEnvironment> _containerFocusEnvironment;
    unsigned long long _numberOfIterations;
    unsigned long long _maximumMovesPerIteration;
    double _movementDelay;
    unsigned long long _movementHeading;
    id <_UIFocusMoveTestDataSource> _dataSource;
}

@property (weak, nonatomic) id <UIFocusEnvironment> containerFocusEnvironment;
@property (nonatomic) unsigned long long numberOfIterations;
@property (nonatomic) unsigned long long maximumMovesPerIteration;
@property (nonatomic) double movementDelay;
@property (nonatomic) unsigned long long movementHeading;
@property (nonatomic) _Bool resetsFocusBeforeIterations;
@property (weak, nonatomic) id <_UIFocusMoveTestDelegate> delegate;
@property (weak, nonatomic) id <_UIFocusMoveTestDataSource> dataSource;

- (void)main;
- (id)initWithIdentifier:(id)arg1;
- (void)reset;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)_dataSourceNumberOfIterations;
- (void)_performFocusMovementAfterDelayForMove:(unsigned long long)arg1 iteration:(unsigned long long)arg2;
- (double)_dataSourceDelayBeforeMove:(unsigned long long)arg1 duringIteration:(unsigned long long)arg2;
- (void)_resetFocusIfNecessaryBeforeIteration:(unsigned long long)arg1;
- (void)_notifyDelegateWillStartIteration:(unsigned long long)arg1;
- (void)_performFocusMovement;
- (unsigned long long)_dataSourceMaximumNumberOfMovesDuringIteration:(unsigned long long)arg1;
- (unsigned long long)_dataSourceHeadingForMove:(unsigned long long)arg1 duringIteration:(unsigned long long)arg2;
- (void)_notifyDelegateWillMoveFocusAlongHeading:(unsigned long long)arg1 forMove:(unsigned long long)arg2 duringIteration:(unsigned long long)arg3;
- (void)_notifyDelegateDidMoveFocusAlongHeading:(unsigned long long)arg1 forMove:(unsigned long long)arg2 duringIteration:(unsigned long long)arg3;
- (void)_notifyDelegateDidFinishIteration:(unsigned long long)arg1;
- (_Bool)_dataSourceShouldResetFocusBeforeIteration:(unsigned long long)arg1;

@end
