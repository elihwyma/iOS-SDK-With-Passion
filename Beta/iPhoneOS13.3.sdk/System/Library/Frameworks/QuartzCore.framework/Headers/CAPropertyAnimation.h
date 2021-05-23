/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAAnimation.h>

@class CAValueFunction, NSString;

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString *keyPath;
@property (getter=isAdditive) _Bool additive;
@property (getter=isCumulative) _Bool cumulative;
@property (retain) CAValueFunction *valueFunction;

+ (id)animationWithKeyPath:(id)arg1;

- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (_Bool)additive;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
- (_Bool)cumulative;

@end
