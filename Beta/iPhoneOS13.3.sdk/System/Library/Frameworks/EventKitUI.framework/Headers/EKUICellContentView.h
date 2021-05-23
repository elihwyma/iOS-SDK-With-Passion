/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class EKUICellRowSeparatorView, UIColor, UIVisualEffect, UIVisualEffectView;

@interface EKUICellContentView : UIView

{
    UIVisualEffectView *_rowSeparatorParentView;
    EKUICellRowSeparatorView *_separatorViewForNonOpaqueContainers;
    _Bool _drawsOwnRowSeparators;
    _Bool _usesInsetMargin;
    UIColor *_rowSeparatorColor;
    UIVisualEffect *_rowSeparatorVisualEffect;
    struct UIEdgeInsets _separatorInset;
}

@property (nonatomic) struct UIEdgeInsets separatorInset;
@property (nonatomic) _Bool drawsOwnRowSeparators;
@property (retain, nonatomic) UIColor *rowSeparatorColor;
@property (retain, nonatomic) UIVisualEffect *rowSeparatorVisualEffect;
@property (nonatomic) _Bool usesInsetMargin;

+ (_Bool)vibrant;
+ (double)rowSeparatorThickness;

- (void)layoutSubviews;
- (void)_setMarginWidth:(double)arg1;
- (void)_layoutSeparator;
- (void)_setMarginExtendsToFullWidth:(_Bool)arg1;

@end
