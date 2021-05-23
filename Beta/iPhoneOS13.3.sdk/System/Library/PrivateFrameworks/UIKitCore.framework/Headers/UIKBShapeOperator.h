/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBShapeOperator : NSObject

{
    double _scale;
}

@property (nonatomic) double scale;

+ (id)operatorWithScale:(double)arg1;

- (id)shapesByResizingShapes:(id)arg1 withOffset:(struct CGPoint)arg2;
- (CDStruct_c3b9c2ee)_scaleRange:(CDStruct_c3b9c2ee)arg1 factor:(double)arg2;
- (struct CGRect)_scaleRect:(struct CGRect)arg1 factor:(struct CGSize)arg2;
- (id)shapeByScalingShape:(id)arg1 factor:(struct CGSize)arg2;
- (id)geometryByScalingShapeGeometry:(id)arg1 factor:(struct CGSize)arg2;
- (struct CGRect)rectByScalingRect:(struct CGRect)arg1 factor:(struct CGSize)arg2;
- (id)shapesByScalingShapes:(id)arg1 factor:(struct CGSize)arg2;
- (id)shapesByElaboratingShapes:(id)arg1 insideShape:(id)arg2 count:(long long)arg3;
- (id)shapesByCenteringShapes:(id)arg1 insideRect:(struct CGRect)arg2;
- (id)shapesByRepositioningShapes:(id)arg1 withOffset:(struct CGPoint)arg2;
- (id)shapesByInsettingShapes:(id)arg1 withInsets:(struct UIEdgeInsets)arg2;

@end
