/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, _UIBackdropView;

@protocol CKUnreadBannerViewDelegate;

__attribute__((visibility("hidden")))
@interface CKUnreadBannerView : UIView

{
    id <CKUnreadBannerViewDelegate> _delegate;
    unsigned long long _unreadCount;
    _UIBackdropView *_backdropView;
    UILabel *_label;
    UIImageView *_chevronView;
    UIView *_overlayView;
}

@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *chevronView;
@property (retain, nonatomic) UIView *overlayView;
@property (weak, nonatomic) id <CKUnreadBannerViewDelegate> delegate;
@property (nonatomic) unsigned long long unreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)layoutSubviews;
- (void)startAnimation;
- (void)stopAnimation;
- (void)bannerPressed:(id)arg1;

@end
