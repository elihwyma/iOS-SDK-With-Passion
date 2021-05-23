/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class _UIBackdropView;

@interface SKUISegmentedTableHeaderView : UIView

{
    _UIBackdropView *_backdropView;
    UIView *_borderView;
    UIView *_segmentedControl;
}

@property (nonatomic) _Bool hidesBorderView;
@property (retain, nonatomic) UIView *segmentedControl;
@property (nonatomic, readonly) _UIBackdropView *backdropView;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_borderView;

@end
