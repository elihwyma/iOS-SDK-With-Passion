/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableView.h>

@class UISearchDisplayController, UIView;

@interface UISearchResultsTableView : UITableView

{
    double _offsetForNoResultsMessage;
    UIView *_topShadowView;
    UISearchDisplayController *_controller;
}

@property (weak, nonatomic) UISearchDisplayController *controller;
@property (retain, nonatomic, getter=_topShadowView, setter=_setTopShadowView:) UIView *_topShadowView;

- (void)setContentOffset:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)_numberOfRowsDidChange;
- (void)_setOffsetForNoResultsMessage:(double)arg1;
- (double)_offsetForNoResultsMessage;

@end
