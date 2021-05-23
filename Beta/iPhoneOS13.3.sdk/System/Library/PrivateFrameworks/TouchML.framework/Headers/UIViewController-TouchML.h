/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <UIViewController.h>

@class NSArray, NSDictionary, NSString, TMLContext;

@interface UIViewController (TouchML)

@property (copy, nonatomic) NSArray *previewActionItems;
@property (nonatomic, readonly) TMLContext *tmlContext;
@property (copy, nonatomic) NSDictionary *tmlObjects;
@property (nonatomic, readonly) NSString *tmlViewPath;

+ (void)tmlLoadCategory;

- (void)setPreferredStatusBarStyle:(long long)arg1;
- (void)setPrefersStatusBarHidden:(_Bool)arg1;
- (id)tmlLoadViewFromPath:(id)arg1;
- (void)setTMLValue:(id)arg1 forKeyPath:(id)arg2;
- (void)tmlTraitCollectionDidChange:(id)arg1;
- (void)_tmlUnloadContext;
- (_Bool)tmlLoadView;
- (id)tmlLoadView:(id)arg1;
- (void)tmlLoadViewOverride;
- (void)tmlViewDidLoad;
- (void)tmlViewWillAppear:(_Bool)arg1;
- (void)tmlViewDidAppear:(_Bool)arg1;
- (void)tmlViewWillDisappear:(_Bool)arg1;
- (void)tmlViewDidDisappear:(_Bool)arg1;
- (void)tmlViewWillLayoutSubviews;
- (void)tmlViewDidLayoutSubviews;
- (void)tmlUpdateViewConstraints;
- (void)tmlEncodeRestorableStateWithCoder:(id)arg1;
- (void)tmlDecodeRestorableStateWithCoder:(id)arg1;
- (void)tmlViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)tmlWillTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)tmlPreviewActionItems;
- (_Bool)tmlAccessibilityPerformEscape;
- (_Bool)tmlAccessibilityPerformMagicTap;
- (long long)tmlPreferredStatusBarStyle;
- (_Bool)tmlPrefersStatusBarHidden;
- (long long)tmlPreferredStatusBarUpdateAnimation;
- (id)tmlChildViewControllerForStatusBarStyle;
- (id)tmlChildViewControllerForStatusBarHidden;
- (_Bool)tmlShouldAutorotate;
- (unsigned long long)tmlSupportedInterfaceOrientations;
- (long long)tmlPreferredInterfaceOrientationForPresentation;
- (_Bool)tmlLoadViewControllerFromPath:(id)arg1;
- (_Bool)tmlLoadViewControllerWithSource:(id)arg1;
- (id)_tmlEnsureContext;
- (_Bool)tmlLoadViewWithSource:(id)arg1;
- (void)setPreferredStatusBarUpdateAnimation:(long long)arg1;
- (void)setChildViewControllerForStatusBarStyle:(id)arg1;
- (void)setChildViewControllerForStatusBarHidden:(id)arg1;

@end
