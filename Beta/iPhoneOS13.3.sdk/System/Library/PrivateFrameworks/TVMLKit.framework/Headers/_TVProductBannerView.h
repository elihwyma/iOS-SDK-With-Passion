/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVFocusRedirectView.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVProductBannerView : _TVFocusRedirectView

{
    double _height;
    UIView *_backgroundImageView;
    UIView *_infoListView;
    UIView *_stackView;
    UIView *_heroImageView;
}

@property (retain, nonatomic) UIView *backgroundImageView;
@property (retain, nonatomic) UIView *infoListView;
@property (retain, nonatomic) UIView *stackView;
@property (retain, nonatomic) UIView *heroImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)productBannerViewWithElement:(id)arg1 existingView:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)preferredFocusEnvironments;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)impressionableElementsContainedInDocument:(id)arg1;

@end
