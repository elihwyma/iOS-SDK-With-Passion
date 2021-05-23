/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARCameraParameters : NSObject

{
    struct CGSize _imageResolution;
    struct CGPoint _focalLength;
    struct CGPoint _principalPoint;
}

@property (nonatomic, readonly) struct CGSize imageResolution;
@property (nonatomic, readonly) struct CGPoint focalLength;
@property (nonatomic, readonly) struct CGPoint principalPoint;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocalLength:(struct CGPoint)arg1 imageResolution:(struct CGSize)arg2 principalPoint:(struct CGPoint)arg3;

@end
