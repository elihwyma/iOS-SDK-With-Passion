/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKImageElement, IKViewElement, NSArray, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _TVDescriptiveAlertTemplateController : _TVBgImageLoadingViewController

{
    IKViewElement *_templateElement;
    NSArray *_templateSubviews;
    NSArray *_templateSubcontrollers;
    UIView *_preferredFocusView;
    UIColor *_backgroundColor;
    IKImageElement *_bgImageElement;
    IKImageElement *_bgHeroImageElement;
}

- (void)loadView;
- (long long)_blurEffectStyle;
- (void)updateWithViewElement:(id)arg1;
- (struct CGSize)_backgroundImageProxySize;
- (id)_backgroundImageProxy;
- (_Bool)_backgroundImageRequiresBlur;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)_normalizeButtonsInViews:(id)arg1;

@end
