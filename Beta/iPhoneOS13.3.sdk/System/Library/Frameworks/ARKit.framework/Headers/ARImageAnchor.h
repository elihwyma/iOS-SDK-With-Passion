/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARAnchor.h>

@class ARReferenceImage, NSString;

@interface ARImageAnchor : ARAnchor

{
    _Bool _detectionOnly;
    _Bool _isTracked;
    ARReferenceImage *_referenceImage;
    double _estimatedScaleFactor;
}

@property (nonatomic, getter=isDetectionOnly) _Bool detectionOnly;
@property (nonatomic) _Bool isTracked;
@property (nonatomic, readonly) ARReferenceImage *referenceImage;
@property (nonatomic, readonly) double estimatedScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (void)setEstimatedScaleFactor:(double)arg1;
- (id)initWithReferenceImage:(id)arg1 transform:(CDStruct_14d5dc5e)arg2 detectionOnly:(_Bool)arg3 tracked:(_Bool)arg4;
- (id)copyWithTrackedState:(_Bool)arg1;

@end
