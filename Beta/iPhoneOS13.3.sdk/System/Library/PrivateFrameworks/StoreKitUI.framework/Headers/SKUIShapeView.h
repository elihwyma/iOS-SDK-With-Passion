/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface SKUIShapeView : UIView

@property (retain, nonatomic, readonly) CAShapeLayer *layer;

+ (Class)layerClass;

@end
