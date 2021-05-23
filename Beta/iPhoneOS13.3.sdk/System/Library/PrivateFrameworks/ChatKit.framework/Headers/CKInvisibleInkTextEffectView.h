/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKInvisibleInkEffectView.h>

@class CAEmitterLayer, CALayer, CKTextBalloonView, NSArray, NSString, UITextView;

__attribute__((visibility("hidden")))
@interface CKInvisibleInkTextEffectView : CKInvisibleInkEffectView

{
    _Bool _blendingEnabled;
    CKTextBalloonView *_balloonView;
    UITextView *_textView;
    CAEmitterLayer *_textDrawEmitterLayer;
    CALayer *_dustEmitterContainerLayer;
    NSArray *_dustEmitterLayers;
    CAEmitterLayer *_dustDrawEmitterLayer;
}

@property (weak, nonatomic) CKTextBalloonView *balloonView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) CAEmitterLayer *textDrawEmitterLayer;
@property (retain, nonatomic) CALayer *dustEmitterContainerLayer;
@property (retain, nonatomic) NSArray *dustEmitterLayers;
@property (retain, nonatomic) CAEmitterLayer *dustDrawEmitterLayer;
@property (nonatomic) _Bool blendingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setSuspended:(_Bool)arg1;
- (void)reset;
- (void)setPaused:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)createDrawEmitter;
- (void)endDrawEmitterEffects;
- (void)moveEmittersWithTouches:(id)arg1;
- (void)endTouches;
- (void)attachToBalloonView:(id)arg1;
- (void)detachFromBalloonView;
- (void)endDustEmitterLayerFingerEffects:(id)arg1;
- (id)dustEmitter;
- (void)updateDustCellColor;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect)arg1;

@end
