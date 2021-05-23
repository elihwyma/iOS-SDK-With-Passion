/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAAnimation.h>

@class NSArray;

@interface CAAnimationGroup : CAAnimation

@property (copy) NSArray *animations;

- (void)CA_prepareRenderValue;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (void)setDefaultDuration:(double)arg1;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;

@end
