/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBPressGestureRecognizer.h>

@class NSMutableArray, NSMutableSet;

@interface SBClickGestureRecognizer : SBPressGestureRecognizer

{
    unsigned long long _numberOfClicksRequired;
    _Bool _allPressesUpRequired;
    double _maximumClickFormationDuration;
    double _maximumClickDownDuration;
    double _maximumBetweenClicksDelay;
    unsigned long long _recognizedClicksCount;
    _Bool _gestureWasRecognized;
    _Bool _allPressBeganReceived;
    NSMutableArray *_shortcutPressTypesSubsets;
    NSMutableSet *_receivedPressBeganTypes;
    NSMutableSet *_receivedPressEndedTypes;
}

@property (nonatomic) unsigned long long numberOfClicksRequired;
@property (nonatomic) _Bool allPressesUpRequired;
@property (nonatomic) double maximumClickFormationDuration;
@property (nonatomic) double maximumClickDownDuration;
@property (nonatomic) double maximumBetweenClicksDelay;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addShortcutWithPressTypes:(id)arg1;
- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2;
- (_Bool)didReceiveRequiredPressBeganCount;
- (_Bool)didReceiveRequiredPressEndedCount;
- (void)resetShortcutsTracking;
- (void)_notePressReceivedWithType:(long long)arg1 phase:(long long)arg2;
- (_Bool)_areRequiredPressTypesContainedInSet:(id)arg1;

@end
