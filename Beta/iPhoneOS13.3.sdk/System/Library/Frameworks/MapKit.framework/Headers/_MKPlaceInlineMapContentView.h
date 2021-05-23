/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKUIViewControllerClickableRootView.h>

@class MKMapItemView, MKViewWithHairline, NSLayoutConstraint, UIImage, UIImageView, UIView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView

{
    MKViewWithHairline *_hairlineView;
    NSLayoutConstraint *_topToTitleConstraint;
    NSLayoutConstraint *_titleToBottomConstraint;
    UIView *_mapView;
    UIImageView *_mapImageView;
    _MKUILabel *_titleLabel;
    MKMapItemView *_mapItemView;
}

@property (retain, nonatomic) UIImage *map;
@property (retain, nonatomic) MKMapItemView *mapItemView;
@property (nonatomic, getter=isBottomHairlineHidden) _Bool bottomHairlineHidden;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)hasTitle;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged;
- (double)mapViewHeight;
- (_Bool)useImageView;
- (double)titleHeight;

@end
