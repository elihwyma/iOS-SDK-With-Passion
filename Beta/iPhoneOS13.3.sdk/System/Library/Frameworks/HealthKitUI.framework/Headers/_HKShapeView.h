/*
 Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _HKShapeView : UIView

@property (retain, nonatomic) UIBezierPath *path;
@property (nonatomic, readonly) CAShapeLayer *shapeLayer;

+ (Class)layerClass;

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end
