/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface HUShapeLayerView : UIView

{
    _Bool _fillColorMatchesTintColor;
    CDUnknownBlockType _pathLayoutBlock;
}

@property (nonatomic, readonly) CAShapeLayer *layer;
@property (nonatomic) _Bool fillColorMatchesTintColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (copy, nonatomic) CDUnknownBlockType pathLayoutBlock;

+ (Class)layerClass;

- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithPathLayoutBlock:(CDUnknownBlockType)arg1;

@end
