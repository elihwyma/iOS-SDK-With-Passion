/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CABehavior.h>

@class NSArray;

@interface CADynamicsBehavior : CABehavior

@property (copy) NSArray *springs;
@property (copy) NSArray *forceFields;
@property double timeStep;
@property double minimumTimeStep;
@property double stoppedVelocity;
@property double stoppedAngularVelocity;
@property double springScale;
@property double drag;
@property double angularDrag;
@property _Bool reactsToCollisions;
@property double collisionInterval;

+ (id)defaultValueForKey:(id)arg1;

- (struct Object *)CA_copyRenderValue;

@end
