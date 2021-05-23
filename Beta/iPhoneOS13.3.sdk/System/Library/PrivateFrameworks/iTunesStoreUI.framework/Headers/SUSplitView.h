/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@interface SUSplitView : UIView

{
    UIView *_firstView;
    long long _layoutType;
    double _minimumPaneSize;
    UIView *_secondView;
    double _splitPosition;
    _Bool _vertical;
}

@property (retain, nonatomic) UIView *firstView;
@property (nonatomic) long long layoutType;
@property (retain, nonatomic) UIView *secondView;
@property (nonatomic) double splitPosition;
@property (nonatomic, getter=isVertical) _Bool vertical;
@property (nonatomic) double minimumPaneSize;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)_minimumPaneSizeForLayout;

@end
