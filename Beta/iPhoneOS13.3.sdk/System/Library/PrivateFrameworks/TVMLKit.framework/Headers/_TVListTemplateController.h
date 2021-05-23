/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKAudioElement, IKCollectionElement, IKImageElement, IKViewElement, NSString, UIView, UIViewController, _TVFocusCaptureView, _TVListViewController;

__attribute__((visibility("hidden")))
@interface _TVListTemplateController : _TVBgImageLoadingViewController

{
    IKViewElement *_templateElement;
    IKCollectionElement *_listElement;
    IKViewElement *_bannerElement;
    IKImageElement *_bgImageElement;
    IKAudioElement *_bgAudioElement;
    IKImageElement *_heroImageElement;
    UIView *_overlayView;
    _TVFocusCaptureView *_disabledTemplateFocusCaptureView;
    double _impressionThreshold;
    UIViewController *_focusedController;
    _TVListViewController *_listViewController;
    UIViewController *_previewViewController;
}

@property (retain, nonatomic) UIViewController *focusedController;
@property (retain, nonatomic) _TVListViewController *listViewController;
@property (retain, nonatomic) UIViewController *previewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_updateView;
- (long long)_blurEffectStyle;
- (void)updateWithViewElement:(id)arg1;
- (struct CGSize)_backgroundImageProxySize;
- (id)_backgroundImageProxy;
- (_Bool)_backgroundImageRequiresBlur;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)_configureWithBgElement:(id)arg1;
- (void)_configureWithListElement:(id)arg1;
- (id)_listTemplateView;
- (void)listViewController:(id)arg1 updatePreviewViewController:(id)arg2;
- (void)listViewController:(id)arg1 didScrollWithScrollView:(id)arg2;
- (_Bool)setNeedsFocusUpdateToList;

@end
