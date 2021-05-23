/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKInvisibleInkEffectView.h>

@class CAEmitterLayer, CALayer, NSString, UITextView;

__attribute__((visibility("hidden")))
@interface CKInvisibleInkEmojiEffectView : CKInvisibleInkEffectView

{
    _Bool _blendingEnabled;
    UITextView *_textView;
    CALayer *_emojiContainerLayer;
    CALayer *_emojiLayer;
    CAEmitterLayer *_drawEmitterLayer;
    CALayer *_dustContainerLayer;
    CAEmitterLayer *_dustEmitterLayer;
    CALayer *_blurredEmojiLayer;
    CALayer *_maskLayer;
}

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) CALayer *emojiContainerLayer;
@property (retain, nonatomic) CALayer *emojiLayer;
@property (retain, nonatomic) CAEmitterLayer *drawEmitterLayer;
@property (retain, nonatomic) CALayer *dustContainerLayer;
@property (retain, nonatomic) CAEmitterLayer *dustEmitterLayer;
@property (retain, nonatomic) CALayer *blurredEmojiLayer;
@property (retain, nonatomic) CALayer *maskLayer;
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
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)displayLayer:(id)arg1;
- (void)createDrawEmitter;
- (void)createDustEmitter;
- (void)endDustEmitterLayerFingerEffects;
- (void)disableBlending;
- (void)endDrawEmitterEffects;
- (void)enableBlending;
- (void)moveEmittersWithTouches:(id)arg1;
- (void)endTouches;
- (void)attachToBalloonView:(id)arg1;
- (void)detachFromBalloonView;

@end
