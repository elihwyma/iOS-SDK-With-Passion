/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIButton.h>

@class NSString;

@interface CAMFilterButton : UIButton

{
    long long _layoutStyle;
    long long _orientation;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic) long long layoutStyle;
@property (nonatomic, getter=isOn) _Bool on;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)filterButtonWithLayoutStyle:(long long)arg1;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (id)imageForAccessibilityHUD;
- (void)_commonCAMFilterButtonInitializationWithStyle:(long long)arg1;
- (id)_filterImage;
- (id)_filterOnImage;

@end
