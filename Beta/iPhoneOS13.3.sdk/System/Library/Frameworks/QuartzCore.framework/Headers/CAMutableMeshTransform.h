/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAMeshTransform.h>

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform

@property (copy) NSString *depthNormalization;
@property int subdivisionSteps;
@property _Bool replicatesEdges;

+ (id)meshTransform;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addVertex:(struct CAMeshVertex)arg1;
- (void)addFace:(struct CAMeshFace)arg1;
- (void)replaceVertexAtIndex:(unsigned long long)arg1 withVertex:(struct CAMeshVertex)arg2;
- (void)removeVertexAtIndex:(unsigned long long)arg1;
- (void)replaceFaceAtIndex:(unsigned long long)arg1 withFace:(struct CAMeshFace)arg2;
- (void)removeFaceAtIndex:(unsigned long long)arg1;

@end
