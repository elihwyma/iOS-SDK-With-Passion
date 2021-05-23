/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UINavigationController.h>

@class IKAppTabBar, NSString, TVApplicationController, UITapGestureRecognizer, UIViewController;

@protocol IKAppNavigationController, NSObject, _TVAppNavigationControllerDelegate;

@interface _TVAppNavigationController : UINavigationController

{
    struct {
        unsigned int shouldOverrideModalBehaviorForPlaybackDocument:1;
        unsigned int shouldIgnoreDismissal:1;
        unsigned int shouldDismissShroud:1;
        unsigned int willLoadAppDocumentWithController:1;
        unsigned int willDisappear:1;
    } _ancDelegateFlags;
    TVApplicationController *_appController;
    id <_TVAppNavigationControllerDelegate> _appNavigationControllerDelegate;
    unsigned long long _maxNavControllerStackDepth;
    UITapGestureRecognizer *_menuRecognizer;
    UIViewController *_presentedModalViewController;
    id <NSObject> _modalPresenterObserverToken;
}

@property (retain, nonatomic) UITapGestureRecognizer *menuRecognizer;
@property (retain, nonatomic) UIViewController *presentedModalViewController;
@property (retain, nonatomic) id <NSObject> modalPresenterObserverToken;
@property (weak, nonatomic, readonly) TVApplicationController *appController;
@property (weak, nonatomic) id <_TVAppNavigationControllerDelegate> appNavigationControllerDelegate;
@property (nonatomic) unsigned long long maxNavControllerStackDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;
@property (nonatomic, readonly) id <IKAppNavigationController> appNavigationController;
@property (nonatomic, readonly) IKAppTabBar *appTabBar;

- (void)dealloc;
- (void)clear;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dismissed;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)initWithRootViewController:(id)arg1;
- (id)activeDocument;
- (void)dismissModal;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)removeDocument:(id)arg1;
- (id)documents;
- (void)setDocuments:(id)arg1 options:(id)arg2;
- (void)presentModal:(id)arg1 options:(id)arg2;
- (id)initWithApplicationController:(id)arg1;
- (void)dismissAllModals:(CDUnknownBlockType)arg1;
- (void)setAppNavigationControllersDelegate:(id)arg1;
- (void)_handleMenuAction:(id)arg1;
- (void)_doWillLoadAppDocumentWithController:(id)arg1;
- (_Bool)_shouldOverrideModalBehaviorForPlaybackDocument:(id)arg1 andExistingPlaybackDocument:(id)arg2;
- (void)_presentModalDocumentController:(id)arg1 options:(id)arg2;
- (_Bool)_shouldIgnoreModalDismissal:(id)arg1;
- (void)dismissModal:(_Bool)arg1;
- (id)popToRootDocument:(_Bool)arg1;

@end
