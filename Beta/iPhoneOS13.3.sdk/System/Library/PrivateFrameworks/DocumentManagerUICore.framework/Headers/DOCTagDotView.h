/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, NSString;

@interface DOCTagDotView : UIView

{
    _Bool _checked;
    long long _tagColor;
    CAShapeLayer *_noneDotLayer;
    CAShapeLayer *_dotLayer;
    CALayer *_checkmarkLayer;
    struct CGSize _dotSize;
}

@property (nonatomic, readonly) CAShapeLayer *noneDotLayer;
@property (nonatomic, readonly) CAShapeLayer *dotLayer;
@property (nonatomic, readonly) CALayer *checkmarkLayer;
@property (nonatomic) _Bool checked;
@property (nonatomic) struct CGSize dotSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long tagColor;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateColors;
- (void)updateLayoutOfLayers;

@end
