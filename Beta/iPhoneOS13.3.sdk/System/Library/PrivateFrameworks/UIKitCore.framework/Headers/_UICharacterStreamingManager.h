/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableArray, NSString, UITextView;

__attribute__((visibility("hidden")))
@interface _UICharacterStreamingManager : NSObject

{
    UITextView *_textView;
    CADisplayLink *_streamingAnimationDisplayLink;
    _Bool _streamingAnimationActive;
    double _lastAnimationUpdateTimeStamp;
    _Bool _committingFinalResults;
    _Bool _discardNextHypothesis;
    NSString *_previousHypothesis;
    NSString *_lastHypothesis;
    NSString *_targetHypothesis;
    NSMutableArray *_pendingEdits;
    double _streamingCharacterInsertionRate;
    double _minDurationBetweenHypotheses;
}

@property (copy, nonatomic) NSString *previousHypothesis;
@property (copy, nonatomic) NSString *lastHypothesis;
@property (copy, nonatomic) NSString *targetHypothesis;
@property (retain, nonatomic) NSMutableArray *pendingEdits;
@property (nonatomic) double streamingCharacterInsertionRate;
@property (nonatomic) double minDurationBetweenHypotheses;
@property (nonatomic) _Bool discardNextHypothesis;

- (void)_stopStreamingAnimation;
- (void)_startStreamingAnimations;
- (void)_displayLinkFired:(id)arg1;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (id)initWithTextView:(id)arg1;
- (void)commitFinalResults;
- (void)setWords:(id)arg1;

@end
