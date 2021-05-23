/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, NSArray, TVImageProxy, UIImageView, _TVOrganizerView;

__attribute__((visibility("hidden")))
@interface _TVDivTemplateController : _TVBgImageLoadingViewController

{
    IKViewElement *_viewElement;
    TVImageProxy *_backgroundImageProxy;
    UIImageView *_backgroundImageView;
    _TVOrganizerView *_contentView;
    NSArray *_viewControllers;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) TVImageProxy *backgroundImageProxy;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) _TVOrganizerView *contentView;
@property (copy, nonatomic) NSArray *viewControllers;

- (id)init;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (void)viewDidLayoutSubviews;
- (void)_updateContentView;
- (void)updateWithViewElement:(id)arg1;
- (struct CGSize)_backgroundImageProxySize;
- (id)_backgroundImageProxy;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;

@end
