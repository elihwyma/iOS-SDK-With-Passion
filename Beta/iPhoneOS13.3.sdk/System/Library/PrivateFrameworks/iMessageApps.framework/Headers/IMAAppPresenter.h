/*
 Image: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
 */

#import <Foundation/NSObject.h>

@class CKBrowserSwitcherViewController, CKBrowserTransitionCoordinator, CKFullScreenAppViewController, IMBalloonPlugin, NSString, UIViewController;

@protocol IMAAppPresenterDelegate;

@interface IMAAppPresenter : NSObject

{
    id <IMAAppPresenterDelegate> _delegate;
    IMBalloonPlugin *_currentBalloonPlugin;
    CKFullScreenAppViewController *_expandedAppViewController;
    CKBrowserTransitionCoordinator *_transitionCoordinator;
    _Bool _isTransitioningPresentationStyles;
    _Bool _alwaysPresentAppsExpanded;
    _Bool _hidesCompactAppForStickerDrag;
    double _compactHeight;
    CKBrowserSwitcherViewController *_switcherViewController;
}

@property (retain, nonatomic) CKBrowserSwitcherViewController *switcherViewController;
@property (weak, nonatomic) id <IMAAppPresenterDelegate> delegate;
@property (nonatomic) double compactHeight;
@property (nonatomic) _Bool alwaysPresentAppsExpanded;
@property (nonatomic, readonly) UIViewController *currentAppViewController;
@property (nonatomic) _Bool hidesCompactAppForStickerDrag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)disableAutomaticAppDiscovery;
+ (void)loadAppWithIdentifierIfNeeded:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)dismiss;
- (void)startEditingPayload:(id)arg1;
- (void)setLocalUserIsTyping:(_Bool)arg1;
- (id)dragControllerTranscriptDelegate;
- (void)dragManagerDidBeginDragging:(id)arg1;
- (void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
- (void)dragManagerDidEndDragging:(id)arg1;
- (int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2;
- (void)dragManager:(id)arg1 overrideDropPointForTarget:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAndReloadInputViews:(_Bool)arg1 forPlugin:(id)arg2;
- (void)dismissAndReloadInputViews:(_Bool)arg1;
- (_Bool)shouldAlwaysShowAppTitle;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)commitPayload:(id)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dismissToKeyboard:(_Bool)arg1;
- (void)commitSticker:(id)arg1;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)requestPresentationStyleFullScreenModalForPlugin:(id)arg1;
- (void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2;
- (void)switcherViewControllerDidCollapse:(id)arg1;
- (_Bool)switcherViewControllerShouldShowIconAndTitleWhenCompact:(id)arg1;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (struct CGSize)browserTransitionCoordinator:(id)arg1 preferredSizeForBrowser:(id)arg2;
- (double)browserTransitionCoordinatorCollapsedContentHeight:(id)arg1;
- (_Bool)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)arg1;
- (id)transitionsPresentationViewController;
- (void)hideAppViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyDelegateOfSelectedPlugin:(id)arg1;
- (struct CGRect)alwaysExpandedAppViewControllerFrame;
- (_Bool)addSwitcher;
- (void)positionSwitcherOffscreen:(_Bool)arg1;
- (void)animateSwitcherOffscreen:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hideCompactBrowserAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSwitcherViewFrame;
- (id)appViewControllerPresenter;
- (double)switcherHeight;
- (_Bool)isAppCompact;
- (_Bool)isSwitcherOffscreen;
- (void)presentAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentFullScreenModalAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAppFrameForRotation;

@end
