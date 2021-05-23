/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIColor, UILabel;

@interface SULoadingView : UIView

{
    long long _activityIndicatorStyle;
    UIColor *_activityIndicatorColor;
    UILabel *_label;
    UIActivityIndicatorView *_progressIndicator;
    unsigned long long _style;
    UIColor *_textColor;
    UIColor *_textShadowColor;
}

@property (nonatomic) long long activityIndicatorStyle;
@property (retain, nonatomic) UIColor *activityIndicatorColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *textShadowColor;

- (void)dealloc;
- (void)setStyle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)_setupSubviews;
- (id)newTextLabel;
- (id)newProgressIndicator;

@end
