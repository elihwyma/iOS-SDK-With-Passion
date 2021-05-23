/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIViewController.h>

#import <iTunesStoreUI/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, SUClientInterface, SUNavigationItem, SURotationController, SUViewControllerContext, SUViewControllerScriptProperties, UIBarButtonItem;

@interface SUViewController : UIViewController <Swift>

{
    SUViewControllerScriptProperties *_cachedScriptProperties;
    _Bool _canBeWeakScriptReference;
    NSMutableArray *_cancelOnDeallocOperations;
    SUClientInterface *_clientInterface;
    _Bool _excludeFromNavigationHistory;
    UIBarButtonItem *_exitStoreButton;
    UIViewController *_footerViewController;
    UIViewController *_inputAccessoryViewController;
    _Bool _isEnteringForeground;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    NSMutableArray *_pendingDialogs;
    SUViewControllerContext *_restoredContext;
    SURotationController *_rotationController;
    long long _rotationState;
    _Bool _shouldInvalidateForMemoryPurge;
    _Bool _showsLibraryButton;
    long long _transitionSafetyCount;
    _Bool _skLoading;
    _Bool _shouldAdjustContentOffsets;
}

@property (nonatomic, readonly, getter=_cachedScriptProperties) SUViewControllerScriptProperties *_cachedScriptProperties;
@property (nonatomic, readonly, getter=_isEnteringForeground) _Bool _enteringForeground;
@property (nonatomic, readonly, getter=_pendingDialogs) NSArray *_pendingDialogs;
@property (nonatomic, readonly, getter=_restoredContext) SUViewControllerContext *_restoredContext;
@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (nonatomic, getter=isSkLoading) _Bool skLoading;
@property (nonatomic, readonly) UIViewController *footerViewController;
@property (retain, nonatomic) UIViewController *inputAccessoryViewController;
@property (nonatomic) _Bool shouldExcludeFromNavigationHistory;
@property (nonatomic) _Bool shouldAdjustContentOffsets;
@property (nonatomic) _Bool showsLibraryButton;
@property (nonatomic) _Bool shouldInvalidateForMemoryPurge;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;
@property (nonatomic, readonly, getter=isVisibleAndFrontmost) _Bool visibleAndFrontmost;
@property (nonatomic, readonly) double defaultPNGExpirationTime;
@property (nonatomic, readonly) NSString *defaultPNGName;
@property (retain, nonatomic, readonly) SUNavigationItem *navigationItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)setTitle:(id)arg1;
- (void)reload;
- (void)loadView;
- (long long)interfaceOrientation;
- (_Bool)becomeFirstResponder;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (id)inputAccessoryView;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (id)navigationController;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)initWithSection:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (id)tabBarItem;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (_Bool)_canReloadView;
- (id)_existingNavigationItem;
- (void)didReceiveMemoryWarning;
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)copyScriptProperties;
- (void)setScriptProperties:(id)arg1;
- (_Bool)presentDialogForError:(id)arg1 pendUntilVisible:(_Bool)arg2;
- (id)viewControllerFactory;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (long long)ITunesStoreUIBarStyle;
- (id)copyArchivableContext;
- (void)restoreArchivableContext:(id)arg1;
- (void)reloadContentSizeForViewInPopover;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_exitStoreButtonDidChangeNotification:(id)arg1;
- (id)copyDefaultScriptProperties;
- (void)_dismissFooterAnimationDidStop:(id)arg1;
- (void)trackOperation:(id)arg1 cancelOnDealloc:(_Bool)arg2;
- (void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (id)copyChildViewControllersForReason:(long long)arg1;
- (void)resetRestoredContext;
- (_Bool)presentDialog:(id)arg1 pendUntilVisible:(_Bool)arg2;
- (void)_presentFooterAnimationDidStop;
- (void)_reloadExitStoreButtonWithParentViewController:(id)arg1;
- (void)_invalidateForMemoryPurge;
- (void)storePageProtocolDidChange;
- (id)_rotationController;
- (id)newRotationController;
- (void)invalidateForMemoryPurge;
- (void)_exitStoreButtonAction:(id)arg1;
- (_Bool)clearsWeakScriptReferences;
- (void)cancelOperations;
- (void)dismissFooterViewControllerAnimated:(_Bool)arg1;
- (void)enqueueOperation:(id)arg1 cancelOnDealloc:(_Bool)arg2;
- (void)handleApplicationURL:(id)arg1;
- (void)presentFooterViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1 changeTabBarItem:(_Bool)arg2;
- (void)_reloadLibraryButton;

@end
