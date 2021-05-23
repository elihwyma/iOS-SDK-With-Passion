/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@class CAAnimation, MISSING_TYPE, NSArray, NSString;

@interface MDLTransform : NSObject <Swift>

{
    struct MDLAffineTransform _transform;
}

@property (nonatomic, readonly) CAAnimation *transformAnimation;
@property (nonatomic) MISSING_TYPE *translation;
@property (nonatomic) MISSING_TYPE *rotation;
@property (nonatomic) MISSING_TYPE *shear;
@property (nonatomic) MISSING_TYPE *scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_14d5dc5e matrix;
@property (nonatomic) _Bool resetsTransform;
@property (nonatomic, readonly) double minimumTime;
@property (nonatomic, readonly) double maximumTime;
@property (copy, nonatomic, readonly) NSArray *keyTimes;

+ (CDStruct_14d5dc5e)globalTransformWithObject:(id)arg1 atTime:(double)arg2;
+ (CDStruct_14d5dc5e)localTransformWithObject:(id)arg1 atTime:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (void)setIdentity;
- (id)initWithIdentity;
- (CDStruct_14d5dc5e)rotationMatrixAtTime:(double)arg1;
- (CDStruct_14d5dc5e)localTransformAtTime:(double)arg1;
- (void)setLocalTransform:(CDStruct_14d5dc5e)arg1;
- (void)setLocalTransform:(CDStruct_14d5dc5e)arg1 forTime:(double)arg2;
- (id)initWithMatrix:(CDStruct_14d5dc5e)arg1;
- (id)initWithTransformComponent:(id)arg1;
- (MISSING_TYPE *)scaleAtTime:(double)arg1;
- (MISSING_TYPE *)shearAtTime:(double)arg1;
- (MISSING_TYPE *)translationAtTime:(double)arg1;
- (MISSING_TYPE *)rotationAtTime:(double)arg1;
- (void)setMatrix:(CDStruct_14d5dc5e)arg1 forTime:(double)arg2;
- (void)setRotation:(double)arg1 forTime: /* Error: Ran out of types for this method. */;
- (void)setShear:(double)arg1 forTime: /* Error: Ran out of types for this method. */;
- (void)setScale:(double)arg1 forTime: /* Error: Ran out of types for this method. */;
- (void)setTranslation:(double)arg1 forTime: /* Error: Ran out of types for this method. */;
- (id)initWithTransformComponent:(id)arg1 resetsTransform:(_Bool)arg2;
- (id)initWithMatrix:(CDStruct_14d5dc5e)arg1 resetsTransform:(_Bool)arg2;

@end
