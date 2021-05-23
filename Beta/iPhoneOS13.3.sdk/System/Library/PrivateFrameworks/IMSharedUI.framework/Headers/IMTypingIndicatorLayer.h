/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <QuartzCore/CALayer.h>

@class CAReplicatorLayer, NSString, UIColor, UITraitCollection;

@interface IMTypingIndicatorLayer : CALayer

{
    _Bool _hasDarkBackground;
    id _iconImage;
    struct UIColor *_bubbleColor;
    struct UIColor *_thinkingDotColor;
    UITraitCollection *_traitCollection;
    double _bubbleOpacity;
    double _thinkingDotOpacity;
    struct UIColor *_customBubbleColor;
    CALayer *_bubbleContainer;
    CALayer *_smallBubble;
    CALayer *_mediumBubble;
    CALayer *_largeBubble;
    CALayer *_thinkingDotContainer;
    CALayer *_thinkingDot;
    CAReplicatorLayer *_thinkingDots;
    CALayer *_iconImageLayer;
}

@property (retain, nonatomic) CALayer *bubbleContainer;
@property (retain, nonatomic) CALayer *smallBubble;
@property (retain, nonatomic) CALayer *mediumBubble;
@property (retain, nonatomic) CALayer *largeBubble;
@property (retain, nonatomic) CALayer *thinkingDotContainer;
@property (retain, nonatomic) CALayer *thinkingDot;
@property (retain, nonatomic) CAReplicatorLayer *thinkingDots;
@property (retain, nonatomic) CALayer *iconImageLayer;
@property (retain, nonatomic) id iconImage;
@property (copy, nonatomic) UIColor *bubbleColor;
@property (copy, nonatomic) UIColor *thinkingDotColor;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) double bubbleOpacity;
@property (nonatomic) double thinkingDotOpacity;
@property (copy, nonatomic) UIColor *customBubbleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasDarkBackground;

+ (struct CGSize)defaultSize;
+ (struct CGRect)largeBubbleFrame;
+ (_Bool)supportsTypingIndicatorAnimation;
+ (struct CGRect)iconImageFrame;
+ (struct UIColor *)defaultThinkingDotColor;
+ (struct UIColor *)defaultBubbleColor;
+ (double)defaultThinkingDotOpacity;
+ (double)defaultBubbleOpacity;
+ (struct CGRect)smallBubbleFrame;
+ (struct CGRect)mediumBubbleFrame;
+ (double)thinkingDotDiameter;
+ (struct CGPoint)thinkingDotsOffset;
+ (double)iconImageTrailingSpace;
+ (double)thinkingDotSpace;
+ (struct CGPoint)smallBubbleGrowOffset;
+ (struct CGPoint)mediumBubbleGrowOffset;
+ (struct CGPoint)largeBubbleGrowOffset;

- (id)init;
- (void)_setup;
- (void)stopAnimation;
- (void)startPulseAnimation;
- (void)startGrowAnimation;
- (void)stopPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_updateBubbleColors;
- (void)_updateBubbleOpacity;
- (id)resolvedColor:(id)arg1 forTraitCollection:(id)arg2;
- (void)_updateForImage;
- (void)_buildIconImage;
- (void)_buildThinkingDots;
- (double)convertedCurrentMediaTime;
- (id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (void)startGrowAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;

@end
