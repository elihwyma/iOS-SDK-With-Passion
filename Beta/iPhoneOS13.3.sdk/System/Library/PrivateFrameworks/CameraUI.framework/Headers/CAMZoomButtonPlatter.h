/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMZoomButton, NSArray, NSString, UIImageView;

@interface CAMZoomButtonPlatter : UIView

{
    double _zoomFactor;
    NSArray *_zoomFactors;
    NSString *_contentSizeCategory;
    UIImageView *__platterBackgroundView;
    NSArray *__allButtons;
    CAMZoomButton *__zoomButton1;
    CAMZoomButton *__zoomButton2;
    CAMZoomButton *__zoomButton3;
}

@property (nonatomic, readonly) UIImageView *_platterBackgroundView;
@property (nonatomic, readonly) NSArray *_allButtons;
@property (nonatomic, readonly) CAMZoomButton *_zoomButton1;
@property (nonatomic, readonly) CAMZoomButton *_zoomButton2;
@property (nonatomic, readonly) CAMZoomButton *_zoomButton3;
@property (nonatomic) double zoomFactor;
@property (nonatomic, readonly) CAMZoomButton *zoomFactorButton;
@property (copy, nonatomic) NSArray *zoomFactors;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) long long orientation;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)setZoomFactor:(double)arg1 animated:(_Bool)arg2;
- (id)nearestZoomButtonForTouch:(id)arg1;
- (double)baseZoomFactorForButton:(id)arg1;
- (void)_updateForContentSize;
- (void)_updateButtonsAnimated:(_Bool)arg1;
- (id)_createPlatterImageForContentSize:(id)arg1;

@end
