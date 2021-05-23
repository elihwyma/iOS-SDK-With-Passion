/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class CEKApertureSlider, NSMutableArray, NSString, UILabel, UIView, _UIBackdropView;

@protocol PUPhotoEditApertureToolbarDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditApertureToolbar : UIViewController

{
    UIView *_solidBackgroundView;
    _UIBackdropView *_backdropBackgroundView;
    _Bool _isResizing;
    struct CGSize _cachedSize;
    NSMutableArray *_constraints;
    _Bool _useTranslucentBackground;
    id <PUPhotoEditApertureToolbarDelegate> delegate;
    long long _layoutOrientation;
    double _sliderWidth;
    NSString *_backdropViewGroupName;
    CEKApertureSlider *_slider;
    UILabel *_depthEffectLabel;
    UILabel *_valueLabel;
}

@property (retain, nonatomic) CEKApertureSlider *slider;
@property (retain, nonatomic) UILabel *depthEffectLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (weak, nonatomic) id <PUPhotoEditApertureToolbarDelegate> delegate;
@property (nonatomic) double sliderWidth;
@property (nonatomic, readonly) double apertureValue;
@property (nonatomic, readonly) double originalApertureValue;
@property (nonatomic) double minimumApertureValue;
@property (nonatomic) double maximumApertureValue;
@property (nonatomic) _Bool enabled;
@property (nonatomic, readonly) struct UIEdgeInsets preferredPreviewViewInsets;
@property (nonatomic) _Bool useTranslucentBackground;
@property (copy, nonatomic) NSString *backdropViewGroupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long layoutOrientation;

- (id)init;
- (void)setLayoutOrientation:(long long)arg1;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)updateViewConstraints;
- (void)apertureSliderDidChangeApertureValue:(id)arg1;
- (void)setApertureValueClosestTo:(double)arg1;
- (void)_updateBackgroundAnimated:(_Bool)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setUseTranslucentBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setOriginalApertureValueClosestTo:(double)arg1;

@end
