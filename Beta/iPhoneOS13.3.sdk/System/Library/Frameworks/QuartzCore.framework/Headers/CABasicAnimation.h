/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAPropertyAnimation.h>

@interface CABasicAnimation : CAPropertyAnimation

@property _Bool roundsToInteger;
@property double startAngle;
@property double endAngle;
@property (retain) id fromValue;
@property (retain) id toValue;
@property (retain) id byValue;

- (void)CA_prepareRenderValue;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
- (double)_timeFunction:(double)arg1;

@end
