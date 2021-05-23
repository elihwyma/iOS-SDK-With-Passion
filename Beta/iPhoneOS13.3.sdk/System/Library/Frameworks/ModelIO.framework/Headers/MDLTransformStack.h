/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@class CAAnimation, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MDLTransformStack : NSObject <Swift>

{
    _Bool _resetsTransform;
    NSMutableArray *_transformOps;
    NSMutableDictionary *_animatedValues;
}

@property (copy, nonatomic) NSMutableArray *transformOps;
@property (retain, nonatomic) NSMutableDictionary *animatedValues;
@property (nonatomic, readonly) CAAnimation *transformAnimation;
@property (copy, nonatomic, readonly) NSArray *keyTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_14d5dc5e matrix;
@property (nonatomic) _Bool resetsTransform;
@property (nonatomic, readonly) double minimumTime;
@property (nonatomic, readonly) double maximumTime;

+ (CDStruct_14d5dc5e)globalTransformWithObject:(id)arg1 atTime:(double)arg2;
+ (CDStruct_14d5dc5e)localTransformWithObject:(id)arg1 atTime:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)addMatrixOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addRotateXOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addRotateYOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addRotateZOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addTranslateOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addScaleOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addRotateOp:(id)arg1 order:(unsigned long long)arg2 inverse:(_Bool)arg3;
- (id)addOrientOp:(id)arg1 inverse:(_Bool)arg2;
- (CDStruct_14d5dc5e)float4x4AtTime:(double)arg1;
- (CDStruct_14d5dc5e)double4x4AtTime:(double)arg1;
- (id)animatedVector3WithName:(id)arg1 shouldCreateIfMissing:(_Bool)arg2;
- (id)animatedScalarWithName:(id)arg1 shouldCreateIfMissing:(_Bool)arg2;
- (id)animatedMatrix4x4WithName:(id)arg1 shouldCreateIfMissing:(_Bool)arg2;
- (id)animatedQuaternionWithName:(id)arg1 shouldCreateIfMissing:(_Bool)arg2;
- (CDStruct_14d5dc5e)localTransformAtTime:(double)arg1;
- (void)setLocalTransform:(CDStruct_14d5dc5e)arg1;
- (void)clearTransformStack;
- (void)setLocalTransform:(CDStruct_14d5dc5e)arg1 forTime:(double)arg2;
- (_Bool)isScaleRotateTransformOrder;
- (id)decomposedTransformAnimation;
- (id)animatedVector4WithName:(id)arg1 shouldCreateIfMissing:(_Bool)arg2;
- (id)animatedValueWithName:(id)arg1;

@end
