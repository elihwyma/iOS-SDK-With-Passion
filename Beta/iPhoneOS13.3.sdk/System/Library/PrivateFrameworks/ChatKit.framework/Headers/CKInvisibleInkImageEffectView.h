/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKInvisibleInkEffectView.h>

@class CAEmitterLayer, CALayer, NSString;

__attribute__((visibility("hidden")))
@interface CKInvisibleInkImageEffectView : CKInvisibleInkEffectView

{
    CALayer *_blurredImageLayer;
    CALayer *_blurredImageContainerLayer;
    CALayer *_drawEmitterContainerLayer;
    CAEmitterLayer *_drawEmitterLayer;
    CALayer *_dustEmitterContainerLayer;
    CAEmitterLayer *_dustEmitterLayer;
}

@property (retain, nonatomic) CALayer *blurredImageLayer;
@property (retain, nonatomic) CALayer *blurredImageContainerLayer;
@property (retain, nonatomic) CALayer *drawEmitterContainerLayer;
@property (retain, nonatomic) CAEmitterLayer *drawEmitterLayer;
@property (retain, nonatomic) CALayer *dustEmitterContainerLayer;
@property (retain, nonatomic) CAEmitterLayer *dustEmitterLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setSuspended:(_Bool)arg1;
- (void)reset;
- (void)setImage:(id)arg1;
- (void)setPaused:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)disableBlending;
- (void)endDrawEmitterEffects;
- (void)enableBlending;
- (void)moveEmittersWithTouches:(id)arg1;
- (void)setupDrawEmitter;
- (void)setupDustEmitter;
- (void)endDustEmitterFingerEffects;
- (void)addDustRandomEmitterAnimationsWithSize:(struct CGSize)arg1;
- (void)setRandomAttractorsEnabled:(_Bool)arg1;

@end
