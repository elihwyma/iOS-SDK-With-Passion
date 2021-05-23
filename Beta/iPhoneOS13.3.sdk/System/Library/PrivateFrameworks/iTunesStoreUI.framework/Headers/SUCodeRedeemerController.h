/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIViewController.h>

@class CRCodeRedeemerController, NSString, UIVisualEffectView;

@protocol SUCodeRedeemerControllerDelegate;

@interface SUCodeRedeemerController : UIViewController

{
    _Bool _cameraflipDirection;
    id <SUCodeRedeemerControllerDelegate> _delegate;
    UIVisualEffectView *_visualEffectView;
    CRCodeRedeemerController *_codeRedeemerController;
}

@property (nonatomic) _Bool cameraflipDirection;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) CRCodeRedeemerController *codeRedeemerController;
@property (weak, nonatomic) id <SUCodeRedeemerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)cameraSupported;

- (id)init;
- (void)cancel;
- (void)_setup;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_setChildViewController:(id)arg1;
- (void)startSession;
- (void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2;
- (void)codeRedeemerControllerDidCancel:(id)arg1;
- (void)recognitionError;
- (void)recognitionSuccess;
- (void)toggleCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enableBlur;
- (void)_disableBlur;
- (void)_setupCodeRedeemerController;
- (void)_setupFlipVisualEffectView;

@end
