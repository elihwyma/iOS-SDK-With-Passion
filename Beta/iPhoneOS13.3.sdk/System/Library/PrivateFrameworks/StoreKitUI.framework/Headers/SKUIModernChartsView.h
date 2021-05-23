/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIScrollView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface SKUIModernChartsView : UIView <Swift>

{
    _UIBackdropView *_backdropView;
    struct UIEdgeInsets _contentInset;
    UIView *_headerView;
    NSMutableArray *_headerViews;
    _Bool _hideHeader;
    UIScrollView *_scrollView;
    NSArray *_viewControllers;
}

@property (nonatomic, readonly) _UIBackdropView *backdropView;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateHeader;
- (void)_layoutHeadersWithColumnSize:(struct CGSize)arg1;
- (void)_layoutViewControllersWithColumnSize:(struct CGSize)arg1 contentInset:(struct UIEdgeInsets)arg2;
- (void)setColumnViewControllers:(id)arg1;

@end
