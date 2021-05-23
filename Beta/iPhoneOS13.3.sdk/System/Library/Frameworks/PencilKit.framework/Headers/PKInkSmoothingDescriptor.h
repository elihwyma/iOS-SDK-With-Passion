/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@interface PKInkSmoothingDescriptor : NSObject

{
    double _stylusSmoothing;
    double _touchSmoothing;
    double _velocitySmoothing;
}

@property (nonatomic, readonly) double stylusSmoothing;
@property (nonatomic, readonly) double touchSmoothing;
@property (nonatomic, readonly) double velocitySmoothing;

+ (id)smoothingDescriptorWithStylus:(double)arg1 touch:(double)arg2 velocity:(double)arg3;
+ (id)defaultSmoothingDescriptor;

- (id)initWithStylusSmoothing:(double)arg1 touchSmoothing:(double)arg2 velocitySmoothing:(double)arg3;

@end
