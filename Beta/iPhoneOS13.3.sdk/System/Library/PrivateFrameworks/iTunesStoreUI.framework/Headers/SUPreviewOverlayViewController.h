/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSString, SUPreviewOverlayStorePageViewController;

@interface SUPreviewOverlayViewController : SUViewController

{
    struct CGSize _contentSize;
    CDUnknownBlockType _loadBlock;
    _Bool _loaded;
    double _paddingRight;
    double _paddingTop;
    SUPreviewOverlayStorePageViewController *_storePageViewController;
    NSString *_userInfoString;
    _Bool _visible;
}

@property (nonatomic, readonly, getter=isContentLoaded) _Bool contentLoaded;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) double paddingRight;
@property (nonatomic) double paddingTop;
@property (copy, nonatomic) NSString *userInfoString;

+ (double)defaultAnimationDuration;
+ (id)defaultRequestProperties;
+ (void)offsetScrollView:(id)arg1 forViewController:(id)arg2;
+ (void)_setContentInsetsForScrollView:(id)arg1 viewController:(id)arg2;

- (void)dealloc;
- (void)loadView;
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_storePageViewController;
- (void)hideInNavigationController:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadWithRequestProperties:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showInNavigationController:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (void)hideInViewController:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showInViewController:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)invalidateForMemoryPurge;
- (id)_previewOverlayContainerForViewController:(id)arg1;
- (id)_scrollViewForViewController:(id)arg1;

@end
