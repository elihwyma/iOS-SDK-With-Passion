/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDAutoscroll, TSDInteractiveCanvasController, TSDKnob, TSDRep;

@interface TSDKnobTracker : NSObject

{
    TSDRep *mRep;
    TSDKnob *mKnob;
    struct CGPoint mCurrentPosition;
    struct CGPoint mKnobOffset;
    _Bool mDidBegin;
    _Bool mDidDrag;
    _Bool mDragEnding;
    _Bool mEndedOperationDueToESC;
    _Bool mIsInspectorDrivenTracking;
    TSDAutoscroll *mAutoscroll;
}

@property (nonatomic) _Bool didDrag;
@property (nonatomic, readonly) TSDInteractiveCanvasController *icc;
@property (retain, nonatomic) TSDRep *rep;
@property (retain, nonatomic) TSDKnob *knob;
@property (nonatomic, readonly) _Bool didBegin;
@property (nonatomic) _Bool dragEnding;
@property (nonatomic, readonly) double delay;
@property (nonatomic) struct CGPoint currentPosition;
@property (nonatomic, readonly) _Bool endedOperationDueToESC;
@property (nonatomic) _Bool isInspectorDrivenTracking;
@property (nonatomic, readonly) struct CGPoint knobOffset;
@property (retain, nonatomic) TSDAutoscroll *autoscroll;

- (void)dealloc;
- (void)autoscrollWillNotStart;
- (unsigned long long)enabledKnobMask;
- (struct CGRect)currentBoundsForStandardKnobs;
- (_Bool)shouldHideSelectionHighlight;
- (struct CGAffineTransform)transformInRootForStandardKnobs;
- (struct CGPoint)convertKnobPositionToUnscaledCanvas:(struct CGPoint)arg1;
- (_Bool)shouldUseKnobOffset;
- (void)i_setKnobOffset:(struct CGPoint)arg1;
- (_Bool)wantsAutoscroll;
- (_Bool)allowHUDToDisplay;
- (void)updateAfterAutoscroll:(id)arg1;
- (double)unscaledStartAutoscrollThreshold;
- (int)allowedAutoscrollDirections;
- (_Bool)supportsAlignmentGuides;
- (_Bool)operationShouldBeDynamic;
- (void)commitChangesForReps:(id)arg1;
- (void)changeDynamicLayoutsForReps:(id)arg1;
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;
- (_Bool)shouldHideOtherKnobs;
- (void)i_resetCurrentPositionToKnobPositionIfAppropriate;
- (void)beginMovingKnob;
- (void)moveKnobToCanvasPosition:(struct CGPoint)arg1;
- (void)endMovingKnob;
- (_Bool)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;
- (id)initWithRep:(id)arg1 knob:(id)arg2;
- (_Bool)shouldEndMovingKnobOnESC;
- (void)willEndMovingKnobDueToESC;

@end
