/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARAnchor.h>

@class ARFaceGeometry, ARFaceTrackingData, MISSING_TYPE, NSDictionary, NSError, NSString;

@interface ARFaceAnchor : ARAnchor

{
    NSDictionary *_blendShapeCoefficientsDictionary;
    _Bool _isTracked;
    ARFaceGeometry *_geometry;
    ARFaceTrackingData *_trackingData;
    NSError *_trackingError;
}

@property (retain, nonatomic) ARFaceTrackingData *trackingData;
@property (nonatomic) _Bool isTracked;
@property (retain, nonatomic) NSError *trackingError;
@property (nonatomic, readonly) ARFaceGeometry *geometry;
@property (nonatomic, readonly) CDStruct_14d5dc5e leftEyeTransform;
@property (nonatomic, readonly) CDStruct_14d5dc5e rightEyeTransform;
@property (nonatomic, readonly) MISSING_TYPE *lookAtPoint;
@property (nonatomic, readonly) NSDictionary *blendShapes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)blendShapeToMirroredBlendShapeMapping;
+ (id)blendShapeMapping;
+ (id)mirroredBlendShapeMapping;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (const MISSING_TYPE **)imageVertices;
- (MISSING_TYPE *)gazePoint;
- (id)initWithIdentifier:(id)arg1 trackingData:(id)arg2;
- (id)initWithExistingFaceAnchor:(id)arg1 tracked:(_Bool)arg2 trackingError:(id)arg3;
- (_Bool)isEqualToFaceAnchor:(id)arg1;

@end
