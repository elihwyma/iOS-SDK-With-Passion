/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, UILabel, WFContentCoercionNode;

__attribute__((visibility("hidden")))
@interface WFContentCoercionNodeView : UIView

{
    WFContentCoercionNode *_node;
    CAShapeLayer *_outlineLayer;
    UILabel *_nameLabel;
}

@property (weak, nonatomic) CAShapeLayer *outlineLayer;
@property (weak, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) WFContentCoercionNode *node;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateColors;

@end
