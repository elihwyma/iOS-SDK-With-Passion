/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@class SBDockIconListView, SBHighlightView, UIColor, UIImageView, _UILegibilitySettings;

@protocol SBDockViewDelegate;

@interface SBDockView : UIView

{
    SBDockIconListView *_iconListView;
    SBHighlightView *_highlightView;
    UIView *_backgroundView;
    UIImageView *_backgroundImageView;
    UIView *_accessibilityBackgroundView;
    _Bool _forSnapshot;
    _UILegibilitySettings *_legibilitySettings;
    unsigned long long _dockEdge;
    double _dockListOffset;
    id <SBDockViewDelegate> _delegate;
}

@property (nonatomic, readonly) UIColor *accessibilityBackgroundColor;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) unsigned long long dockEdge;
@property (nonatomic, readonly) double dockHeight;
@property (nonatomic, readonly) double dockHeightPadding;
@property (nonatomic, readonly) struct CGRect dockListViewFrame;
@property (nonatomic, readonly) SBDockIconListView *dockListView;
@property (nonatomic) double dockListOffset;
@property (weak, nonatomic) id <SBDockViewDelegate> delegate;
@property (nonatomic, readonly, getter=isDockInset) _Bool dockInset;

+ (double)defaultHeight;
+ (double)defaultHeightPadding;

- (void)dealloc;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setBackgroundAlpha:(double)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
- (id)initWithDockListView:(id)arg1 forSnapshot:(_Bool)arg2;
- (double)_minimumHomeScreenScale;
- (void)updateAccessibilityTintColor;
- (void)getDockViewMetrics:(CDStruct_cafad96f *)arg1;
- (void)_updateCornerRadii;

@end
