/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class NSMutableDictionary;

@interface _NTKPolygonCylinderTransformView : UIView

{
    unsigned long long _numberOfFaces;
    double _interiorAngle;
    double _exteriorAngle;
    NSMutableDictionary *_faceViews;
    unsigned long long _numberOfVisibleFaces;
    double _faceDistanceToCenter;
}

@property (nonatomic, readonly) unsigned long long numberOfFaces;
@property (nonatomic, readonly) unsigned long long numberOfVisibleFaces;
@property (nonatomic, readonly) double faceDistanceToCenter;
@property (nonatomic, readonly) double rotationAnglePerFace;

+ (Class)layerClass;

- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithNumberOfFaces:(unsigned long long)arg1;
- (void)setView:(id)arg1 forFaceAtIndex:(unsigned long long)arg2;
- (id)viewForFaceAtIndex:(unsigned long long)arg1;
- (void)enumerateFaceViewsWithBlock:(CDUnknownBlockType)arg1;
- (struct CATransform3D)_transformForFaceIndex:(unsigned long long)arg1;

@end
