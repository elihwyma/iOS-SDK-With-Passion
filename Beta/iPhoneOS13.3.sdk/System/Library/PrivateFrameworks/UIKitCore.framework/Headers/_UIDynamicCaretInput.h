/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

__attribute__((visibility("hidden")))
@interface _UIDynamicCaretInput : UIView

{
    struct CGContext *_bitmapContext;
    long long _fadeCount;
    struct CGPoint _lastViewLoc;
    struct CGRect _inkedAreaOfBitmapContext;
    NSTimer *_fadeTimer;
    TIHandwritingStrokes *_accumulatedStrokes;
    UIDelayedAction *_committedAction;
    _UIDynamicCaretDot *_dotView;
}

@property (retain, nonatomic) NSTimer *fadeTimer;
@property (retain, nonatomic) TIHandwritingStrokes *accumulatedStrokes;
@property (retain, nonatomic) UIDelayedAction *committedAction;
@property (retain, nonatomic) _UIDynamicCaretDot *dotView;
@property (nonatomic, readonly) _Bool hasInk;
@property (nonatomic, readonly) _Bool isInking;

- (void)dealloc;
- (void)log;
- (void)send;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (double)inkWidth;
- (void)clearAndNotify:(_Bool)arg1;
- (void)committedStrokes;
- (void)clearFadeTimer;
- (void)drawPoint:(struct CGPoint)arg1;
- (void)addInkPoint:(struct CGPoint)arg1 fromLastPoint:(_Bool)arg2;
- (void)_fadeInk;
- (void)endTouchAtPoint:(struct CGPoint)arg1;
- (void)startTouchAtPoint:(struct CGPoint)arg1;
- (void)addTouchAtPoint:(struct CGPoint)arg1;
- (void)cancelTouchAtPoint:(struct CGPoint)arg1;

@end
