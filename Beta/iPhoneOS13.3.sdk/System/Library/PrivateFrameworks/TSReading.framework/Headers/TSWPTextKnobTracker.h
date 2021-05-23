/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDKnobTracker.h>

@class NSTimer, TSWPEditingController, TSWPTextMagnifierRanged;

@interface TSWPTextKnobTracker : TSDKnobTracker

{
    TSWPEditingController *_editingController;
    struct _NSRange _rangeAtStart;
    int _selectionType;
    unsigned long long _headCharAtStart;
    unsigned long long _tailCharAtStart;
    _Bool _multiTap;
    NSTimer *_textMagnifierTimer;
    TSWPTextMagnifierRanged *_magnifier;
    _Bool _doneTracking;
    _Bool _knobMoved;
    _Bool _didShowMagnifier;
    _Bool _ignoreNextCall;
}

@property (retain, nonatomic) TSWPEditingController *editingController;
@property (nonatomic, readonly) _Bool didShowMagnifier;
@property (nonatomic) _Bool ignoreNextCall;

+ (const struct TSWPLineFragment *)p_lineFragmentForCharIndex:(unsigned long long)arg1 knobTag:(unsigned long long)arg2 selectionType:(int)arg3 rep:(id)arg4;

- (void)dealloc;
- (double)delay;
- (void)autoscrollWillNotStart;
- (id)icc;
- (void)updateAfterAutoscroll:(id)arg1;
- (double)unscaledStartAutoscrollThreshold;
- (_Bool)shouldHideOtherKnobs;
- (void)moveKnobToCanvasPosition:(struct CGPoint)arg1;
- (void)endMovingKnob;
- (id)initWithRep:(id)arg1 knob:(id)arg2;
- (void)p_magnifyWithTarget:(id)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(_Bool)arg4 delayed:(_Bool)arg5;
- (void)p_cleanupWhenDone;
- (void)p_stopMagnifyingWithAnimation:(_Bool)arg1;
- (void)p_setSelectionFromPoint:(struct CGPoint)arg1;
- (void)p_fixUpWordSelection;
- (unsigned long long)p_charIndexForKnob:(unsigned long long)arg1 selection:(id)arg2;
- (_Bool)p_isMagnifyingVerticalText;
- (id)p_rangedMagnifier;
- (void)p_startMagnifying;
- (_Bool)p_newHeadCharIndex:(unsigned long long)arg1 isPastTailCharIndex:(unsigned long long)arg2 rep:(id)arg3;
- (_Bool)p_newTailCharIndex:(unsigned long long)arg1 isPastHeadCharIndex:(unsigned long long)arg2 rep:(id)arg3;
- (struct _NSRange)adjustSelectionRange:(struct _NSRange)arg1 forStorage:(id)arg2;
- (_Bool)fixupWordSelection;
- (void)updateAfterAutoscroll:(id)arg1 atPoint:(struct CGPoint)arg2;

@end
