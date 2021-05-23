/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, PXCuratedLibraryInlineHeaderViewConfiguration, UILabel, UIVisualEffectView;

@interface PXCuratedLibraryInlineHeaderView : UIView

{
    PXCuratedLibraryInlineHeaderViewConfiguration *_configuration;
    UIVisualEffectView *_effectView;
    UIView *_tintView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PXCuratedLibraryInlineHeaderViewConfiguration *_userData;
    struct CGRect _clippingRect;
}

@property (copy, nonatomic) PXCuratedLibraryInlineHeaderViewConfiguration *userData;
@property (nonatomic) struct CGRect clippingRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isAccessible;
@property (nonatomic, readonly) _Bool isContainedInAsset;
@property (copy, nonatomic, readonly) NSString *accessibilityLabel;

+ (double)_heightForStyle:(unsigned long long)arg1;
+ (id)_subtitleFontForStyle:(unsigned long long)arg1;
+ (id)_titleFontForStyle:(unsigned long long)arg1;
+ (struct CGSize)sizeWithConfiguration:(id)arg1;
+ (double)_titleBaselineDistanceForFont:(id)arg1;

- (void)prepareForReuse;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_setupBackgroundView;
- (void)_setupViews;
- (void)_updateConfiguration;
- (void)_configureViews;
- (void)becomeReusable;
- (void)_updateButtonWithConfiguration:(id)arg1;
- (void)_setEffectViewCornerRadius:(double)arg1;
- (id)_tintViewBackgroundColor;
- (void)_platformSpecificViewSetup;

@end
