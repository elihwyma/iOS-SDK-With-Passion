/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class CALayer, TSDCanvasSubviewsController, UIView, UIViewController;

@protocol TSDLayerAndSubviewHosting <Swift>

@property (retain, nonatomic, readonly) CALayer *topLevelTilingLayer;
@property (retain, nonatomic, readonly) CALayer *containerLayer;
@property (retain, nonatomic, readonly) UIView *containerView;
@property (retain, nonatomic, readonly) UIViewController *containerViewController;
@property (retain, nonatomic, readonly) TSDCanvasSubviewsController *subviewsController;

- (unsigned short)topLevelReps;

@end
