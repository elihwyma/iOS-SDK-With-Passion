/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIButton.h>

@class NSString, UIImageView;

@interface CAMFlipButton : UIButton

{
    _Bool __useCTMAppearance;
    long long _layoutStyle;
    long long _orientation;
    UIImageView *__imageView;
    UIImageView *__circleBackgroundView;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic, readonly) UIImageView *_imageView;
@property (retain, nonatomic) UIImageView *_circleBackgroundView;
@property (nonatomic, readonly) _Bool _useCTMAppearance;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)flipButtonOverContent;
+ (id)flipButtonWithLayoutStyle:(long long)arg1;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateImages;
- (id)mainImageNameForAccessibilityHUD:(_Bool)arg1;
- (void)_commonCAMFlipButtonInitializationWithStyle:(long long)arg1 overContent:(_Bool)arg2;
- (id)imageForAccessibilityHUD;

@end
