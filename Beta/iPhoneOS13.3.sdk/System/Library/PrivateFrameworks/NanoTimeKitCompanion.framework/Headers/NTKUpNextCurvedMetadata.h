/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface NTKUpNextCurvedMetadata : NSObject

{
    double _radius;
    double _angle;
    UIImage *_maskImage;
    struct CGPoint _center;
}

@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) double angle;
@property (nonatomic, readonly) struct CGPoint center;
@property (nonatomic, readonly) UIImage *maskImage;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRadius:(double)arg1 angle:(double)arg2 center:(struct CGPoint)arg3 maskImage:(id)arg4;

@end
