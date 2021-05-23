/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class CALayer;

@interface ARCoachingDeviceController : NSObject

{
    CALayer *_deviceLayer;
    CALayer *_holeLayer;
    CALayer *_shineLayer;
    CALayer *_deviceMaskLayer;
    CALayer *_shineInnerLayer;
    double _aspectRatio;
}

@property (nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGPoint position;
@property (nonatomic) struct CATransform3D transform;
@property (nonatomic) float opacity;

- (id)initWithDeviceMaskImage:(id)arg1 solidColor:(id)arg2;
- (id)initWithDeviceMaskImage:(id)arg1;
- (void)update:(double)arg1 visible:(double)arg2 layer:(id)arg3 renderParams:(CDStruct_d6f6a055)arg4;
- (void)setLayerParent:(id)arg1;

@end
