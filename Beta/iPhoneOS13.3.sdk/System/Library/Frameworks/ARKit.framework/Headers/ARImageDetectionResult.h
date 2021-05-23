/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARReferenceImage;

@interface ARImageDetectionResult : NSObject <Swift>

{
    double _estimatedScaleFactor;
    ARReferenceImage *_referenceImage;
    void *_imageContext;
    CDStruct_14d5dc5e _visionTransform;
    CDStruct_14d5dc5e _worldTrackingCameraTransformAtDetection;
}

@property (nonatomic) CDStruct_14d5dc5e visionTransform;
@property (nonatomic) double estimatedScaleFactor;
@property (retain, nonatomic) ARReferenceImage *referenceImage;
@property (nonatomic) CDStruct_14d5dc5e worldTrackingCameraTransformAtDetection;
@property (nonatomic) void *imageContext;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
