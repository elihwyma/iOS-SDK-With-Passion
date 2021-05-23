/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAAnimation.h>

@class CALayer, NSArray, NSString;

@interface CAMatchMoveAnimation : CAAnimation

@property (weak) CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;
@property unsigned int sourceContextId;
@property (copy) NSString *keyPath;
@property _Bool targetsSuperlayer;
@property (copy) NSArray *sourcePoints;
@property _Bool usesNormalizedCoordinates;
@property _Bool appliesX;
@property _Bool appliesY;
@property _Bool appliesScale;
@property _Bool appliesRotation;
@property (getter=isAdditive) _Bool additive;

+ (id)defaultValueForKey:(id)arg1;

- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;

@end
