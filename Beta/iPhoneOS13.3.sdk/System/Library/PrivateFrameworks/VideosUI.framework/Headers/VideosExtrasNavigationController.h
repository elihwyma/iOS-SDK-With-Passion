/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UINavigationController.h>

@class NSString, UIViewController, VideosExtrasContext, VideosExtrasLoadingView, VideosExtrasMainTemplateViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasNavigationController : UINavigationController

{
    VideosExtrasLoadingView *_loadingView;
    UIViewController *_emptyViewController;
    VideosExtrasContext *_context;
    _Bool _clearStackOnPush;
    _Bool _showsBuiltInNavControls;
}

@property (weak, nonatomic, readonly) VideosExtrasContext *context;
@property (readonly) VideosExtrasMainTemplateViewController *mainTemplateViewController;
@property (nonatomic) _Bool showsBuiltInNavControls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithContext:(id)arg1;
- (void)viewDidLoad;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)willShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)removeDocument:(id)arg1;
- (id)documents;
- (void)_dismissViewController:(id)arg1;
- (void)loadingView:(id)arg1 documentDidUpdate:(id)arg2 options:(id)arg3;
- (void)setClearsStackOnNextPush;
- (void)_installDoneButtonOnNavigationItem:(id)arg1;
- (void)_presentDialogTemplate:(id)arg1;
- (id)_viewControllerForDocument:(id)arg1 index:(long long *)arg2;
- (void)_installBackButtonOnNavigationItem:(id)arg1 withTitle:(id)arg2;
- (void)_popViewControllerFromBackButton;
- (void)applyMainTemplateOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)finalizeMainTemplateOffset:(_Bool)arg1;

@end
