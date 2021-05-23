/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <UIKit/UIView.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface LPPlayButtonShapeView : UIView

@property (retain, nonatomic, readonly) CAShapeLayer *layer;

+ (Class)layerClass;

@end
