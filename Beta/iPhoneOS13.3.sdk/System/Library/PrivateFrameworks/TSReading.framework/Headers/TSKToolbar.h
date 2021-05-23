/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UINavigationBar.h>

@class CALayer, NSString, TSKToolbarTitleView, UIColor, UINavigationItem;

@interface TSKToolbar : UINavigationBar

{
    UINavigationItem *_navigationItem;
    CALayer *_shadowLayer;
    _Bool _shadowEnabled;
    TSKToolbarTitleView *_navigationTitleView;
    double _leftToolbarItemsInset;
    double _rightToolbarItemsInset;
    double _leftToolbarItemsMaximumWidth;
    double _rightToolbarItemsMaximumWidth;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) TSKToolbarTitleView *navigationTitleView;
@property (nonatomic) _Bool shadowEnabled;
@property (nonatomic) double leftToolbarItemsInset;
@property (nonatomic) double rightToolbarItemsInset;
@property (nonatomic) double leftToolbarItemsMaximumWidth;
@property (nonatomic) double rightToolbarItemsMaximumWidth;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setItems:(id)arg1 animated:(_Bool)arg2 height:(double)arg3 isLeft:(_Bool)arg4;
- (id)itemWithTag:(long long)arg1;
- (void)setLeftItems:(id)arg1 title:(id)arg2 rightItems:(id)arg3 duration:(double)arg4;

@end
