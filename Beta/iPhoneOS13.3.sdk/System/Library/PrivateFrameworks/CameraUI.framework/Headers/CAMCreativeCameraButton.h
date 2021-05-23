/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIButton.h>

@class UIImageView;

@interface CAMCreativeCameraButton : UIButton

{
    _Bool _useCompactLayout;
    _Bool __overContent;
    long long _layoutStyle;
    long long _orientation;
    UIImageView *__circleBackgroundView;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic, readonly, getter=_isOverContent) _Bool _overContent;
@property (retain, nonatomic) UIImageView *_circleBackgroundView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (nonatomic) long long orientation;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, setter=useCompactLayout:) _Bool useCompactLayout;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateImages;
- (id)initWithLayoutStyle:(long long)arg1;
- (id)initForOverContent;
- (void)_commonCAMCreativeCameraButtonInitializationWithStyle:(long long)arg1 overContent:(_Bool)arg2;

@end
