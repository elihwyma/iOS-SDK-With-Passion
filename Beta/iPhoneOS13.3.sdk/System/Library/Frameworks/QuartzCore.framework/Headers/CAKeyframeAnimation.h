/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAPropertyAnimation.h>

@class NSArray, NSString;

@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray *values;
@property const struct CGPath *path;
@property (copy) NSArray *keyTimes;
@property (copy) NSArray *timingFunctions;
@property (copy) NSString *calculationMode;
@property (copy) NSArray *tensionValues;
@property (copy) NSArray *continuityValues;
@property (copy) NSArray *biasValues;
@property (copy) NSString *rotationMode;

- (void)CA_prepareRenderValue;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;

@end
