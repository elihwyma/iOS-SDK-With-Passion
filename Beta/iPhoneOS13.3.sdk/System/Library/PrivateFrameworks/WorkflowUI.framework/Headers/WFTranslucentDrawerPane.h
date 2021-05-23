/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UISearchBar, UIView, UIVisualEffectView, WFDrawerGrabberView, WFDrawerPaneContainer;

@protocol WFDrawerPaneHeaderView;

@interface WFTranslucentDrawerPane : UIViewController

{
    _Bool _translucent;
    _Bool _roundsTopCorners;
    _Bool _usesVisualEffectView;
    _Bool _candidateForContentCapture;
    WFDrawerPaneContainer *_container;
    UIViewController *_viewController;
    double _bottomContentInset;
    double _topCornerRadius;
    UISearchBar *_searchBar;
    NSString *_title;
    UIView *_titleView;
    UIView<WFDrawerPaneHeaderView> *_activeHeaderView;
    UIView *_contentView;
    NSString *_drawerGroup;
    UIView *_shadowView;
    WFDrawerGrabberView *_grabberView;
    UIVisualEffectView *_visualEffectView;
    UIView *_backgroundView;
    UIView *_backgroundContentView;
}

@property (weak, nonatomic) UIView *shadowView;
@property (weak, nonatomic) WFDrawerGrabberView *grabberView;
@property (weak, nonatomic) UIVisualEffectView *visualEffectView;
@property (weak, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) UIView *backgroundContentView;
@property (nonatomic, getter=isCandidateForContentCapture) _Bool candidateForContentCapture;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, getter=isTranslucent) _Bool translucent;
@property (nonatomic) _Bool roundsTopCorners;
@property (nonatomic) _Bool usesVisualEffectView;
@property (copy, nonatomic) NSString *drawerGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) WFDrawerPaneContainer *container;
@property (nonatomic, readonly) struct CGRect grabberAreaBounds;
@property (nonatomic) double bottomContentInset;
@property (nonatomic) double topCornerRadius;
@property (weak, nonatomic) UIView<WFDrawerPaneHeaderView> *activeHeaderView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UISearchBar *searchBar;

- (void)loadView;
- (_Bool)accessibilityPerformEscape;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithViewController:(id)arg1;
- (id)wf_drawerController;
- (id)wf_drawerItem;
- (void)wf_setDrawerController:(id)arg1;
- (void)wf_setDrawerItem:(id)arg1;
- (void)updateHeaderView;
- (void)willTransitionToVisibility:(unsigned long long)arg1;
- (void)transitionContentForHeight:(double)arg1;
- (void)didDismissHeaderView:(id)arg1;
- (void)updatePaneProperties;
- (void)installChildViewController:(id)arg1;

@end
