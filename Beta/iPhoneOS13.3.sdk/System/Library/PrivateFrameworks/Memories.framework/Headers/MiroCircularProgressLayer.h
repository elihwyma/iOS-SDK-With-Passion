/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <QuartzCore/CALayer.h>

@class UIColor;

@interface MiroCircularProgressLayer : CALayer

{
    float _progress;
    UIColor *_progressColor;
    double _animationDuration;
}

@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double animationDuration;

+ (_Bool)needsDisplayForKey:(id)arg1;

- (id)initWithLayer:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;

@end
