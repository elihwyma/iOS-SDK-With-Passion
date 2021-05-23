/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARCoachingBlendableSplineGroup, ARCoachingControlPointContainer, MISSING_TYPE, NSArray;

@protocol MTLBuffer;

@interface ARCoachingMetalSplineData : NSObject

{
    id <MTLBuffer> _controlPointsBuffer;
    id <MTLBuffer> _controlPointIndicesBuffer;
    id <MTLBuffer> _patchUserDataBuffer;
    id <MTLBuffer> _tessellationFactorsBuffer;
    id <MTLBuffer> _instanceBuffer;
    int _patchCount;
    NSArray *_instanceTransforms;
    ARCoachingBlendableSplineGroup *_shapes;
    ARCoachingControlPointContainer *_recordedControlPoints;
    MISSING_TYPE *_recordedScale;
    MISSING_TYPE *_recordedTranslation;
}

@property (nonatomic, readonly) id <MTLBuffer> controlPointsBuffer;
@property (nonatomic, readonly) id <MTLBuffer> controlPointIndicesBuffer;
@property (nonatomic, readonly) id <MTLBuffer> patchUserDataBuffer;
@property (nonatomic, readonly) id <MTLBuffer> tessellationFactorsBuffer;
@property (nonatomic, readonly) id <MTLBuffer> instanceBuffer;
@property (nonatomic, readonly) int patchCount;
@property (nonatomic, readonly) NSArray *instanceTransforms;
@property (nonatomic, readonly) ARCoachingBlendableSplineGroup *shapes;
@property (nonatomic, readonly) ARCoachingControlPointContainer *recordedControlPoints;
@property (nonatomic, readonly) MISSING_TYPE *recordedScale;
@property (nonatomic, readonly) MISSING_TYPE *recordedTranslation;

- (id)init:(id)arg1;
- (void)makeShapes;
- (void)resetInstanceTransforms:(id)arg1;
- (void)recordState;
- (id)shapeBlendWithStart:(CDStruct_37a3040a *)arg1 startCount:(int)arg2 end:(CDStruct_37a3040a *)arg3 endCount:(int)arg4 t:(float)arg5;
- (void)computeShapeBlendWithEnd:(CDStruct_37a3040a *)arg1 endCount:(int)arg2 t:(float)arg3;
- (void)computeShapeBlendWithEnd:(CDStruct_37a3040a *)arg1 endCount:(int)arg2;
- (void)computeShapeBlendWithStart:(CDStruct_37a3040a *)arg1 startCount:(int)arg2 end:(CDStruct_37a3040a *)arg3 endCount:(int)arg4 t:(float)arg5;
- (void)computeInstanceTransformScale:(float)arg1 t: /* Error: Ran out of types for this method. */;
- (void)computeInstanceTransformScale:(float)arg1 s1:t: /* Error: Ran out of types for this method. */;
- (void)computeInstanceTransformScale: /* Error: Ran out of types for this method. */;
- (void)computeInstanceTransformTranslate:(float)arg1 t:(int)arg2 index: /* Error: Ran out of types for this method. */;
- (void)computeInstanceTransformTranslate:(float)arg1 x1:(int)arg2 t:index: /* Error: Ran out of types for this method. */;
- (void)computeInstanceTransformTranslate:(int)arg1 index: /* Error: Ran out of types for this method. */;

@end
