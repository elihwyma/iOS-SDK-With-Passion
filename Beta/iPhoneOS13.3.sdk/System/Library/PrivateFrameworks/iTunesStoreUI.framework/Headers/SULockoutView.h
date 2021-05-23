/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface SULockoutView : UIView

{
    UIImageView *_backgroundImageView;
    UILabel *_bodyLabel;
    UIImageView *_glowImageView;
    UIImageView *_imageView;
    long long _layoutPreset;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImage *backgroundImage;
@property (copy, nonatomic) NSString *body;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *glowImage;
@property (nonatomic) long long layoutPreset;
@property (copy, nonatomic) NSString *title;

- (void)dealloc;
- (void)layoutSubviews;
- (id)_imageView;
- (id)_titleLabel;
- (id)_newLabel;
- (id)_bodyLabel;
- (void)_layoutForSlowNetwork;

@end
