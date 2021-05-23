/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface MFGradientView : UIView

@property (nonatomic, readonly) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSArray *gradientColors;
@property (retain, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint startPoint;
@property (nonatomic) struct CGPoint endPoint;

+ (Class)layerClass;

@end
