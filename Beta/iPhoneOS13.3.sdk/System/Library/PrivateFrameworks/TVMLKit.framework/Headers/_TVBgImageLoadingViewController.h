/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIViewController.h>

@class IKViewElement, NSString, UIView;

@interface _TVBgImageLoadingViewController : UIViewController

{
    id _imageProxy;
    _Bool _loaded;
    UIView *_rightLargeTitleButton;
    struct {
        _Bool respondsToBackroundImageProxy;
        _Bool respondsToBackgroundImageRequiresBlur;
        _Bool respondsToBackdropNeeded;
        _Bool respondsToImageProxySize;
        _Bool respondsToBlurEffectStyle;
        _Bool respondsToPurgeBgImages;
        _Bool respondsToConfigureBgImageBackdropImage;
        _Bool respondsToShouldLoadBackgroundImageAsynchronously;
    } _bgImageLoadingOptions;
    _Bool _appliedNavigationItem;
    IKViewElement *_navigationItemElement;
}

@property (retain, nonatomic) IKViewElement *navigationItemElement;
@property (nonatomic) _Bool appliedNavigationItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_decorateImage:(id)arg1 decorator:(id)arg2;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)_blurEffectStyle;
- (long long)preferredStatusBarStyle;
- (void)_updateNavigationItem;
- (void)updateNavigationItem:(id)arg1;
- (void)_dismissViewController:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (struct CGSize)_backgroundImageProxySize;
- (id)_backgroundImageProxy;
- (_Bool)_backgroundImageRequiresBlur;
- (void)loadFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isBackdropNeeded;
- (_Bool)_shouldLoadBackgroundImageAsynchronously;
- (void)configureAppearanceTransition;
- (long long)_overrideLargeTitleDisplayMode;
- (void)_updateNavigationBarPadding;
- (void)_reparentNavigationItem:(id)arg1;
- (_Bool)_isNewiOSTVApp;
- (id)_stackViewWithMinSpacing:(double)arg1 layoutMargin:(struct UIEdgeInsets)arg2;

@end
