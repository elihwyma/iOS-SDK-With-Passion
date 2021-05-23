/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, DOCTagDotView;

@interface DOCTagCheckableDotView : UIView

{
    _Bool _checked;
    DOCTagDotView *_tagDotView;
    CAShapeLayer *_borderLayer;
}

@property (nonatomic, readonly) DOCTagDotView *tagDotView;
@property (nonatomic, readonly) CAShapeLayer *borderLayer;
@property (nonatomic) long long tagColor;
@property (nonatomic) _Bool checked;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateLayoutOfLayers;

@end
