/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface PUReviewScreenBarsSnapshot : UIView

{
    double _zRotation;
}

@property (nonatomic) double zRotation;
@property (nonatomic) struct CGAffineTransform transform;

+ (Class)layerClass;

- (id)snapshotLayer;

@end
