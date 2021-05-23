/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKImageElement, IKViewElement;

__attribute__((visibility("hidden")))
@interface _TVLoadingViewController : _TVBgImageLoadingViewController

{
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImgElement;
    IKViewElement *_loadingTemplateElement;
    double _spinnerDelay;
}

- (id)init;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)_blurEffectStyle;
- (void)updateWithViewElement:(id)arg1;
- (struct CGSize)_backgroundImageProxySize;
- (void)updateWithLoadingTemplate:(id)arg1;
- (id)_backgroundImageProxy;
- (_Bool)_backgroundImageRequiresBlur;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)setSpinnerDelay:(double)arg1;

@end
