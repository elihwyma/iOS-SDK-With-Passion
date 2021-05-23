/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class TMLAffineTransform;

@interface TMLTransform3D : NSObject

{
    struct CATransform3D _transform;
}

@property (nonatomic, readonly) struct CATransform3D transform;
@property (nonatomic, readonly) TMLAffineTransform *affineTransform;
@property (nonatomic) double m11;
@property (nonatomic) double m12;
@property (nonatomic) double m13;
@property (nonatomic) double m14;
@property (nonatomic) double m21;
@property (nonatomic) double m22;
@property (nonatomic) double m23;
@property (nonatomic) double m24;
@property (nonatomic) double m31;
@property (nonatomic) double m32;
@property (nonatomic) double m33;
@property (nonatomic) double m34;
@property (nonatomic) double m41;
@property (nonatomic) double m42;
@property (nonatomic) double m43;
@property (nonatomic) double m44;

+ (void)initializeJSContext:(id)arg1;

- (id)CATransform3DValue;
- (id)initWithTransform3D:(struct CATransform3D)arg1;

@end
