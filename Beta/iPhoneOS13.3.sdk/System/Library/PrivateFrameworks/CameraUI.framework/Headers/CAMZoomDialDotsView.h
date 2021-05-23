/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CALayer;

@interface CAMZoomDialDotsView : UIView

{
    double _dotSpacingAngle;
    CALayer *__dotLayer;
}

@property (nonatomic, readonly) CALayer *_dotLayer;
@property (nonatomic) long long dotCount;
@property (nonatomic) struct CGPoint dotCenter;
@property (nonatomic) double dotSpacingAngle;

+ (Class)layerClass;

- (id)initWithDotImage:(id)arg1;
- (id)_replicatorLayer;

@end
