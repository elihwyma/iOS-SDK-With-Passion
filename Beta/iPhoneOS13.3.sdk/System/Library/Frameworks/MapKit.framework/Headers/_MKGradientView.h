/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _MKGradientView : UIView

{
    CAGradientLayer *_gradient;
}

@property (copy) NSArray *gradientColors;
@property (copy) NSArray *gradientLocations;
@property struct CGPoint gradientEndPoint;
@property struct CGPoint gradientStartPoint;
@property (copy) NSString *gradientType;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;

@end
