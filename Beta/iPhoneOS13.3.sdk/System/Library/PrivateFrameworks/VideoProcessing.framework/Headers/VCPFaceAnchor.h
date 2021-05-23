/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSDictionary, VCPFaceGeometry;

@interface VCPFaceAnchor : NSObject

{
    NSDictionary *_blendShapes;
    VCPFaceGeometry *_geometry;
    CDStruct_14d5dc5e _transform;
}

@property (nonatomic, readonly) CDStruct_14d5dc5e transform;
@property (nonatomic, readonly) NSDictionary *blendShapes;
@property (nonatomic, readonly) VCPFaceGeometry *geometry;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1 blendShapes:(id)arg2 geometry:(id)arg3;

@end
