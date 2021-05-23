/*
 Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

#import <UIKit/UIView.h>

@interface CompassRotatingView : UIView

{
    double _compassHeading;
    double _angle;
}

@property (nonatomic) double compassHeading;
@property (nonatomic, readonly) double angle;

@end
