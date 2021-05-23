/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, PKPaletteAutoMinimizeOptionCell, UIStackView, UITraitCollection;

@protocol PKPaletteMoreOptionsViewControllerDelegate;

@interface PKPaletteMoreOptionsViewController : UIViewController

{
    _Bool _autoHideOn;
    id <PKPaletteMoreOptionsViewControllerDelegate> _delegate;
    UITraitCollection *_externalTraitCollection;
    NSLayoutConstraint *_stackViewMinWidthConstraint;
    NSArray *_stackViewPositioningConstraints;
    UIStackView *_stackView;
    PKPaletteAutoMinimizeOptionCell *_autoMinimizeCell;
}

@property (retain, nonatomic) UITraitCollection *externalTraitCollection;
@property (retain, nonatomic) NSLayoutConstraint *stackViewMinWidthConstraint;
@property (retain, nonatomic) NSArray *stackViewPositioningConstraints;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteAutoMinimizeOptionCell *autoMinimizeCell;
@property (weak, nonatomic) id <PKPaletteMoreOptionsViewControllerDelegate> delegate;
@property (nonatomic, getter=isAutoHideOn) _Bool autoHideOn;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_reloadItems;
- (void)_updateContentSize;
- (void)_updateAutoMinimizeCell;
- (void)_autoMinimizeCellDidChangeValue:(id)arg1;
- (void)updateUIForTraitCollection:(id)arg1;

@end
