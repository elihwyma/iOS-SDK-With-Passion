/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, _UIBackdropView;

@protocol SKUIStackedBarDelegate;

@interface SKUIStackedBar : UIView

{
    id <SKUIStackedBarDelegate> _delegate;
    _UIBackdropView *_backdropView;
    NSArray *_items;
    NSArray *_cells;
    _Bool _lastItemExpanded;
    _Bool _hidesStatusBar;
    _Bool _splitViewStyle;
    _Bool _alwaysShowsBackButton;
    _Bool _zeroHeightWhenFirstChildExpanded;
    double _offset;
    UIView *_wrapperView;
    UIView *_maskView;
    double _newOffset;
}

@property (weak) id <SKUIStackedBarDelegate> delegate;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) _Bool alwaysShowsBackButton;
@property (nonatomic) _Bool hidesStatusBar;
@property (nonatomic) _Bool lastItemExpanded;
@property (nonatomic) _Bool splitViewStyle;
@property (nonatomic) _Bool zeroHeightWhenFirstChildExpanded;
@property (nonatomic) double offset;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)_reload;
- (void)_buttonAction:(id)arg1;
- (void)setLastItemExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)animateToFullSizeIfNecessary;
- (void)_selectItemAtIndex:(long long)arg1;
- (void)_backAction:(id)arg1;
- (void)_resetNewOffset;

@end
