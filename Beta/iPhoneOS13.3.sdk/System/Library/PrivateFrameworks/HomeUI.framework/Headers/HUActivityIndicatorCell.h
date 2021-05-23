/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class HUTitleDescriptionContentView, NSString, UIActivityIndicatorView, UIImage, UIImageView;

@protocol HFStringGenerator;

@interface HUActivityIndicatorCell : UITableViewCell

{
    _Bool _disabled;
    _Bool _animating;
    HUTitleDescriptionContentView *_titleDescriptionView;
    UIImageView *_iconImageView;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (nonatomic, readonly) HUTitleDescriptionContentView *titleDescriptionView;
@property (nonatomic, readonly) UIImageView *iconImageView;
@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) id <HFStringGenerator> titleText;
@property (retain, nonatomic) id <HFStringGenerator> descriptionText;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic, getter=isAnimating) _Bool animating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupConstraints;

@end
