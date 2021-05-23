/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIViewController.h>

@class AKController, AKInkSignatureView, AKSignatureBaselineView, AKSmoothPathView, NSString, UILabel, UINavigationBar, UIResponder;

@protocol AKSignatureCreationControllerDelegate;

@interface AKSignatureCreationViewController_iOS : UIViewController

{
    id <AKSignatureCreationControllerDelegate> _delegate;
    UINavigationBar *_navBar;
    AKSmoothPathView *_pathView;
    AKInkSignatureView *_signatureView;
    AKSignatureBaselineView *_baselineView;
    UILabel *_label;
    AKController *_controller;
    UIResponder *_responderToRestore;
}

@property (retain, nonatomic) UINavigationBar *navBar;
@property (retain, nonatomic) AKSmoothPathView *pathView;
@property (retain, nonatomic) AKInkSignatureView *signatureView;
@property (retain, nonatomic) AKSignatureBaselineView *baselineView;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) AKController *controller;
@property (weak, nonatomic) UIResponder *responderToRestore;
@property (weak) id <AKSignatureCreationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (_Bool)becomeFirstResponder;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (long long)positionForBar:(id)arg1;
- (void)didReceiveMemoryWarning;
- (_Bool)prefersStatusBarHidden;
- (id)initWithController:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)_clear:(id)arg1;
- (void)_setToolPickerVisible;
- (void)_validateButtons;

@end
