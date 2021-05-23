/*
 Image: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
 */

#import <UIKit/UIViewController.h>

@class CKBrowserSwitcherFooterView, CKBrowserSwitcherFooterViewDataSource, IMAAppPresenter, NSString;

@protocol IMADockViewControllerDelegate;

@interface IMADockViewController : UIViewController

{
    CKBrowserSwitcherFooterView *_appStrip;
    CKBrowserSwitcherFooterViewDataSource *_appStripDataSource;
    IMAAppPresenter *_appPresenter;
    _Bool _showIconBorders;
    id <IMADockViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <IMADockViewControllerDelegate> delegate;
@property (nonatomic) _Bool alwaysPresentAppsExpanded;
@property (nonatomic) _Bool showIconBorders;
@property (nonatomic, readonly) double minimizedDockHeight;
@property (nonatomic, readonly) UIViewController *currentAppViewController;
@property (nonatomic) _Bool hidesCompactAppForStickerDrag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)appStrip;
- (void)updateAppStripFrame;
- (void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
- (void)switcherView:(id)arg1 didMagnify:(_Bool)arg2;
- (void)cleanupRunningApps;
- (void)hideAppViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageViewForSticker:(id)arg1;

@end
