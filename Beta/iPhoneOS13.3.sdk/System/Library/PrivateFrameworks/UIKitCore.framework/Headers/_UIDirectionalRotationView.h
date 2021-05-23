/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@interface _UIDirectionalRotationView : UIView

@property (nonatomic, getter=isCounterTransformView) _Bool counterTransformView;
@property (nonatomic, getter=isInverseTransformView) _Bool inverseTransformView;

+ (Class)layerClass;

- (id)drLayer;

@end
