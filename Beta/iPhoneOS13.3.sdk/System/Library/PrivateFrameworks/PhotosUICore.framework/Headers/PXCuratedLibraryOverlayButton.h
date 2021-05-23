/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIControl.h>

@class NSString, PXCuratedLibraryOverlayButtonConfiguration, UIImageView, UILabel, UIView, UIVisualEffectView;

@interface PXCuratedLibraryOverlayButton : UIControl

{
    PXCuratedLibraryOverlayButtonConfiguration *_userData;
    UIVisualEffectView *_effectView;
    UIView *_contentView;
    UIView *_solidBackgroundView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_captionLabel;
    struct CGRect _clippingRect;
    struct UIEdgeInsets _hitTestInsets;
}

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *solidBackgroundView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *captionLabel;
@property (nonatomic) struct UIEdgeInsets hitTestInsets;
@property (copy, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *userData;
@property (nonatomic) struct CGRect clippingRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isAccessible;
@property (nonatomic, readonly) _Bool isContainedInAsset;
@property (copy, nonatomic, readonly) NSString *accessibilityLabel;

+ (struct UIFont *)defaultTitleFont;
+ (struct CGSize)sizeWithConfiguration:(id)arg1;
+ (id)defaultTitleColor;
+ (id)roundedCornerMaskImage:(CDStruct_2bd92d94)arg1 size:(struct CGSize)arg2;
+ (void)_getSize:(out struct CGSize *)arg1 titleFrame:(out struct CGRect *)arg2 captionFrame:(out struct CGRect *)arg3 iconFrame:(out struct CGRect *)arg4 forConfiguration:(id)arg5 title:(id)arg6;
+ (id)titleSizeCache;
+ (id)buttonSizeCache;
+ (struct CGSize)_sizeOfTitle:(id)arg1 withFont:(struct UIFont *)arg2;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setupEffectView;
- (void)_setupViews;
- (void)_performAction:(id)arg1;
- (void)_updateEffectView;
- (void)becomeReusable;
- (void)_updateButtonWithConfiguration:(id)arg1;
- (void)_platformSpecificViewSetup;
- (void)_updateEffectViewBackgroundStyle;

@end
