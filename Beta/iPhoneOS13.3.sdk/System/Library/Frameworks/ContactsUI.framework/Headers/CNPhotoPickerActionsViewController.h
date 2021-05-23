/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CAShapeLayer, CNPhotoPickerActionButton, CNPhotoPickerActionsModel, NSString, UIStackView, UIView;

@protocol CNPhotoPickerActionsViewControllerDelegate, CNPhotoPickerActionsViewControllerLayout;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerActionsViewController : UIViewController <Swift>

{
    id <CNPhotoPickerActionsViewControllerDelegate> _delegate;
    CNPhotoPickerActionsModel *_actionsModel;
    UIStackView *_buttonsView;
    UIView *_imageContainerView;
    UIView *_transitionContainerView;
    CAShapeLayer *_clippingLayer;
    CNPhotoPickerActionButton *_editButton;
    CNPhotoPickerActionButton *_duplicateButton;
    CNPhotoPickerActionButton *_deleteButton;
    id <CNPhotoPickerActionsViewControllerLayout> _currentLayout;
}

@property (retain, nonatomic) UIStackView *buttonsView;
@property (retain, nonatomic) UIView *imageContainerView;
@property (retain, nonatomic) UIView *transitionContainerView;
@property (retain, nonatomic) CAShapeLayer *clippingLayer;
@property (retain, nonatomic) CNPhotoPickerActionButton *editButton;
@property (retain, nonatomic) CNPhotoPickerActionButton *duplicateButton;
@property (retain, nonatomic) CNPhotoPickerActionButton *deleteButton;
@property (retain, nonatomic) CNPhotoPickerActionsModel *actionsModel;
@property (retain, nonatomic) id <CNPhotoPickerActionsViewControllerLayout> currentLayout;
@property (weak, nonatomic) id <CNPhotoPickerActionsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)actionsModel:(id)arg1 didAssignToContact:(id)arg2 atIndexPath:(id)arg3;
- (void)actionsModel:(id)arg1 didEdit:(id)arg2 atIndexPath:(id)arg3;
- (void)actionsModel:(id)arg1 didDuplicate:(id)arg2 atIndexPath:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)actionsModel:(id)arg1 didDelete:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithActionsModel:(id)arg1;
- (void)layoutViewFromModel:(id)arg1;
- (void)updateButtonsFromModel:(id)arg1;
- (void)applyLayout:(id)arg1;
- (void)didTapDone;
- (void)presentDeleteConfirmationWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateActionsModelWithProviderItem:(id)arg1;
- (double)duplicateScaleDuration;
- (double)duplicateScaleDelay;
- (double)deleteMoveInDuration;
- (double)deleteMoveInDelay;
- (void)performDeleteTransitionToItem:(id)arg1;
- (void)performDuplicateTransitionToItem:(id)arg1 fromView:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
