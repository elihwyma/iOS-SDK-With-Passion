/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@interface WFOverlayImageTransform : NSObject

{
    double _rotation;
    double _scale;
    double _opacity;
    struct CGPoint _center;
    struct CGRect _bounds;
}

@property (nonatomic) struct CGPoint center;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) double opacity;

- (id)init;
- (id)initWithCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 opacity:(double)arg5;
- (id)initForCenteringImage:(id)arg1 inBackgroundImage:(id)arg2;
- (void)applyToImageFile:(id)arg1 withOverlayImage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
