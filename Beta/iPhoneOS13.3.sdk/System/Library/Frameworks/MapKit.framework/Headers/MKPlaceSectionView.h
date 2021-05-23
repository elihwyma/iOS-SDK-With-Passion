/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKStackView.h>

@class MKPlaceSectionItemView, MKViewWithHairline, NSArray;

@protocol MKPlaceSectionViewDelegate;

@interface MKPlaceSectionView : _MKStackView

{
    unsigned long long _trackingSelectForRow;
    MKViewWithHairline *_hairLineView;
    _Bool _highlightsTouches;
    _Bool _showsBottomHairline;
    id <MKPlaceSectionViewDelegate> _delegate;
    MKPlaceSectionItemView *_headerView;
    NSArray *_rowViews;
    MKPlaceSectionItemView *_footerView;
}

@property (weak, nonatomic) id <MKPlaceSectionViewDelegate> delegate;
@property (retain, nonatomic) MKPlaceSectionItemView *headerView;
@property (copy, nonatomic) NSArray *rowViews;
@property (retain, nonatomic) MKPlaceSectionItemView *footerView;
@property (nonatomic) _Bool highlightsTouches;
@property (nonatomic) _Bool showsBottomHairline;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)infoCardThemeChanged;
- (void)setRowViews:(id)arg1 animated:(_Bool)arg2;
- (void)_updateViewsAnimated:(_Bool)arg1;
- (unsigned long long)indexOfRowAt:(struct CGPoint)arg1;
- (id)rowAt:(struct CGPoint)arg1;
- (void)_updateHairlineInsets;
- (void)_touchesBeganForRow:(id)arg1 at:(unsigned long long)arg2;
- (void)_touchesCancelledForRow:(id)arg1 at:(unsigned long long)arg2;
- (void)_tappedRow:(id)arg1 at:(unsigned long long)arg2;
- (void)setHeaderView:(id)arg1 animated:(_Bool)arg2;
- (void)setFooterView:(id)arg1 animated:(_Bool)arg2;

@end
