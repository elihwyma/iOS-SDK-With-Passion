/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@interface SUPreviewOverlayView : UIView

{
    UIView *_borderView;
    UIView *_storePageView;
}

@property (retain, nonatomic) UIView *storePageView;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
