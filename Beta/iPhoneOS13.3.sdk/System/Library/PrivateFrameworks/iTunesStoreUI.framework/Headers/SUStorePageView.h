/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class UIScrollView;

@interface SUStorePageView : UIView

{
    UIView *_backdropView;
    UIView *_contentView;
    UIView *_headerView;
    UIScrollView *_headerScrollView;
    UIView *_previewOverlayView;
    struct UIEdgeInsets _contentViewInsets;
}

@property (retain, nonatomic) UIView *backdropView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *previewOverlayView;
@property (nonatomic) struct UIEdgeInsets contentViewInsets;

- (void)dealloc;
- (void)layoutSubviews;

@end
