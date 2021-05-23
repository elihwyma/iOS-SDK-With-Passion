/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIGestureRecognizer.h>

@class TSDInteractiveCanvasController, TSDRep, TSWPHyperlinkField;

@protocol TSWPHyperlinkHostRepProtocol;

@interface TSAHyperlinkGestureRecognizer : UIGestureRecognizer

{
    TSDInteractiveCanvasController *_icc;
    TSWPHyperlinkField *_hitField;
    TSDRep<TSWPHyperlinkHostRepProtocol> *_hitRep;
    _Bool _tapEnabled;
    _Bool _tapHoldEnabled;
    _Bool _wasTapHold;
    struct CGPoint _touchBeginPoint;
}

@property (retain, nonatomic) TSWPHyperlinkField *hitField;
@property (retain, nonatomic) TSDRep<TSWPHyperlinkHostRepProtocol> *hitRep;
@property (nonatomic) _Bool tapEnabled;
@property (nonatomic) _Bool tapHoldEnabled;
@property (nonatomic, readonly) _Bool wasTapHold;
@property (nonatomic) TSDInteractiveCanvasController *icc;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (void)reset;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)p_smartFieldForTouch:(id)arg1 outRep:(id *)arg2;
- (void)p_delayElapsed:(id)arg1;

@end
