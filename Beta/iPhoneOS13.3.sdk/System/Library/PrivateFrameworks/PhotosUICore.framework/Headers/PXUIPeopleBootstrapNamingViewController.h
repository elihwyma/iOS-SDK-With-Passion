/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSString, PHPerson, PXPeopleBootstrapContext, PXPeopleNamePickerViewController, PXPeopleNameSelection, UIView;

@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXUIPeopleBootstrapNamingViewController : UIViewController

{
    _Bool _textDidChange;
    id _context;
    id <PXPeopleFlowViewControllerActionDelegate> actionDelegate;
    PXPeopleNamePickerViewController *_namePicker;
    PXPeopleNameSelection *_selection;
    UIView *_pickerBackgroundView;
    NSLayoutConstraint *_pickerBackgroundViewHeightConstraint;
}

@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) PXPeopleBootstrapContext *bootstrapContext;
@property (nonatomic, readonly) unsigned long long type;
@property (retain, nonatomic) PXPeopleNamePickerViewController *namePicker;
@property (retain, nonatomic) PXPeopleNameSelection *selection;
@property (retain, nonatomic) UIView *pickerBackgroundView;
@property (retain, nonatomic) NSLayoutConstraint *pickerBackgroundViewHeightConstraint;
@property (nonatomic) _Bool textDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id context;
@property (nonatomic, readonly) struct CGSize preferredSize;
@property (weak, nonatomic) id <PXPeopleFlowViewControllerActionDelegate> actionDelegate;

- (id)initWithContext:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willTransitionToNextInFlow;
- (void)namePickerControllerWillChangeText:(id)arg1;
- (void)namePickerController:(id)arg1 didPickPerson:(id)arg2;
- (void)namePickerController:(id)arg1 didPickContact:(id)arg2;
- (void)namePickerController:(id)arg1 didPickString:(id)arg2;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)_localizedTitleString;
- (void)_captureStringSelectionIfNeeded;

@end
