/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSMutableArray, NSString, SBHDateHeaderViewController, SBHSidebarVisualConfiguration, WGWidgetGroupViewController, _UILegibilitySettings;

@protocol SBHSidebarProviderDelegate;

@interface SBHRootSidebarController : UIViewController

{
    SBHDateHeaderViewController *_dateViewController;
    _UILegibilitySettings *_legibilitySettings;
    WGWidgetGroupViewController *_widgetViewController;
    SBHSidebarVisualConfiguration *_sidebarVisualConfiguration;
    unsigned long long _layoutInsetsIgnoredEdges;
    id <SBHSidebarProviderDelegate> _delegate;
    NSMutableArray *_widgetViewControllerConstraints;
    NSLayoutConstraint *_dockHeightConstraint;
}

@property (nonatomic, readonly) SBHDateHeaderViewController *dateViewController;
@property (copy, nonatomic) NSMutableArray *widgetViewControllerConstraints;
@property (retain, nonatomic) NSLayoutConstraint *dockHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) WGWidgetGroupViewController *widgetViewController;
@property (retain, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (nonatomic) unsigned long long layoutInsetsIgnoredEdges;
@property (weak, nonatomic) id <SBHSidebarProviderDelegate> delegate;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setEditingIcons:(_Bool)arg1;
- (void)_configureWidgetViewController;
- (void)_updateDockHeightConstraint;
- (void)_configureLayoutMargins;
- (void)_addEditButton;

@end
