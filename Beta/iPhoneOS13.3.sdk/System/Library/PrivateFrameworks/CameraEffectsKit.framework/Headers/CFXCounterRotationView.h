/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

@interface CFXCounterRotationView : UIView

{
    double _zRotation;
}

@property (nonatomic) double zRotation;
@property (nonatomic) struct CGAffineTransform transform;

+ (Class)layerClass;

- (id)snapshotLayer;

@end
