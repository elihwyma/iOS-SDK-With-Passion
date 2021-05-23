/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIViewController.h>

@class SUStorePageProtocol, SUViewControllerFactory;

@interface UIViewController (SUTabBarControllerAdditions)

@property (nonatomic, readonly) long long ITunesStoreUIBarStyle;
@property (nonatomic, readonly) SUViewControllerFactory *viewControllerFactory;
@property (nonatomic, readonly, getter=isSkLoaded) _Bool skLoaded;
@property (nonatomic, readonly, getter=isSkLoading) _Bool skLoading;
@property (nonatomic, readonly) _Bool shouldInvalidateForMemoryPurge;
@property (retain, nonatomic) SUStorePageProtocol *storePageProtocol;
@property (nonatomic, readonly) struct CGRect documentBounds;

+ (id)transitionSafePerformer:(id)arg1;
+ (id)transitionSafetyDelegate;
+ (void)endTransitionSafety;
+ (void)beginTransitionSafety;
+ (void)_iTunesStoreUI_timeoutTransitionSafety;
+ (void)_iTunesStoreUI_dequeueTransitionSafeInvocations;
+ (void)_iTunesStoreUI_enqueueTransitionSafeInvocation:(id)arg1;

- (id)section;
- (void)dismissAnimated:(_Bool)arg1;
- (id)overlayViewController;
- (id)displayedURL;
- (_Bool)reloadWithURLRequestProperties:(id)arg1;
- (id)navigationItemForScriptInterface;
- (id)overlayBackgroundViewController;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (id)copyArchivableContext;
- (void)tabBarControllerDidLongPressTabBarItem:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (_Bool)presentOverlayBackgroundViewController:(id)arg1;
- (id)_sectionForViewController:(id)arg1;
- (void)dismissOverlayBackgroundViewController;
- (id)su_closestNavigationController;
- (_Bool)isDescendantOfViewController:(id)arg1;
- (id)scriptWindowContext;
- (void)resetRestoredContext;
- (id)iTunesStoreUI_searchFieldController;
- (struct CGSize)maximumViewSize;
- (_Bool)isRootViewController;
- (void)parentViewControllerHierarchyDidChange;
- (void)storePageProtocolDidChange;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)keyboardDidShowWithInfo:(id)arg1;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (id)copyArchivableJetsamContext;
- (void)setBadgeValue:(id)arg1 animated:(_Bool)arg2 blink:(_Bool)arg3;
- (_Bool)isInMoreList;
- (void)iTunesStoreUI_dismissAction:(id)arg1;
- (id)copyScriptViewController;
- (_Bool)viewIsReady;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (_Bool)canDisplaySectionGroup:(id)arg1;
- (void)storePageCleanupBeforeTearDown;
- (_Bool)presentViewController:(id)arg1 inOverlayWithConfiguration:(id)arg2;
- (_Bool)presentOverlayViewController:(id)arg1 withTransition:(id)arg2;
- (_Bool)hasDisplayableContent;
- (_Bool)pushStorePage:(id)arg1 withTarget:(long long)arg2 animated:(_Bool)arg3;
- (id)setDisplayedSectionGroup:(id)arg1;
- (_Bool)reloadForSectionsWithGroup:(id)arg1;
- (void)handleStoreFailureWithError:(id)arg1;
- (_Bool)loadMoreWithURL:(id)arg1;
- (void)setShowsBackgroundShadow:(_Bool)arg1;
- (_Bool)showsBackgroundShadow;
- (struct CGSize)minimumViewSize;
- (void)transitionSafePresentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (id)storeSplitViewController;

@end
