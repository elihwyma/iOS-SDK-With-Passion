/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARAnchor.h>

@class MISSING_TYPE, NSData, NSUUID;

@protocol MTLTexture;

@interface AREnvironmentProbeAnchor : ARAnchor

{
    float _opaquePixelPercentage;
    id <MTLTexture> _environmentTexture;
    NSData *_colorHistogram;
    NSUUID *_trackedPlaneIdentifier;
    MISSING_TYPE *_extent;
}

@property (retain, nonatomic) id <MTLTexture> environmentTexture;
@property (retain, nonatomic) NSData *colorHistogram;
@property (nonatomic) float opaquePixelPercentage;
@property (retain, nonatomic) NSUUID *trackedPlaneIdentifier;
@property (nonatomic, readonly) MISSING_TYPE *extent;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)initWithName:(id)arg1 transform:(CDStruct_14d5dc5e)arg2;
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_14d5dc5e)arg2;
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_14d5dc5e)arg2 extent: /* Error: Ran out of types for this method. */;
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1 extent: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 transform:(CDStruct_14d5dc5e)arg2 extent: /* Error: Ran out of types for this method. */;
- (id)initWithIdentifier:(id)arg1 onPlane:(struct ARTexturedPlane)arg2;

@end
