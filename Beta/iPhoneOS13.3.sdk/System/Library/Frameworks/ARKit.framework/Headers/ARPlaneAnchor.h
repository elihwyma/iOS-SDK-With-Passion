/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARAnchor.h>

@class ARPatchGrid, ARPlaneGeometry, MISSING_TYPE, NSDictionary, NSString;

@interface ARPlaneAnchor : ARAnchor

{
    float _uncertaintyAlongNormal;
    long long _alignment;
    ARPlaneGeometry *_geometry;
    long long _classificationStatus;
    long long _classification;
    ARPatchGrid *_gridExtent;
    long long _worldAlignmentRotation;
    NSDictionary *_possibleClassifications;
    NSString *_classificationLabel;
    MISSING_TYPE *_center;
    MISSING_TYPE *_extent;
}

@property (nonatomic) MISSING_TYPE *center;
@property (nonatomic) MISSING_TYPE *extent;
@property (retain, nonatomic) ARPlaneGeometry *geometry;
@property (retain, nonatomic) ARPatchGrid *gridExtent;
@property (nonatomic) float uncertaintyAlongNormal;
@property (nonatomic) long long worldAlignmentRotation;
@property (nonatomic) long long classificationStatus;
@property (nonatomic) long long classification;
@property (copy, nonatomic) NSDictionary *possibleClassifications;
@property (retain, nonatomic) NSString *classificationLabel;
@property (nonatomic, readonly) long long alignment;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isClassificationSupported;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)debugQuickLookObject;
- (float)area;
- (id)_description:(_Bool)arg1;
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_14d5dc5e)arg2 alignment:(long long)arg3;
- (id)_hitTestFromOrigin:(_Bool)arg1 withDirection:(_Bool)arg2 usingExtent:usingGeometry: /* Error: Ran out of types for this method. */;

@end
