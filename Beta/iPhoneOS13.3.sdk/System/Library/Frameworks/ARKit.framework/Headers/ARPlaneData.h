/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface ARPlaneData : NSObject <Swift>

{
    NSDictionary *_planeIdentifiers;
    _Bool _sceneUnderstandingEnabled;
    unsigned long long _detectionTypeMask;
    struct CV3DSurfaceDetectionResult *_detectionResult;
}

@property (nonatomic, readonly) struct CV3DSurfaceDetectionResult *detectionResult;
@property (nonatomic, readonly) _Bool sceneUnderstandingEnabled;
@property (nonatomic, readonly) unsigned long long detectionTypeMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setSemanticsFromCV3D:(struct CV3DSurfaceSemantics *)arg1 sceneUnderstandingEnabled:(_Bool)arg2 onPlane:(id)arg3;

- (void)dealloc;
- (id)anchorsForCameraWithTransform:(CDStruct_14d5dc5e)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)initWithDetectionResult:(struct CV3DSurfaceDetectionResult *)arg1 detectionTypeMask:(unsigned long long)arg2 sceneUnderstandingEnabled:(_Bool)arg3;
- (id)_updatedAnchor:(id)arg1 forPlane:(struct CV3DSurfaceDetectionPlane *)arg2 referenceOriginTransform:(CDStruct_14d5dc5e)arg3;
- (id)_anchorForPlane:(struct CV3DSurfaceDetectionPlane *)arg1 identifier:(id)arg2 referenceOriginTransform:(CDStruct_14d5dc5e)arg3;
- (float)_surfaceOrientedPivotForPlane:(struct CV3DSurfaceDetectionPlane *)arg1;
- (CDStruct_14d5dc5e)_planeToWorldTransformForPlane:(struct CV3DSurfaceDetectionPlane *)arg1 pivot:(float)arg2;
- (long long)_worldAlignmentRotationForReferenceTransform:(CDStruct_14d5dc5e)arg1 planeAlignment:(long long)arg2;
- (void)_updateExtentsForPlaneAnchor:(id)arg1 plane:(struct CV3DSurfaceDetectionPlane *)arg2 pivot:(float)arg3;
- (CDStruct_183601bc)_boundsForPlane:(struct CV3DSurfaceDetectionPlane *)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3;
- (id)_geometryForPlane:(struct CV3DSurfaceDetectionPlane *)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3 planeBounds:(CDStruct_183601bc)arg4;
- (id)_gridExtentForPlane:(struct CV3DSurfaceDetectionPlane *)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3;
- (CDStruct_183601bc)_orientedBoundsForPlane:(struct CV3DSurfaceDetectionPlane *)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3;
- (id)hitTestFromOrigin:(CDStruct_14d5dc5e)arg1 withDirection:(long long)arg2 referenceOriginTransform:planeAlignment: /* Error: Ran out of types for this method. */;

@end
