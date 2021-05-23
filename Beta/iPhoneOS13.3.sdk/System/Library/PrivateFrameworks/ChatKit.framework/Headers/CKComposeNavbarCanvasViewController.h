/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class CKNavigationBarCanvasView, NSString, UIButton, UILabel;

@protocol CKNavbarCanvasViewControllerDelegate;

@interface CKComposeNavbarCanvasViewController : UIViewController

{
    id <CKNavbarCanvasViewControllerDelegate> _delegate;
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    CKNavigationBarCanvasView *_canvasView;
}

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CKNavigationBarCanvasView *canvasView;
@property (weak, nonatomic) id <CKNavbarCanvasViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;
- (id)_windowTraitCollection;
- (double)_preferredHeightForTraitCollection:(id)arg1;
- (void)_initializeForTraitCollection:(id)arg1;
- (struct NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForView:(id)arg1;
- (void)_setupDefaultCanvasView;
- (_Bool)_shouldUseRTL;

@end
