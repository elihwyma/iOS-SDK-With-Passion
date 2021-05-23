/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIControl.h>

@class UIBarButtonItem, UIToolbar;

@interface HKBarButtonItemControl : UIControl

{
    _Bool _collapseHeight;
    long long _preferredHeight;
    double _horizontalMargin;
    UIToolbar *_toolbar;
    UIBarButtonItem *_barButtonItem;
    UIControl *_barButtonItemControl;
}

@property (nonatomic) long long preferredHeight;
@property (nonatomic) _Bool collapseHeight;
@property (nonatomic) double horizontalMargin;
@property (nonatomic, readonly) UIToolbar *toolbar;
@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;
@property (nonatomic, readonly) UIControl *barButtonItemControl;

- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (void)_barButtonAction:(id)arg1;
- (id)initWithSystemItem:(long long)arg1 preferredHeight:(double)arg2 collapseHeight:(_Bool)arg3;

@end
