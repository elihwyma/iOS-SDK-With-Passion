/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class SUGradient, SUGradientView, SULoadingView;

@interface SUPlaceholderViewController : SUViewController

{
    SUGradient *_backgroundGradient;
    SUGradient *_defaultBackgroundGradient;
    _Bool _hideLoadingView;
    SULoadingView *_loadingView;
    SUGradientView *_gradientView;
}

@property (copy, nonatomic) SUGradient *backgroundGradient;
@property (copy, nonatomic) SUGradient *defaultBackgroundGradient;
@property (nonatomic, readonly) SULoadingView *loadingView;
@property (nonatomic) _Bool shouldShowLoadingView;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)setScriptProperties:(id)arg1;
- (void)setSkLoading:(_Bool)arg1;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (void)parentViewControllerHierarchyDidChange;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)_reloadBackgroundGradient;
- (void)_reloadLoadingView;
- (id)_newURLBagBackgroundGradient;
- (id)_copyActiveGradient;

@end
